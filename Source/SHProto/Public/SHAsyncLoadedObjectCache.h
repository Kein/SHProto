#pragma once
#include "CoreMinimal.h"
#include "SHAsyncLoadedObjectCache.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FSHAsyncLoadedObjectCache {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UObject* StrongObject;
    
    SHPROTO_API FSHAsyncLoadedObjectCache();
};

