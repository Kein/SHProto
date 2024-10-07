#pragma once
#include "CoreMinimal.h"
#include "SkeletonHierarchy.h"
#include "SHLyingFigureSkeletonHierarchy.generated.h"

USTRUCT()
struct FSHLyingFigureSkeletonHierarchy : public FSkeletonHierarchy {
    GENERATED_BODY()
public:
    SHPROTO_API FSHLyingFigureSkeletonHierarchy();
};

