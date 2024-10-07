#pragma once
#include "CoreMinimal.h"
#include "FlowLineTemplate.h"
#include "FlowLineLipsyncTemplate.generated.h"

UCLASS(EditInlineNew)
class DIALOG_API UFlowLineLipsyncTemplate : public UFlowLineTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool _PlayLipsync;
    
public:
    UFlowLineLipsyncTemplate();

};

