#pragma once
#include "CoreMinimal.h"
#include "LevelStreamingRequestHandle.generated.h"

class ULevelStreamingRequests;

USTRUCT(BlueprintType)
struct LEVELSTREAMING_API FLevelStreamingRequestHandle {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FName UniqueRequestId;
    
    UPROPERTY(EditAnywhere)
    ULevelStreamingRequests* Requests;
    
public:
    FLevelStreamingRequestHandle();
};

