#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHBonePhysicsControllerPhysicsSerializedData.h"
#include "SHEnemyTransformationStateComponentTransformationEndedDelegate.h"
#include "SHEnemyTransformationStateComponentTransformationStartedDelegate.h"
#include "SHHitReactionSubcomponentSerializedData.h"
#include "SHEnemyTransformationStateComponent.generated.h"

class USHEnemyTransformationState;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHEnemyTransformationStateComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSHEnemyTransformationStateComponentTransformationStarted EventTransformationStarted;
    
    UPROPERTY(BlueprintAssignable)
    FSHEnemyTransformationStateComponentTransformationEnded EventTransformationEnded;
    
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bDebugDisplayState;
    
    UPROPERTY(EditDefaultsOnly, SaveGame)
    USHEnemyTransformationState* ActiveTransformationState;
    
    UPROPERTY(EditAnywhere, SaveGame)
    FName ActiveTransformationVariant;
    
    UPROPERTY()
    FSHHitReactionSubcomponentSerializedData HitReactionsSaveData;
    
    UPROPERTY()
    FSHBonePhysicsControllerPhysicsSerializedData BonePhysicsSaveData;
    
public:
    USHEnemyTransformationStateComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsOtherWorldEnemy(bool InEnemyIsOW);
    
    UFUNCTION(BlueprintPure)
    bool GetTransformationIsInProgress() const;
    
    UFUNCTION(BlueprintPure)
    float GetRemainingTransformationDuration() const;
    
    UFUNCTION(BlueprintPure)
    USHEnemyTransformationState* GetActiveTransformationState() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyTransformationState(USHEnemyTransformationState* InTransformationState, float InOverrideDuration, float InOverrideHitReactionsChangeDelay, float InOverrideLyingChangeDelay, float InOverrideLyingChangeDuration);
    
};

