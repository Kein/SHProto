#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "SHInteractionManagerComponent.generated.h"

class AActor;
class UObject;
class UPrimitiveComponent;
class USHInteractionGenericComponent;
class USHInteractionIconComponent;
class USHInteractionIconSlotComponent;
class USHInteractionManagerComponent;
class USHRaycastDetectableComponent;
class UShapeComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHInteractionManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInteractionManagerInitializeBP, USHInteractionManagerComponent*, Manager);
    
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bDoNotManageProximityGenerateOverlap;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bDoNotPerformDefaultInitializationOnBeginPlay;
    
    UPROPERTY(BlueprintAssignable)
    FInteractionManagerInitializeBP OnInteractionManagerInitializeBP;
    
    UPROPERTY(Instanced, Transient)
    UShapeComponent* ProximityDetector;
    
    UPROPERTY(Instanced, Transient)
    USHRaycastDetectableComponent* VisibilityDetector;
    
public:
    USHInteractionManagerComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetObjectDetectionEnabled(const UObject* Object, const bool Enable, const UObject* Enabler);
    
    UFUNCTION(BlueprintCallable)
    void SetDetectionEnabled(const bool Enable, const UObject* Enabler);
    
    UFUNCTION(BlueprintCallable)
    bool RegisterGeneric(const USHInteractionGenericComponent* Generic, const USHRaycastDetectableComponent* Detectable, const USHInteractionIconComponent* Icon, const TArray<USHInteractionIconSlotComponent*>& Slots);
    
protected:
    UFUNCTION()
    void ProcessProximityEndOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex);
    
    UFUNCTION()
    void ProcessProximityBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, int32 OtherBodyIndex, bool FromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintCallable)
    void PerformDefaultInitialization();
    
    UFUNCTION(BlueprintPure)
    bool IsDetectionEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void InterruptCurrentInteraction();
    
    UFUNCTION(BlueprintPure)
    bool HasUsableActorNearby() const;
    
    UFUNCTION(BlueprintPure)
    bool HasActiveInteraction() const;
    
    UFUNCTION(BlueprintCallable)
    void BindVisibilityDetector(const USHRaycastDetectableComponent* NewVisibilityDetector);
    
    UFUNCTION(BlueprintCallable)
    void BindProximityDetector(const UShapeComponent* NewProximityDetector);
    
};

