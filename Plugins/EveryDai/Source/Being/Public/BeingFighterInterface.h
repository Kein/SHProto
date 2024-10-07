#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EBeingAttackStage.h"
#include "BeingFighterInterface.generated.h"

UINTERFACE(Blueprintable)
class BEING_API UBeingFighterInterface : public UInterface {
    GENERATED_BODY()
};

class BEING_API IBeingFighterInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void StartBlow(int32 impactID, const TArray<FName>& colliderTags);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetAttackStage(EBeingAttackStage attackStage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnDeath();
    
    UFUNCTION(BlueprintNativeEvent)
    void HitEnemy(int32 impactID, float Damage);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void EndBlow(int32 impactID, const TArray<FName>& colliderTags);
    
};

