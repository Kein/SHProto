#pragma once
#include "CoreMinimal.h"
#include "SkeletonHierarchy.h"
#include "SHMQSpiderSkeletonHierarchy.generated.h"

USTRUCT()
struct FSHMQSpiderSkeletonHierarchy : public FSkeletonHierarchy {
    GENERATED_BODY()
public:
    SHPROTO_API FSHMQSpiderSkeletonHierarchy();
};

