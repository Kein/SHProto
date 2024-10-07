#pragma once
#include "CoreMinimal.h"
#include "ESHEddieFaceExpression.generated.h"

UENUM(BlueprintType)
enum class ESHEddieFaceExpression : uint8 {
    Exhale,
    Frustrated,
    Hurt,
    Scared,
    Scream,
    Smile_Sneer,
    Smirk,
    Angry,
    Normal,
};

