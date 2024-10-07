#pragma once
#include "CoreMinimal.h"
#include "SkeletonHierarchy.h"
#include "SHMandarinSkeletonHierarchy.generated.h"

USTRUCT()
struct FSHMandarinSkeletonHierarchy : public FSkeletonHierarchy {
    GENERATED_BODY()
public:
    SHPROTO_API FSHMandarinSkeletonHierarchy();
};

