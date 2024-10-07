#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Rendering/RenderingCommon.h"
#include "EAudioProfileOption.h"
#include "EControllerIcons.h"
#include "EForceFeedback.h"
#include "ESubtitleBackground.h"
#include "ESubtitleColor.h"
#include "ETextFont.h"
#include "ETextSize.h"
#include "ETooltipsVisibilityEffects.h"
#include "GFXSettings.h"
#include "VolumeData.h"
#include "PlayerProfile.generated.h"

UCLASS(BlueprintType)
class GAMEBASE_API UPlayerProfile : public USaveGame {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    TMap<FName, FVolumeData> Volumes;
    
public:
    UPROPERTY(BlueprintReadWrite)
    int64 AudioDeviceUID;
    
    UPROPERTY(BlueprintReadWrite)
    bool AudioProfileNightMode;
    
    UPROPERTY(BlueprintReadWrite)
    EAudioProfileOption AudioProfile;
    
    UPROPERTY(BlueprintReadWrite)
    FGFXSettings GFXSettings;
    
    UPROPERTY(BlueprintReadWrite)
    FString Language;
    
    UPROPERTY(BlueprintReadWrite)
    FString AudioLanguage;
    
    UPROPERTY(BlueprintReadWrite)
    bool ShowSubtitles;
    
    UPROPERTY(BlueprintReadWrite)
    bool ShowNonVerbalCaptions;
    
    UPROPERTY(BlueprintReadWrite)
    bool SubtitleNames;
    
    UPROPERTY(BlueprintReadWrite)
    ETextSize SubtitleSize;
    
    UPROPERTY(BlueprintReadWrite)
    ESubtitleColor SubtitleColor;
    
    UPROPERTY(BlueprintReadWrite)
    ETextFont SubtitleFont;
    
    UPROPERTY(BlueprintReadWrite)
    ESubtitleBackground SubtitleBackground;
    
    UPROPERTY(BlueprintReadOnly)
    bool ControlTipsVisibility;
    
    UPROPERTY(BlueprintReadOnly)
    ETooltipsVisibilityEffects ControlTipsVisibilityEffects;
    
    UPROPERTY(BlueprintReadOnly)
    ETextFont ControlTipsTextFont;
    
    UPROPERTY(BlueprintReadOnly)
    ETextSize ControlTipsTextSize;
    
    UPROPERTY(BlueprintReadWrite)
    EForceFeedback ForceFeedback;
    
    UPROPERTY(BlueprintReadWrite)
    bool AdaptiveTriggers;
    
    UPROPERTY(BlueprintReadWrite)
    EControllerIcons ControllerIcons;
    
    UPROPERTY(BlueprintReadWrite)
    bool InvertAcceptBackKeys;
    
    UPROPERTY(BlueprintReadWrite)
    float DeadZone_Gamepad_Left;
    
    UPROPERTY(BlueprintReadWrite)
    float DeadZone_Gamepad_Right;
    
    UPROPERTY(BlueprintReadWrite)
    bool Accessibility;
    
    UPROPERTY(BlueprintReadWrite)
    EColorVisionDeficiency ColorVisionDeficiency;
    
    UPROPERTY(BlueprintReadWrite)
    float ColorVisionDeficiencySeverity;
    
    UPROPERTY()
    uint32 SynchronizationID;
    
    UPlayerProfile();

    UFUNCTION(BlueprintPure)
    bool IsMuted(FName Name) const;
    
    UFUNCTION(BlueprintPure)
    static bool IsHDREnabledAndAllowed();
    
    UFUNCTION(BlueprintPure)
    float GetVolume(FName Name) const;
    
};

