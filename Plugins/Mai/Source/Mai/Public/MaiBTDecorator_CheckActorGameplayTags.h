#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "MaiBTDecorator_WithInterval.h"
#include "MaiBTDecorator_CheckActorGameplayTags.generated.h"

UCLASS()
class MAI_API UMaiBTDecorator_CheckActorGameplayTags : public UMaiBTDecorator_WithInterval {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ActorToCheck;
    
    UPROPERTY(EditAnywhere)
    EGameplayContainerMatchType TagsToMatch;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer GameplayTags;
    
    UPROPERTY()
    FString CachedDescription;
    
public:
    UMaiBTDecorator_CheckActorGameplayTags();

};

