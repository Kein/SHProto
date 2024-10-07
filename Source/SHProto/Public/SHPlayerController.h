#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "SHPlayerController.generated.h"

UCLASS(Abstract)
class ASHPlayerController : public APlayerController {
    GENERATED_BODY()
public:
    ASHPlayerController(const FObjectInitializer& ObjectInitializer);

};

