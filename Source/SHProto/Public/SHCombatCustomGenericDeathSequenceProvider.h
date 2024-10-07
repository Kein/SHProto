#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ESHSimpleDirectionType.h"
#include "SHCombatCustomGenericDeathSequenceProvider.generated.h"

class ASHCharacterPlayGenericDeathPlayer;

UINTERFACE(Blueprintable)
class USHCombatCustomGenericDeathSequenceProvider : public UInterface {
    GENERATED_BODY()
};

class ISHCombatCustomGenericDeathSequenceProvider : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TSoftClassPtr<ASHCharacterPlayGenericDeathPlayer> GetCustomGenericDeathSequenceSoftClass(ESHSimpleDirectionType InLastHitWorldDirType);
    
};

