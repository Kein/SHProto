#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SHVehicleSpotComponent.generated.h"

class ACharacter;
class USHVehicleAnimInstance;
class USHVehicleComponent;
class USHVehicleInputReceiver;
class USHVehicleSpotCameraDataSet;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHVehicleSpotComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<USHVehicleAnimInstance> AnimInstanceClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bCanReceiveInput;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<USHVehicleInputReceiver> InputReceiverClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USHVehicleSpotCameraDataSet* CameraDataSet;
    
    UPROPERTY(Instanced, Transient)
    USHVehicleComponent* VehicleComponent;
    
    UPROPERTY(Transient)
    USHVehicleInputReceiver* InputReceiver;
    
    UPROPERTY(Transient)
    ACharacter* InteractingCharacter;
    
public:
    USHVehicleSpotComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    ACharacter* GetInteractingCharacter() const;
    
};

