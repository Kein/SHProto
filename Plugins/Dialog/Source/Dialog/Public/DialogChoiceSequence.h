#pragma once
#include "CoreMinimal.h"
#include "DaiActorName.h"
#include "DialogObjectID.h"
#include "DialogChoiceSequence.generated.h"

class ULevelSequence;

USTRUCT(BlueprintType)
struct DIALOG_API FDialogChoiceSequence {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FDialogObjectID _LineID;
    
    UPROPERTY(EditAnywhere)
    ULevelSequence* _Sequence;
    
    UPROPERTY(EditAnywhere)
    FDaiActorName _MasterPlayerName;
    
    UPROPERTY(EditAnywhere)
    FDaiActorName _PlayerName;
    
    FDialogChoiceSequence();
};

