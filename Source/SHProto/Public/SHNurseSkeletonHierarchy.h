#pragma once
#include "CoreMinimal.h"
#include "SkeletonHierarchy.h"
#include "SHNurseSkeletonHierarchy.generated.h"

USTRUCT()
struct FSHNurseSkeletonHierarchy : public FSkeletonHierarchy {
    GENERATED_BODY()
public:
    SHPROTO_API FSHNurseSkeletonHierarchy();
};

