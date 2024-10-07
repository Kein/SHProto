#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "SHDeathPlayerData.h"
#include "SHCombatPlayDeathInterface.generated.h"

class ACharacter;

UINTERFACE(Blueprintable)
class USHCombatPlayDeathInterface : public UInterface {
    GENERATED_BODY()
};

class ISHCombatPlayDeathInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PlayDeath(ACharacter* Player, FGameplayTag PawnAnimTag, FGameplayTag PlayerAnimTag);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FSHDeathPlayerData GetDeathPlayerDataForDebug(ACharacter* killed);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FSHDeathPlayerData GetDeathPlayerData(ACharacter* killed);
    
};

