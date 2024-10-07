#pragma once
#include "CoreMinimal.h"
#include "SkeletonHierarchy.h"
#include "SHLauraSkeletonHierarchy.generated.h"

USTRUCT()
struct FSHLauraSkeletonHierarchy : public FSkeletonHierarchy {
    GENERATED_BODY()
public:
    SHPROTO_API FSHLauraSkeletonHierarchy();
};

