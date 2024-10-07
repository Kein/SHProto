#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FlowFolder.h"
#include "FlowChapter.generated.h"

UCLASS(EditInlineNew)
class DIALOG_API UFlowChapter : public UFlowFolder {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FFilePath _CSV;
    
public:
    UFlowChapter();

};

