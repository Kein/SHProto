#pragma once
#include "CoreMinimal.h"
#include "EStateStatus.h"
#include "MaiBTTask_BlueprintBase.h"
#include "MaiBTTask_State.generated.h"

class UBeingState;

UCLASS()
class MAI_API UMaiBTTask_State : public UMaiBTTask_BlueprintBase {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere, Instanced)
    UBeingState* _State;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool _Decorated;
    
    UMaiBTTask_State();

    UFUNCTION()
    void OnStateStatusChanged(EStateStatus Status);
    
};

