#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "DialogEntity.h"
#include "DialogLine.h"
#include "DialogSubtitles.generated.h"

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DIALOG_API UDialogSubtitles : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _MarkMissingSpeakers;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _MaxDistance;
    
    UDialogSubtitles(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    FText GetLocalizedSpeakerName(FDialogEntity entity);
    
    UFUNCTION(BlueprintCallable)
    void ChangeVisibility(bool Show);
    
    UFUNCTION(BlueprintCallable)
    void AddSubtitle(int32 Index, FDialogLine line);
    
};

