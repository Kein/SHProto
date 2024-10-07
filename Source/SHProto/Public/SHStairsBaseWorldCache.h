#pragma once
#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "SHStairsBaseWorldCache.generated.h"

class ASHStairsBase;

UCLASS()
class SHPROTO_API USHStairsBaseWorldCache : public UWorldSubsystem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<ASHStairsBase*> Cache;
    
public:
    USHStairsBaseWorldCache();

};

