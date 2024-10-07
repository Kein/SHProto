#pragma once
#include "CoreMinimal.h"
#include "IgnoredActorClass.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FIgnoredActorClass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AlsoIgnoreChildren;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> ActorClass;
    
    SHPROTO_API FIgnoredActorClass();
};

