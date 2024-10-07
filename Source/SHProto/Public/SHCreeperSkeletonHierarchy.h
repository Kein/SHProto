#pragma once
#include "CoreMinimal.h"
#include "SkeletonHierarchy.h"
#include "SHCreeperSkeletonHierarchy.generated.h"

USTRUCT()
struct FSHCreeperSkeletonHierarchy : public FSkeletonHierarchy {
    GENERATED_BODY()
public:
    SHPROTO_API FSHCreeperSkeletonHierarchy();
};

