#pragma once
#include "CoreMinimal.h"
#include "SkeletonHierarchy.h"
#include "SHAbstractDaddySkeletonHierarchy.generated.h"

USTRUCT()
struct FSHAbstractDaddySkeletonHierarchy : public FSkeletonHierarchy {
    GENERATED_BODY()
public:
    SHPROTO_API FSHAbstractDaddySkeletonHierarchy();
};

