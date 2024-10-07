#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FlowEntityTemplate.h"
#include "FlowCharacterTemplate.generated.h"

UCLASS(EditInlineNew)
class DIALOG_API UFlowCharacterTemplate : public UFlowEntityTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDirectoryPath _LipsyncDir;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _LipsyncSlot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _LipsyncBlendInTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _LipsyncBlendOutTime;
    
    UFlowCharacterTemplate();

};

