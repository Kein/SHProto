#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "DLCBundle.h"
#include "DLCItem.h"
#include "DLCConfig.generated.h"

UCLASS()
class DLCMANAGER_API UDLCConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FDLCItem> Items;
    
    UPROPERTY(EditAnywhere)
    TArray<FDLCBundle> Bundles;
    
    UDLCConfig();

};

