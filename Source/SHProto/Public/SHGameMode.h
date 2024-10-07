#pragma once
#include "CoreMinimal.h"
#include "BGameModeBase.h"
#include "SHGameMode.generated.h"

UCLASS(Abstract, NonTransient)
class ASHGameMode : public ABGameModeBase {
    GENERATED_BODY()
public:
    ASHGameMode(const FObjectInitializer& ObjectInitializer);

};

