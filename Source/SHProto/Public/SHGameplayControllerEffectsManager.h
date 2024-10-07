#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ESHControllerLightColorGameplayFeature.h"
#include "SHControllerLightsSettings.h"
#include "SHGameplayControllerEffectsManager.generated.h"

class UControllerEffectsManager;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHGameplayControllerEffectsManager : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditDefaultsOnly)
    TMap<ESHControllerLightColorGameplayFeature, int32> GameplayFeatureLightPriority;
    
protected:
    UPROPERTY(Transient)
    TMap<ESHControllerLightColorGameplayFeature, FSHControllerLightsSettings> CurrentGameplayFeaturesLightRequests;
    
    UPROPERTY(Transient)
    UControllerEffectsManager* ControllerEffectManagerSubsystem;
    
public:
    USHGameplayControllerEffectsManager(const FObjectInitializer& ObjectInitializer);

};

