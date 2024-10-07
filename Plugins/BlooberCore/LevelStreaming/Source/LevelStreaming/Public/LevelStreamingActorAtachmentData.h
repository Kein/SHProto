#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "LevelStreamingActorAtachmentData.generated.h"

USTRUCT()
struct LEVELSTREAMING_API FLevelStreamingActorAtachmentData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FGuid Guid;
    
    UPROPERTY()
    FName ComponentName;
    
    UPROPERTY()
    FName SocketName;
    
    UPROPERTY()
    FTransform Offset;
    
    FLevelStreamingActorAtachmentData();
};

