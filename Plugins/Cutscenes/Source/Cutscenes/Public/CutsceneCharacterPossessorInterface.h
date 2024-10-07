#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CutsceneCharacterPossessorInterface.generated.h"

UINTERFACE(Blueprintable)
class CUTSCENES_API UCutsceneCharacterPossessorInterface : public UInterface {
    GENERATED_BODY()
};

class CUTSCENES_API ICutsceneCharacterPossessorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void CutsceneCharacterProxyUnPossessed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void CutsceneCharacterProxyPossessed();
    
};

