#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeComponent.h"
#include "MaiBehaviorTreeComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiBehaviorTreeComponent : public UBehaviorTreeComponent {
    GENERATED_BODY()
public:
    UMaiBehaviorTreeComponent(const FObjectInitializer& ObjectInitializer);

};

