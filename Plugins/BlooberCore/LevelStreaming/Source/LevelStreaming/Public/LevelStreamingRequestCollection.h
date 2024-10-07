#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "LevelStreamingRequestCollection.generated.h"

class ULevelStreamingRequests;

UCLASS(BlueprintType)
class LEVELSTREAMING_API ULevelStreamingRequestCollection : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<ULevelStreamingRequests*> Requests;
    
public:
    ULevelStreamingRequestCollection();

};

