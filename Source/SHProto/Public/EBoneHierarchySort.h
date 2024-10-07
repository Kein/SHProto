#pragma once
#include "CoreMinimal.h"
#include "EBoneHierarchySort.generated.h"

UENUM(BlueprintType)
enum class EBoneHierarchySort : uint8 {
    None,
    ParentLevel,
    WeightFromRoot,
};

