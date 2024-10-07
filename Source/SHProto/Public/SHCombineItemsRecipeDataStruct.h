#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "Engine/DataTable.h"
#include "SHCombineItemsRecipeDataStruct.generated.h"

USTRUCT(BlueprintType)
struct FSHCombineItemsRecipeDataStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FDataTableRowHandle ProductItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FDataTableRowHandle> RequiredItems;
    
    SHPROTO_API FSHCombineItemsRecipeDataStruct();
};

