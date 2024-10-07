#pragma once
#include "CoreMinimal.h"
#include "FlowID.h"
#include "FlowObjectID.generated.h"

class UDialogData;
class UFlowItem;

USTRUCT(BlueprintType)
struct DIALOG_API FFlowObjectID : public FFlowID {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, SaveGame)
    UDialogData* _DialogData;
    
    UPROPERTY(SaveGame, VisibleAnywhere)
    FName _Name;
    
    UPROPERTY(BlueprintReadOnly, Transient, VisibleAnywhere)
    int32 _TypeID;
    
    UPROPERTY(Transient, VisibleAnywhere)
    UFlowItem* _FlowItem;
    
    FFlowObjectID();
};

