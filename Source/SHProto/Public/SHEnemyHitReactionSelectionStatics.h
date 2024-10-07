#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SHEnemyHitReactionSelectionAllowedStates.h"
#include "SHEnemyHitReactionSelectionStatics.generated.h"

UCLASS(BlueprintType)
class USHEnemyHitReactionSelectionStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USHEnemyHitReactionSelectionStatics();

    UFUNCTION(BlueprintCallable)
    static FSHEnemyHitReactionSelectionAllowedStates MergeAllowedHitReactions(UPARAM(Ref) FSHEnemyHitReactionSelectionAllowedStates& MergeInto, const FSHEnemyHitReactionSelectionAllowedStates& MergeFrom);
    
    UFUNCTION(BlueprintPure)
    static FSHEnemyHitReactionSelectionAllowedStates MakeAllowedHitReactionsSimple(bool AllowKnockdown, bool AllowFalter, bool AllowStagger, bool AllowNormal);
    
    UFUNCTION(BlueprintPure)
    static FSHEnemyHitReactionSelectionAllowedStates MakeAllowedHitReactionsNone();
    
    UFUNCTION(BlueprintPure)
    static FSHEnemyHitReactionSelectionAllowedStates MakeAllowedHitReactionsAll();
    
};

