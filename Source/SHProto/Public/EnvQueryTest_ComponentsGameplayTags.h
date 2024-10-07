#pragma once
#include "CoreMinimal.h"
#include "EnvironmentQuery/EnvQueryTest.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EnvQueryTest_ComponentsGameplayTags.generated.h"

UCLASS()
class SHPROTO_API UEnvQueryTest_ComponentsGameplayTags : public UEnvQueryTest {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FGameplayTagQuery TagQueryToMatch;
    
    UPROPERTY(EditAnywhere)
    bool bRejectIncompatibleItems;
    
    UPROPERTY()
    bool bUpdatedToUseQuery;
    
    UPROPERTY()
    EGameplayContainerMatchType TagsToMatch;
    
    UPROPERTY()
    FGameplayTagContainer GameplayTags;
    
public:
    UEnvQueryTest_ComponentsGameplayTags();

};

