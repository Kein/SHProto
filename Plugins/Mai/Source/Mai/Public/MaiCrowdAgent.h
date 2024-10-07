#pragma once
#include "CoreMinimal.h"
#include "Navigation/CrowdFollowingComponent.h"
#include "MaiCrowdAgent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiCrowdAgent : public UCrowdFollowingComponent {
    GENERATED_BODY()
public:
    UMaiCrowdAgent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void InitializeCrowd();
    
};

