#pragma once
#include "CoreMinimal.h"
#include "SkeletonHierarchy.h"
#include "SHMariaSkeletonHierarchy.generated.h"

USTRUCT()
struct FSHMariaSkeletonHierarchy : public FSkeletonHierarchy {
    GENERATED_BODY()
public:
    SHPROTO_API FSHMariaSkeletonHierarchy();
};

