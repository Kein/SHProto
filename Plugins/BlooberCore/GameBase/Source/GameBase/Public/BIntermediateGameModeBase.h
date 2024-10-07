#pragma once
#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "BIntermediateGameModeBase.generated.h"

UCLASS(NonTransient)
class GAMEBASE_API ABIntermediateGameModeBase : public AGameModeBase {
    GENERATED_BODY()
public:
    ABIntermediateGameModeBase(const FObjectInitializer& ObjectInitializer);

};

