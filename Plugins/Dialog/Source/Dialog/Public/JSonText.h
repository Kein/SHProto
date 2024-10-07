#pragma once
#include "CoreMinimal.h"
#include "JSonText.generated.h"

USTRUCT(BlueprintType)
struct FJSonText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Text;
    
    DIALOG_API FJSonText();
};

