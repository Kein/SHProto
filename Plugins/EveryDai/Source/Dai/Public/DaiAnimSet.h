#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "DaiAnimPlayParams.h"
#include "DaiAnimsList.h"
#include "DaiAnimSet.generated.h"

class UAnimationAsset;
class UDataTable;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAI_API UDaiAnimSet : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TMap<FGameplayTag, FGameplayTagContainer> _InjectedTags;
    
    UPROPERTY(EditAnywhere)
    TArray<UDataTable*> _AnimTable;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGameplayTag, FDaiAnimsList> _AnimSet;
    
    UPROPERTY(Transient, VisibleInstanceOnly)
    TMap<FGameplayTag, FDaiAnimsList> _InjectedSet;
    
public:
    UDaiAnimSet(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void InjectAnimsTag(FGameplayTag AnimSet, FGameplayTagContainer injection);
    
    UFUNCTION(BlueprintCallable)
    void InjectAnimsList(FGameplayTag AnimSet, const TArray<FDaiAnimPlayParams>& injection);
    
    UFUNCTION(BlueprintCallable)
    void InjectAnim(FGameplayTag AnimSet, const FDaiAnimPlayParams& injection);
    
    UFUNCTION(BlueprintPure)
    static FDaiAnimPlayParams getRandomAnimParams(const TArray<FDaiAnimPlayParams>& playParams);
    
    UFUNCTION(BlueprintPure)
    static FDaiAnimPlayParams getBestAngleAnimParams(const TArray<FDaiAnimPlayParams>& playParams, float Angle);
    
    UFUNCTION(BlueprintPure)
    UAnimationAsset* GetAnimByTag(FGameplayTagContainer Tags, FDaiAnimPlayParams& playParams) const;
    
    UFUNCTION(BlueprintPure)
    TArray<FDaiAnimPlayParams> GetAllAnimsByTag(FGameplayTagContainer Tags) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearInjection(FGameplayTag AnimSet);
    
};

