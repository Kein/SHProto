#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DialogEventDelegate.h"
#include "DialogFullInfo.h"
#include "DialogTalkID.h"
#include "DialogPlayer.generated.h"

class AActor;
class UDialogTalk;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DIALOG_API UDialogPlayer : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FDialogFullInfo _DialogEntry;
    
    UPROPERTY(BlueprintReadWrite, EditInstanceOnly)
    TArray<AActor*> _Speakers;
    
    UPROPERTY(BlueprintAssignable)
    FDialogEvent _OnDialogBegin;
    
    UPROPERTY(BlueprintAssignable)
    FDialogEvent _OnDialogEnd;
    
    UDialogPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void PlayTalkInEditor();
    
    UFUNCTION(BlueprintCallable)
    UDialogTalk* playTalk();
    
    UFUNCTION(BlueprintPure)
    FDialogTalkID GetTalkID() const;
    
    UFUNCTION(BlueprintPure)
    bool CanStartTalk() const;
    
};

