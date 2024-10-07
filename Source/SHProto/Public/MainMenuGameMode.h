#pragma once
#include "CoreMinimal.h"
#include "EffectHandle.h"
#include "SHGameMode.h"
#include "MainMenuGameMode.generated.h"

UCLASS(NonTransient)
class AMainMenuGameMode : public ASHGameMode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MenuFadeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle LightEffect;
    
    AMainMenuGameMode(const FObjectInitializer& ObjectInitializer);

};

