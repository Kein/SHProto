#pragma once
#include "CoreMinimal.h"
#include "SkeletonHierarchy.h"
#include "SHMarySkeletonHierarchy.generated.h"

USTRUCT()
struct FSHMarySkeletonHierarchy : public FSkeletonHierarchy {
    GENERATED_BODY()
public:
    SHPROTO_API FSHMarySkeletonHierarchy();
};

