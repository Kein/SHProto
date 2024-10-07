#pragma once
#include "CoreMinimal.h"
#include "AkGameplayTypes.h"
#include "DialogDialog.h"
#include "DialogEntity.h"
#include "DialogInfo.h"
#include "DialogLine.h"
#include "DialogLineLocalization.h"
#include "DialogVoiceAttenuation.h"
#include "ETalkState.h"
#include "EVoiceState.h"
#include "FlowTask.h"
#include "OnDialogFinishedDelegate.h"
#include "DialogTalk.generated.h"

class AActor;
class UAkCallbackInfo;
class UDialogChoiceObserver;
class UDialogData;
class UDialogSpeaker;
class UDialogTalk;
class UDialogUI;
class UObject;
class USceneComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DIALOG_API UDialogTalk : public UFlowTask {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<AActor*> _Speakers;
    
    UPROPERTY(AdvancedDisplay, Instanced, Transient, VisibleAnywhere)
    UDialogSpeaker* _CurrentSpeaker;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Instanced, Transient)
    USceneComponent* _CurrentVoiceOver;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    int32 _ActiveDialog;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    int32 _CurrentLine;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    FDialogLineLocalization _CurrentLineLocalization;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    FDialogVoiceAttenuation _CurrentVoiceAttenuation;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    float _PauseAfterLine;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    float _TimeToDistanceCheck;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Transient, VisibleAnywhere)
    ETalkState _State;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    EVoiceState _VoiceState;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    bool _AutoDestroy;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    FDialogInfo _DialogInfo;
    
    UPROPERTY(BlueprintAssignable)
    FOnDialogFinished _OnDialogFinished;
    
private:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDialogData* _DialogData;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UDialogUI* _UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _DistanceCheckPeriod;
    
    UPROPERTY(Instanced, Transient)
    TMap<FDialogEntity, UDialogSpeaker*> _Entities;
    
    UPROPERTY(Instanced)
    UDialogTalk* _ParentTalk;
    
    UPROPERTY(Instanced)
    UDialogTalk* _SubTalk;
    
    UPROPERTY()
    UDialogChoiceObserver* _ChoiceObserver;
    
    UPROPERTY()
    UObject* _LoadedVO;
    
public:
    UDialogTalk(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateChoices();
    
    UFUNCTION(BlueprintCallable)
    void Suspend();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    void Stop(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    bool Skip();
    
    UFUNCTION(BlueprintCallable)
    void Resume();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool PlayTalkFromLine(const FDialogLine& dialogLineID, UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool playTalk(const FDialogDialog& DialogID, UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    bool PlayLine(const FDialogLine& dialogLineID, UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    void Pause();
    
private:
    UFUNCTION()
    void OnSubTalkFinished(bool Completed);
    
    UFUNCTION()
    void OnAkPostEventCallback(EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsFinishedOrSuspended() const;
    
    UFUNCTION(BlueprintPure)
    bool IsFinished() const;
    
    UFUNCTION(BlueprintPure)
    bool HasSpeaker(const UDialogSpeaker* speaker) const;
    
    UFUNCTION(BlueprintPure)
    FDialogLine GetResumeableLine() const;
    
    UFUNCTION(BlueprintPure)
    uint8 GetPriority() const;
    
    UFUNCTION(BlueprintPure)
    UDialogSpeaker* GetCurrentSpeaker() const;
    
    UFUNCTION(BlueprintPure)
    void getAllSpeakers(TArray<UDialogSpeaker*>& speakers) const;
    
    UFUNCTION(BlueprintPure)
    UDialogSpeaker* FindSpeaker(FDialogEntity speakerID) const;
    
    UFUNCTION(BlueprintPure)
    UDialogSpeaker* FindPlayerSpeaker() const;
    
    UFUNCTION(BlueprintPure)
    UDialogSpeaker* FindNonPlayerSpeaker() const;
    
    UFUNCTION(BlueprintCallable)
    void Choose(int32 choice, bool endIfFail);
    
};

