#pragma once
#include "CoreMinimal.h"
#include "SHFXComponent.h"
#include "SHCharacterPlayFXComponent.generated.h"

class USHFXAcidLayerSubcompSettings;
class USHFXDirtLayerSubcompSettings;
class USHFXFrozenBreathSubcompSettings;
class USHFXPukePuddleDamageSubcompSettings;
class USHFXRaingWettingSubcompSettings;
class USHFXSwarmSubcompSettings;
class USHFXVisualHPSubcompSettings;
class USHFXWaterInteractionSubcompSettings;

UCLASS(ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayFXComponent : public USHFXComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXPukePuddleDamageSubcompSettings* PukePuddleDamageSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXFrozenBreathSubcompSettings* FrozenBreathSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXWaterInteractionSubcompSettings* WaterInteractionSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXVisualHPSubcompSettings* VisualHPSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXRaingWettingSubcompSettings* RainWettingSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXDirtLayerSubcompSettings* DirtLayerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXAcidLayerSubcompSettings* AcidLayerSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXSwarmSubcompSettings* SwarmSettings;
    
public:
    USHCharacterPlayFXComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_Character_FX_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_FX_Rain_EncompassesPointDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_FX_Rain_DrawDebug();
    
};

