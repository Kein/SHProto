#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DaiActorName.h"
#include "EDaiContextType.h"
#include "Templates/SubclassOf.h"
#include "DaiContext.generated.h"

class AActor;
class UDaiContextGetter;

USTRUCT(BlueprintType)
struct DAI_API FDaiContext {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EDaiContextType _ContextType;
    
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<AActor> _Reference;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> _Class;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag _GameplayTag;
    
    UPROPERTY(EditAnywhere)
    FName _Tag;
    
    UPROPERTY(EditAnywhere)
    FDaiActorName _Name;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDaiContextGetter* _Getter;
    
    FDaiContext();
};

