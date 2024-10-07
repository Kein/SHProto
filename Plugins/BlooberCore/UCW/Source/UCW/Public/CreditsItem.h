#pragma once
#include "CoreMinimal.h"
#include "ECreditsItemType.h"
#include "CreditsItem.generated.h"

USTRUCT(BlueprintType)
struct UCW_API FCreditsItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ECreditsItemType Type;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Text;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Text_2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Text_3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Custom;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Custom_1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Custom_2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Width;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Height;
    
    FCreditsItem();
};

