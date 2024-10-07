#pragma once
#include "CoreMinimal.h"
#include "EBeingActionFailHandling.h"
#include "MaiAction.h"
#include "MaiAction_Sequence.generated.h"

class UBeingAction;

UCLASS(EditInlineNew)
class MAI_API UMaiAction_Sequence : public UMaiAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Instanced)
    TArray<UBeingAction*> _ActionSequence;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<EBeingActionFailHandling::Type> _ChildFailureHandlingMode;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _Loop;
    
    UMaiAction_Sequence();

};

