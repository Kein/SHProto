#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "CutsceneCachedCharacterInterface.generated.h"

UINTERFACE(Blueprintable)
class CUTSCENES_API UCutsceneCachedCharacterInterface : public UInterface {
    GENERATED_BODY()
};

class CUTSCENES_API ICutsceneCachedCharacterInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    bool CachedActorSpawned();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool CachedActorEnabled();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool CachedActorDisabled();
    
    UFUNCTION(BlueprintImplementableEvent)
    bool CachedActorDespawned();
    
};

