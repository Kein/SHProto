#pragma once
#include "CoreMinimal.h"
#include "CutsceneProxyPossessor.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FCutsceneProxyPossessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftClassPtr<AActor> Actor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ExistsOnlyInCutscene;
    
    CUTSCENES_API FCutsceneProxyPossessor();
};

