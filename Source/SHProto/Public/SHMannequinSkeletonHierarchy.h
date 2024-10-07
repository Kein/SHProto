#pragma once
#include "CoreMinimal.h"
#include "SkeletonHierarchy.h"
#include "SHMannequinSkeletonHierarchy.generated.h"

USTRUCT()
struct FSHMannequinSkeletonHierarchy : public FSkeletonHierarchy {
    GENERATED_BODY()
public:
    SHPROTO_API FSHMannequinSkeletonHierarchy();
};

