#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameOptionsData.h"
#include "GameOptionsConfig.generated.h"

class UStringTable;

UCLASS()
class UGameOptionsConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FGameOptionsData> Options;
    
    UPROPERTY(EditDefaultsOnly)
    UStringTable* StringTable;
    
    UGameOptionsConfig();

};

