#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingSlotConfig.generated.h"

USTRUCT(BlueprintType)
struct LEVELSTREAMING_API FLevelStreamingSlotConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowHide;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool AllowUnload;
    
    FLevelStreamingSlotConfig();
};

