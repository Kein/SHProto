#pragma once
#include "CoreMinimal.h"
#include "ESHBonePhysicsControllerSettingsBodyPhysicsPermission.generated.h"

UENUM()
enum class ESHBonePhysicsControllerSettingsBodyPhysicsPermission : int32 {
    Allow,
    DontInheritSelf,
    DontInheritSelfAndChildren,
    AllowSelfOnlyWithRoot,
    AllowSelfAndChildrenOnlyWithRoot,
    NeverAllowSelf,
    NeverAllowSelfOrChildren,
};

