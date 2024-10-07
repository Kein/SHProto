#pragma once
#include "CoreMinimal.h"
#include "ETextFont.h"
#include "ETextSize.h"
#include "PlayerProfile.h"
#include "EAimAssistMagnetismMode.h"
#include "EAmmoWidgetVisibility.h"
#include "ECombatDifficulty.h"
#include "EHighContrastColor.h"
#include "EInteractionIconSize.h"
#include "EInteractionIconVisibility.h"
#include "EPlayerSkin.h"
#include "EReticleColor.h"
#include "EReticleThickness.h"
#include "EReticleVisibility.h"
#include "ESHInputTriggerMode.h"
#include "ESettingsPresets.h"
#include "EStruggleInputSize.h"
#include "EStruggleInputVisibility.h"
#include "EVisualMode.h"
#include "SHPlayerProfile.generated.h"

UCLASS()
class USHPlayerProfile : public UPlayerProfile {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EReticleVisibility ReticleVisibility;
    
    UPROPERTY(BlueprintReadOnly)
    EReticleThickness ReticleThickness;
    
    UPROPERTY(BlueprintReadOnly)
    float ReticleOpacity;
    
    UPROPERTY(BlueprintReadOnly)
    EReticleColor ReticleColor;
    
    UPROPERTY(BlueprintReadOnly)
    EInteractionIconVisibility InteractionIconVisibility;
    
    UPROPERTY(BlueprintReadOnly)
    EInteractionIconSize InteractionIconSize;
    
    UPROPERTY(BlueprintReadOnly)
    EInteractionIconVisibility TraversalIconVisibility;
    
    UPROPERTY(BlueprintReadOnly)
    EInteractionIconSize TraversalIconSize;
    
    UPROPERTY(BlueprintReadOnly)
    EStruggleInputVisibility StruggleInputVisibility;
    
    UPROPERTY(BlueprintReadOnly)
    EStruggleInputSize StruggleInputSize;
    
    UPROPERTY(BlueprintReadOnly)
    bool ShowGameplayCenterDotReticle;
    
    UPROPERTY(BlueprintReadOnly)
    bool ShowRadioStateIndicator;
    
    UPROPERTY(BlueprintReadOnly)
    EAmmoWidgetVisibility AmmoWidgetVisibility;
    
    UPROPERTY(BlueprintReadOnly)
    bool DirectionalVisualisation;
    
    UPROPERTY(BlueprintReadOnly)
    ETextFont TranscriptionTextFont;
    
    UPROPERTY(BlueprintReadOnly)
    ETextSize TranscriptionTextSize;
    
    UPROPERTY(BlueprintReadOnly)
    bool TutorialsVisibility;
    
    UPROPERTY(BlueprintReadOnly)
    ETextFont TutorialsTextFont;
    
    UPROPERTY(BlueprintReadOnly)
    ETextSize TutorialsTextSize;
    
    UPROPERTY(BlueprintReadOnly)
    bool ShowLoadingHints;
    
    UPROPERTY(BlueprintReadOnly)
    float AimSensitivityY;
    
    UPROPERTY(BlueprintReadOnly)
    float AimSensitivityX;
    
    UPROPERTY(BlueprintReadOnly)
    bool AimInvertY;
    
    UPROPERTY(BlueprintReadOnly)
    bool AimMirrorX;
    
    UPROPERTY(BlueprintReadOnly)
    float LookSensitivityY;
    
    UPROPERTY(BlueprintReadOnly)
    float LookSensitivityX;
    
    UPROPERTY(BlueprintReadOnly)
    bool LookInvertY;
    
    UPROPERTY(BlueprintReadOnly)
    bool LookMirrorX;
    
    UPROPERTY(BlueprintReadOnly)
    EAimAssistMagnetismMode AimAssistMagnetismMode;
    
    UPROPERTY(BlueprintReadOnly)
    bool bAdaptiveTriggersConstantMode;
    
    UPROPERTY(BlueprintReadOnly)
    bool bStruggleHoldMode;
    
    UPROPERTY(BlueprintReadOnly)
    bool bLowHealthVignette;
    
    UPROPERTY(BlueprintReadOnly)
    bool bEnableSplatterVignette;
    
    UPROPERTY(BlueprintReadOnly)
    bool bEnableItemsNotifications;
    
    UPROPERTY(BlueprintReadOnly)
    ESHInputTriggerMode RangeAimTriggerMode;
    
    UPROPERTY(BlueprintReadOnly)
    ESHInputTriggerMode MeleeAttackTriggerMode;
    
    UPROPERTY(BlueprintReadOnly)
    ESHInputTriggerMode FireTriggerMode;
    
    UPROPERTY(BlueprintReadOnly)
    ESHInputTriggerMode BoatLeftTriggerMode;
    
    UPROPERTY(BlueprintReadOnly)
    ESHInputTriggerMode BoatRightTriggerMode;
    
    UPROPERTY(BlueprintReadOnly)
    bool EnableInventoryVisualEffects;
    
    UPROPERTY(BlueprintReadOnly)
    bool HighContrastMode;
    
    UPROPERTY(BlueprintReadOnly)
    EHighContrastColor HighContrastAlliesColor;
    
    UPROPERTY(BlueprintReadOnly)
    EHighContrastColor HighContrastCollectibleItemsColor;
    
    UPROPERTY(BlueprintReadOnly)
    EHighContrastColor HighContrastEnemiesColor;
    
    UPROPERTY(BlueprintReadOnly)
    EHighContrastColor HighContrastEnvironmentColor;
    
    UPROPERTY(BlueprintReadOnly)
    EHighContrastColor HighContrastJamesColor;
    
    UPROPERTY(BlueprintReadOnly)
    bool HighContrastGrayscaleBackground;
    
    UPROPERTY(BlueprintReadOnly)
    EVisualMode VisualMode;
    
    UPROPERTY(BlueprintReadOnly)
    EPlayerSkin PlayerSkin;
    
    UPROPERTY(BlueprintReadOnly)
    bool SprintToggleable;
    
    UPROPERTY(BlueprintReadOnly)
    ESettingsPresets Presets;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    ECombatDifficulty CombatDifficulty;
    
    USHPlayerProfile();

};

