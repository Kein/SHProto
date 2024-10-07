#pragma once
#include "CoreMinimal.h"
#include "SHGameMode.h"
#include "SHMovieGameMode.generated.h"

class UDialogManager;

UCLASS(NonTransient)
class ASHMovieGameMode : public ASHGameMode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UDialogManager* DialogManager;
    
public:
    ASHMovieGameMode(const FObjectInitializer& ObjectInitializer);

};

