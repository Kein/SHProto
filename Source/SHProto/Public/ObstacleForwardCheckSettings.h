#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ObstacleForwardCheckSettings.generated.h"

USTRUCT(BlueprintType)
struct FObstacleForwardCheckSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float Distance;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool LocationFromSocket;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FName SocketName;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector LocationOffset;
    
    SHPROTO_API FObstacleForwardCheckSettings();
};

