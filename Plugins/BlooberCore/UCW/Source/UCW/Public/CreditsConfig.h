#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CreditsItem.h"
#include "CreditsConfig.generated.h"

class UDataTable;

UCLASS()
class UCW_API UCreditsConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FCreditsItem> Rows;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UDataTable> ImageSet;
    
    UCreditsConfig();

};

