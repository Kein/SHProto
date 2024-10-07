#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "GameplayTagAssetInterface.h"
#include "GameplayTagContainer.h"
#include "DaiTagsComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DAI_API UDaiTagsComponent : public UActorComponent, public IGameplayTagAssetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer _TagContainer;
    
public:
    UDaiTagsComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetGameplayTags(FGameplayTagContainer Tags);
    
    UFUNCTION(BlueprintCallable)
    void RemoveGameplayTags(FGameplayTagContainer Tags);
    
    UFUNCTION(BlueprintPure)
    bool HasAnyGameplayTag() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearGameplayTags();
    
    UFUNCTION(BlueprintCallable)
    void AppendGameplayTags(FGameplayTagContainer Tags);
    

    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override PURE_VIRTUAL(HasMatchingGameplayTag, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAnyMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(HasAllMatchingGameplayTags, return false;);
    
    UFUNCTION(BlueprintCallable)
    void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override PURE_VIRTUAL(GetOwnedGameplayTags,);
    
};

