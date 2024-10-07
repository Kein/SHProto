#pragma once
#include "CoreMinimal.h"
#include "CutsceneProxyPossessor.h"
#include "CutsceneToGameClassMap.generated.h"

class ACutsceneCharacterProxy;

USTRUCT(BlueprintType)
struct FCutsceneToGameClassMap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<TSoftClassPtr<ACutsceneCharacterProxy>, FCutsceneProxyPossessor> Data;
    
    CUTSCENES_API FCutsceneToGameClassMap();
};

