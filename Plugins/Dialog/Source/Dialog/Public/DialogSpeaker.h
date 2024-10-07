#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/LatentActionManager.h"
#include "Components/SceneComponent.h"
#include "DialogEntity.h"
#include "DialogEventDelegate.h"
#include "DialogFullInfo.h"
#include "DialogTalkID.h"
#include "DialogVoiceAttenuation.h"
#include "DialogVoiceEventDelegate.h"
#include "DialogSpeaker.generated.h"

class UDialogUI;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DIALOG_API UDialogSpeaker : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDialogEntity _Entity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame)
    FDialogFullInfo _DialogEntry;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _IsAPlayerSpeaker: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _VoiceOnPad: 1;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    uint8 _IsDisabledByCS: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _VoiceOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDialogVoiceAttenuation _VoiceAttenuation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FDialogEntity> _Voices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UDialogUI* _UI;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, float> _VoiceParameters;
    
    UPROPERTY(BlueprintAssignable)
    FDialogEvent _OnDialogBegin;
    
    UPROPERTY(BlueprintAssignable)
    FDialogEvent _OnDialogEnd;
    
    UPROPERTY(BlueprintAssignable)
    FDialogEvent _OnLineBegin;
    
    UPROPERTY(BlueprintAssignable)
    FDialogEvent _OnLineEnd;
    
    UPROPERTY(BlueprintAssignable)
    FDialogVoiceEvent _OnStartVoicePlayback;
    
    UDialogSpeaker(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsPlayerSpeaker(bool is);
    
    UFUNCTION(BlueprintCallable)
    void RemoveVoiceParameter(FName Name, float InterpolationTime);
    
    UFUNCTION()
    void PlayTalkInEditor();
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="Info"))
    void playTalk(FLatentActionInfo Info);
    
    UFUNCTION(BlueprintPure)
    bool IsPlayerSpeaker() const;
    
    UFUNCTION(BlueprintPure)
    FDialogTalkID GetTalkID() const;
    
    UFUNCTION(BlueprintPure)
    float GetDistanceToPlayer() const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetCurrentVoice() const;
    
    UFUNCTION(BlueprintPure)
    bool CanStartTalk() const;
    
    UFUNCTION(BlueprintCallable)
    void AddVoiceParameter(FName Name, float Value, float InterpolationTime);
    
};

