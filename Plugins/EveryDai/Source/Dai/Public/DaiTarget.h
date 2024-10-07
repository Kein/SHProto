#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "DaiTarget.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct DAI_API FDaiTarget {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool _DirectSet;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AActor> _Actor;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> _Class;
    
    UPROPERTY(EditAnywhere)
    bool _UseGameplayTag;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag _GameplayTag;
    
    UPROPERTY(EditAnywhere)
    FName _Tag;
    
    FDaiTarget();
};

