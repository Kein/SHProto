#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "SHCharacterLookAtLogicComponent.generated.h"

class AActor;
class USHLookAtTargetProvider;
class USHLookAtTargetScoreFunction;
class USHLookAtTypeID;
class USceneComponent;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHCharacterLookAtLogicComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<TSoftClassPtr<USHLookAtTypeID>> CharacterLookAtTypesPriorities;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    TMap<TSoftClassPtr<USHLookAtTypeID>, USHLookAtTargetProvider*> LookAtTargetProviders;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USHLookAtTargetScoreFunction> DefaultLookAtTargetScoreFunctionClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    TMap<TSoftClassPtr<USHLookAtTypeID>, USHLookAtTargetScoreFunction*> CustomLookAtTargetScoreFunctions;
    
private:
    UPROPERTY(Transient)
    USHLookAtTargetScoreFunction* DefaultLookAtTargetScoreFunction;
    
public:
    USHCharacterLookAtLogicComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopLookAtComponent(USceneComponent* TargetComponent, float BlendOutSpeed);
    
    UFUNCTION(BlueprintCallable)
    void StopLookAtActor(AActor* TargetActor, float BlendOutSpeed);
    
    UFUNCTION(BlueprintCallable)
    void ResetLookAtLogic(float BlendOutSpeed);
    
    UFUNCTION(BlueprintCallable)
    void LookAtComponent(USceneComponent* TargetComponent, TSoftClassPtr<USHLookAtTypeID> LookAtTypeID, float BlendSpeed);
    
    UFUNCTION(BlueprintCallable)
    void LookAtActor(AActor* TargetActor, TSoftClassPtr<USHLookAtTypeID> LookAtTypeID, float BlendSpeed);
    
    UFUNCTION(BlueprintPure)
    USHLookAtTargetProvider* GetLookAtTargetProvider(const TSoftClassPtr<USHLookAtTypeID>& LookAtTypeID) const;
    
    UFUNCTION(BlueprintPure)
    USceneComponent* GetCurrentLookAtTarget() const;
    
};

