#pragma once
#include "CoreMinimal.h"
#include "InputCoreTypes.h"
#include "UE4KeyRichText.generated.h"

USTRUCT(BlueprintType)
struct FUE4KeyRichText {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FKey Key;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText RichText;
    
    SHPROTO_API FUE4KeyRichText();
};

