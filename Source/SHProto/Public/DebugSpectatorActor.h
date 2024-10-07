#pragma once
#include "CoreMinimal.h"
#include "GameFramework/SpectatorPawn.h"
#include "DebugSpectatorActor.generated.h"

UCLASS()
class SHPROTO_API ADebugSpectatorActor : public ASpectatorPawn {
    GENERATED_BODY()
public:
    ADebugSpectatorActor(const FObjectInitializer& ObjectInitializer);

};

