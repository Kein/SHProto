#pragma once
#include "CoreMinimal.h"
#include "SkeletonHierarchy.h"
#include "HEddieSkeletonHierarchy.generated.h"

USTRUCT()
struct FHEddieSkeletonHierarchy : public FSkeletonHierarchy {
    GENERATED_BODY()
public:
    SHPROTO_API FHEddieSkeletonHierarchy();
};

