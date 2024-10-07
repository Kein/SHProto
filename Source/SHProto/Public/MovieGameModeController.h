#pragma once
#include "CoreMinimal.h"
#include "BaseGameModeController.h"
#include "MovieGameModeController.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UMovieGameModeController : public UBaseGameModeController {
    GENERATED_BODY()
public:
    UMovieGameModeController(const FObjectInitializer& ObjectInitializer);

};

