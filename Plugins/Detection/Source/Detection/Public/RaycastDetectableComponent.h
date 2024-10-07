#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "Engine/HitResult.h"
#include "DetectableBaseComponent.h"
#include "ERaycastDetectableDistanceMethod.h"
#include "RaycastDetectableChannelConfig.h"
#include "RaycastDetectableDetectEventData.h"
#include "RaycastDetectableLoseEventData.h"
#include "RaycastDetectableComponent.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DETECTION_API URaycastDetectableComponent : public UDetectableBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FLostBy, AActor*, Detector, TEnumAsByte<ECollisionChannel>, CollisionChannel, const FRaycastDetectableLoseEventData&, Data);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FDetectedBy, AActor*, Detector, TEnumAsByte<ECollisionChannel>, CollisionChannel, const FRaycastDetectableDetectEventData&, Data, const FHitResult&, HitResult);
    
protected:
    UPROPERTY(BlueprintAssignable)
    FDetectedBy OnDetectedBy;
    
    UPROPERTY(BlueprintAssignable)
    FLostBy OnLostBy;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FRaycastDetectableChannelConfig> ChannelConfigs;
    
public:
    URaycastDetectableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void LoseDetectorsOnChannel(const TEnumAsByte<ECollisionChannel> CollisionChannel);
    
    UFUNCTION(BlueprintCallable)
    void LoseDetectors();
    
    UFUNCTION(BlueprintPure)
    bool IsUsingChannel(const TEnumAsByte<ECollisionChannel> CollisionChannel, const bool MustBeEnabled) const;
    
    UFUNCTION(BlueprintPure)
    bool IsDetectedOnChannel(const TEnumAsByte<ECollisionChannel> CollisionChannel) const;
    
    UFUNCTION(BlueprintPure)
    bool IsDetectedByActorOnChannel(AActor* Detector, const TEnumAsByte<ECollisionChannel> CollisionChannel) const;
    
    UFUNCTION(BlueprintPure)
    bool IsDetectedByActor(AActor* Detector) const;
    
    UFUNCTION(BlueprintPure)
    bool GetWasEverDetected();
    
    UFUNCTION(BlueprintPure)
    ERaycastDetectableDistanceMethod GetDistanceMethodForChannel(const TEnumAsByte<ECollisionChannel> CollisionChannel) const;
    
    UFUNCTION(BlueprintCallable)
    bool EnableDetectionOnChannel(const TEnumAsByte<ECollisionChannel> CollisionChannel);
    
    UFUNCTION(BlueprintCallable)
    void EnableDetection();
    
    UFUNCTION(BlueprintCallable)
    bool DisableDetectionOnChannel(const TEnumAsByte<ECollisionChannel> CollisionChannel);
    
    UFUNCTION(BlueprintCallable)
    void DisableDetection();
    
    UFUNCTION(BlueprintPure)
    bool CanBeDetectedOnChannel(const TEnumAsByte<ECollisionChannel> CollisionChannel) const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeDetectedByActorOnChannel(AActor* Detector, const TEnumAsByte<ECollisionChannel> CollisionChannel, const float Distance) const;
    
    UFUNCTION(BlueprintPure)
    bool CanBeDetectedByActor(AActor* Detector, const float Distance) const;
    
};

