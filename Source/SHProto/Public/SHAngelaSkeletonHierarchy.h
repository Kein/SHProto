#pragma once
#include "CoreMinimal.h"
#include "SkeletonHierarchy.h"
#include "SHAngelaSkeletonHierarchy.generated.h"

USTRUCT()
struct FSHAngelaSkeletonHierarchy : public FSkeletonHierarchy {
    GENERATED_BODY()
public:
    SHPROTO_API FSHAngelaSkeletonHierarchy();
};

