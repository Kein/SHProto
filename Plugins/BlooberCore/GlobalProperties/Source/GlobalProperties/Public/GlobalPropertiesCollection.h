#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GlobalPropertiesCollection.generated.h"

class UGlobalPropertiesSheet;

UCLASS(BlueprintType)
class GLOBALPROPERTIES_API UGlobalPropertiesCollection : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UGlobalPropertiesSheet*> Sheets;
    
public:
    UGlobalPropertiesCollection();

};

