#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GlobalPropertyConfigBool.h"
#include "GlobalPropertyConfigFloat.h"
#include "GlobalPropertyConfigInt.h"
#include "GlobalPropertiesSheet.generated.h"

UCLASS(BlueprintType)
class GLOBALPROPERTIES_API UGlobalPropertiesSheet : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FString UniqueName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool Saveable;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGlobalPropertyConfigBool> Bools;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGlobalPropertyConfigInt> Ints;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGlobalPropertyConfigFloat> Floats;
    
public:
    UGlobalPropertiesSheet();

};

