#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SHCollectedItemData.h"
#include "SHItemsStorageConfig.h"
#include "SHItemsStorageStatics.generated.h"

class UObject;

UCLASS(BlueprintType)
class USHItemsStorageStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USHItemsStorageStatics();

    UFUNCTION(BlueprintPure)
    static bool HasPlayerCollectedItemByConfig(UObject* Context, const FSHItemsStorageConfig& ItemsStorageConfig);
    
    UFUNCTION(BlueprintPure)
    static bool HasItemByConfig(const TArray<FSHCollectedItemData>& InItems, const FSHItemsStorageConfig& ItemsStorageConfig);
    
};

