#pragma once
#include "CoreMinimal.h"
#include "ESHNewGamePlusControllerBehaviourType.generated.h"

UENUM(BlueprintType)
enum class ESHNewGamePlusControllerBehaviourType : uint8 {
    DefaultGameOnly,
    NewGamePlusOnly,
    SeenInWaterEndingOnly,
};

