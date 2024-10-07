#pragma once
#include "CoreMinimal.h"
#include "FlowText.generated.h"

USTRUCT(BlueprintType)
struct DIALOG_API FFlowText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString _Text;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _Localizable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString _Key;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FString _ShortID;
    
    FFlowText();
};

