#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "OnCoverChangedDelegate.h"
#include "MaiCoverUser.generated.h"

class UMaiCoverComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiCoverUser : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleInstanceOnly, meta=(AllowPrivateAccess=true))
    TArray<UMaiCoverComponent*> _MyCovers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool _Enabled;
    
public:
    UPROPERTY(BlueprintAssignable)
    FOnCoverChanged _OnEnterCover;
    
    UPROPERTY(BlueprintAssignable)
    FOnCoverChanged _OnLeaveCover;
    
    UMaiCoverUser(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsInFullCover(FGameplayTag Filter) const;
    
    UFUNCTION(BlueprintPure)
    bool IsInCover(FGameplayTag Filter) const;
    
};

