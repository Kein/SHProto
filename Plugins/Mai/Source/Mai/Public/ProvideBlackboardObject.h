#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "DaiContextGetter.h"
#include "ProvideBlackboardObject.generated.h"

UCLASS(EditInlineNew)
class MAI_API UProvideBlackboardObject : public UDaiContextGetter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector _Entry;
    
    UProvideBlackboardObject();

};

