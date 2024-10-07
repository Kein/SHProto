#pragma once
#include "CoreMinimal.h"
#include "SkeletonHierarchy.h"
#include "SHJamesSkeletonHierarchy.generated.h"

USTRUCT()
struct FSHJamesSkeletonHierarchy : public FSkeletonHierarchy {
    GENERATED_BODY()
public:
    SHPROTO_API FSHJamesSkeletonHierarchy();
};

