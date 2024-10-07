#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MaiBTTask_MoveToExt.h"
#include "MaiBTTask_MoveToAP.generated.h"

UCLASS()
class MAI_API UMaiBTTask_MoveToAP : public UMaiBTTask_MoveToExt {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag _ActionInjectionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _RunActionsOnReach;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _StanceFromActionPoint;
    
    UMaiBTTask_MoveToAP();

};

