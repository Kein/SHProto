#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "MaiBTService_NativeNotify.h"
#include "MaiBTService_SetBoolNotify.generated.h"

UCLASS()
class MAI_API UMaiBTService_SetBoolNotify : public UMaiBTService_NativeNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector FlagToSet;
    
    UPROPERTY(EditAnywhere)
    uint8 bValue;
    
    UMaiBTService_SetBoolNotify();

};

