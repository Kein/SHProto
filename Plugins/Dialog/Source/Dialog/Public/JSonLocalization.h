#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "JSonText.h"
#include "JSonLocalization.generated.h"

USTRUCT(BlueprintType)
struct FJSonLocalization : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FJSonText Source;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FJSonText Translation;
    
    DIALOG_API FJSonLocalization();
};

