#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LevelStreamingRequest.h"
#include "LevelStreamingRequests.generated.h"

UCLASS(BlueprintType)
class LEVELSTREAMING_API ULevelStreamingRequests : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FLevelStreamingRequest> Requests;
    
public:
    ULevelStreamingRequests();

};

