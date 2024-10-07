#pragma once
#include "CoreMinimal.h"
#include "DaiConditions.h"
#include "DialogDialog.h"
#include "DialogEntryID.h"
#include "DialogInfo.h"
#include "DialogLine.h"
#include "DialogFullInfo.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FDialogFullInfo : public FDialogInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDaiConditions _Conditions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FDialogEntryID _EntryID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FDialogDialog _DialogID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    FDialogLine _LineID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, SaveGame)
    int32 _MaxPlayCount;
    
    UPROPERTY(BlueprintReadOnly, SaveGame, VisibleInstanceOnly)
    int32 _PlayCounter;
    
    FDialogFullInfo();
};

