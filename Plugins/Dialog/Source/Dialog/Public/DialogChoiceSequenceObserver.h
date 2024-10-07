#pragma once
#include "CoreMinimal.h"
#include "DialogChoiceObserver.h"
#include "DialogChoiceSequence.h"
#include "DialogChoiceSequenceObserver.generated.h"

UCLASS()
class DIALOG_API UDialogChoiceSequenceObserver : public UDialogChoiceObserver {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    TArray<FDialogChoiceSequence> _Choices;
    
    UDialogChoiceSequenceObserver();

};

