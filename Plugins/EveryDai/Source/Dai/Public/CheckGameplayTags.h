#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "DaiCondition.h"
#include "DaiContext.h"
#include "CheckGameplayTags.generated.h"

UCLASS(EditInlineNew)
class DAI_API UCheckGameplayTags : public UDaiCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDaiContext _Observed;
    
    UPROPERTY()
    bool _Fixed;
    
    UPROPERTY()
    FGameplayTag _ActorTag;
    
    UPROPERTY(EditAnywhere)
    EGameplayContainerMatchType _TagsToMatch;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer _Tags;
    
    UPROPERTY(EditAnywhere)
    bool _CheckComponents;
    
    UCheckGameplayTags();

};

