#pragma once
#include "CoreMinimal.h"
#include "FlowAction.h"
#include "AddTagToActorFA.generated.h"

UCLASS(EditInlineNew)
class UAddTagToActorFA : public UFlowAction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _TagToAdd;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _Unique;
    
    UAddTagToActorFA();

};

