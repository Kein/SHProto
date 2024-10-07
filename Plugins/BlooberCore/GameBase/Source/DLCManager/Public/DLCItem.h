#pragma once
#include "CoreMinimal.h"
#include "DLCItem.generated.h"

USTRUCT(BlueprintType)
struct FDLCItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FName Name;
    
    UPROPERTY(EditAnywhere)
    uint32 SupportedPlatforms;
    
    UPROPERTY(EditAnywhere)
    uint32 OwnedOnPlatforms;
    
    UPROPERTY(EditAnywhere)
    FString SonySKUIdName;
    
    UPROPERTY(EditAnywhere)
    uint32 SteamAppId;
    
    UPROPERTY(EditAnywhere)
    FString EpicProductId;
    
    UPROPERTY(EditAnywhere)
    uint64 GogProductId;
    
    DLCMANAGER_API FDLCItem();
};

