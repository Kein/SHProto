#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SHVehicleComponent.generated.h"

class ACharacter;
class USHVehicleComponent;
class USHVehicleMovementProcessor;
class USHVehicleSpotComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHVehicleComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSHVehicleSpotEvent, USHVehicleComponent*, VehiclePtr, USHVehicleSpotComponent*, VehicleSpotPtr);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHVehicleEvent, USHVehicleComponent*, VehiclePtr);
    
    UPROPERTY(BlueprintAssignable)
    FSHVehicleSpotEvent OnPassagerSpotRegister;
    
    UPROPERTY(BlueprintAssignable)
    FSHVehicleSpotEvent OnPassagerSpotUnregister;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<USHVehicleMovementProcessor> MovementProcessorClass;
    
    UPROPERTY(Transient)
    USHVehicleMovementProcessor* MovementProcessor;
    
    UPROPERTY(Instanced, Transient)
    TArray<USHVehicleSpotComponent*> VehiclePassengerSpots;
    
public:
    USHVehicleComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TeleportVehicle(const FVector InWorldLoc, const FRotator InWorldRot);
    
    UFUNCTION(BlueprintCallable)
    void Initialize();
    
    UFUNCTION(BlueprintCallable)
    void GetOutInstant(ACharacter* InteractingCharacter);
    
    UFUNCTION(BlueprintCallable)
    void GetInInstant(ACharacter* InteractingCharacter, USHVehicleSpotComponent* PassengerSpot);
    
    UFUNCTION(BlueprintCallable)
    void ClearAccumulatedMovement();
    
};

