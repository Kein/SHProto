#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataAsset.h"
#include "Engine/DataTable.h"
#include "EffectHandle.h"
#include "ESHHealthStateEnum.h"
#include "ESHSimpleDirectionType.h"
#include "SHControllerLightsSettings.h"
#include "SHGenericDeathSequencesContainer.h"
#include "SHMaterialPropertyControlData.h"
#include "SHReceiveDamageCustomPostProcessConfig.h"
#include "SHReceiveDamagePostProcessConfig.h"
#include "Templates/SubclassOf.h"
#include "SHCharacterPlayHealthSettings.generated.h"

class ASHCharacterPlayDeathPlayer;
class UBeingDamage;
class UCameraShakeBase;
class UForceFeedbackEffect;
class UMaterialInterface;

UCLASS(BlueprintType)
class SHPROTO_API USHCharacterPlayHealthSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float LowInjuryThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float HeavyInjuryThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float CriticalnjuryThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle TapHealingItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ActionHealingRequiredHoldTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FDataTableRowHandle HoldHealingItem;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UMaterialInterface* HealthMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TArray<FSHMaterialPropertyControlData> HealthMaterialPropertyControlsConfigs;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHReceiveDamagePostProcessConfig DefaultReceiveDamagePostProcess;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<TSubclassOf<UBeingDamage>, FSHReceiveDamageCustomPostProcessConfig> SelectedReceiveDamagePostProcesses;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UCameraShakeBase> DefaultReceiveDamageCameraShakeClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<TSubclassOf<UBeingDamage>, TSubclassOf<UCameraShakeBase>> SelectedReceiveDamageCameraShakeClasses;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHReceiveDamagePostProcessConfig DefaultReceiveHealPostProcess;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftClassPtr<ASHCharacterPlayDeathPlayer> DeathSequenceSoftClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<ESHSimpleDirectionType, FSHGenericDeathSequencesContainer> DirectionalGenericDeathSequenceContainers;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TMap<ESHHealthStateEnum, FSHControllerLightsSettings> HealthControllerLightsSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UForceFeedbackEffect* ForceFeedbackOnDamageNormal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UForceFeedbackEffect* ForceFeedbackOnDamageStun;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UForceFeedbackEffect* ForceFeedbackOnDamageContinous;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UForceFeedbackEffect* ForceFeedbackOnDamageSoft;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FEffectHandle SpecialEffectDamageNormal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FEffectHandle SpecialEffectDamageStun;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FEffectHandle SpecialEffectDamageContinous;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FEffectHandle SpecialEffectDamageSoft;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FEffectHandle SpecialEffectHeal;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool SpecialEffectBlinkKeys;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FColor SpecialEffectBlinkColor0;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FColor SpecialEffectBlinkColor1;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SpecialEffectBlinkPeriod;
    
    USHCharacterPlayHealthSettings();

};

