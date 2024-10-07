#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "MaiBTService_NativeNotify.h"
#include "MaiBTService_ClearBoardNotify.generated.h"

UCLASS()
class MAI_API UMaiBTService_ClearBoardNotify : public UMaiBTService_NativeNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector Key;
    
    UMaiBTService_ClearBoardNotify();

};

