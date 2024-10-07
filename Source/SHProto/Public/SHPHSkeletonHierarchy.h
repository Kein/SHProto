#pragma once
#include "CoreMinimal.h"
#include "SkeletonHierarchy.h"
#include "SHPHSkeletonHierarchy.generated.h"

USTRUCT()
struct FSHPHSkeletonHierarchy : public FSkeletonHierarchy {
    GENERATED_BODY()
public:
    SHPROTO_API FSHPHSkeletonHierarchy();
};

