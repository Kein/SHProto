#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "DaiAnimPlayParams.h"
#include "DaiAnimSetInterface.generated.h"

class UAnimationAsset;

UINTERFACE(Blueprintable, MinimalAPI)
class UDaiAnimSetInterface : public UInterface {
    GENERATED_BODY()
};

class IDaiAnimSetInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    UAnimationAsset* GetAnimByTag(FGameplayTag Tag, FDaiAnimPlayParams& playParams) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    TArray<FDaiAnimPlayParams> GetAllAnimsByTag(FGameplayTagContainer Tags) const;
    
};

