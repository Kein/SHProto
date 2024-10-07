#pragma once
#include "CoreMinimal.h"
#include "SkeletonHierarchy.h"
#include "SHFleshLipSkeletonHierarchy.generated.h"

USTRUCT()
struct FSHFleshLipSkeletonHierarchy : public FSkeletonHierarchy {
    GENERATED_BODY()
public:
    SHPROTO_API FSHFleshLipSkeletonHierarchy();
};

