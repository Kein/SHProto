#pragma once
#include "CoreMinimal.h"
#include "MaiHostileAttackers.h"
#include "SHAIHostileAttackers.generated.h"

class AAIController;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHAIHostileAttackers : public UMaiHostileAttackers {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TMap<TSoftClassPtr<AAIController>, int32> _MaxCount;
    
    USHAIHostileAttackers(const FObjectInitializer& ObjectInitializer);

};

