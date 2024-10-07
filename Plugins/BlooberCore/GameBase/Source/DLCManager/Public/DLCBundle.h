#pragma once
#include "CoreMinimal.h"
#include "DLCHandle.h"
#include "DLCBundle.generated.h"

USTRUCT(BlueprintType)
struct DLCMANAGER_API FDLCBundle {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FDLCHandle> Items;
    
    UPROPERTY(EditAnywhere)
    uint32 SteamAppId;
    
    UPROPERTY(EditAnywhere)
    FString EpicProductId;
    
    FDLCBundle();
};

