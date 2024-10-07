#pragma once
#include "CoreMinimal.h"
#include "EStreamableLevelStatus.h"
#include "LevelStreamingRequestElement.h"
#include "LevelStreamingRequest.generated.h"

class ULevelStreamingRequests;

USTRUCT(BlueprintType)
struct LEVELSTREAMING_API FLevelStreamingRequest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FName UniqueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ModifyUnspecifiedLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 UnspecifiedLevelPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EStreamableLevelStatus UnspecifiedLevelStatus;
    
    UPROPERTY()
    bool AbandonIfLockhart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FLevelStreamingRequestElement> Elements;
    
    UPROPERTY()
    ULevelStreamingRequests* Requests;
    
public:
    FLevelStreamingRequest();
};

