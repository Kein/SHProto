#pragma once
#include "CoreMinimal.h"
#include "DaiContext.h"
#include "GameplayTagContainer.h"
#include "FlowAction.h"
#include "CallQuestEventFA.generated.h"

UCLASS(EditInlineNew)
class UCallQuestEventFA : public UFlowAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDaiContext _Performer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTag _UserTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString _UserString;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _UserInteger;
    
    UCallQuestEventFA();

};

