#pragma once
#include "CoreMinimal.h"
#include "MaiBTService_BlueprintBase.h"
#include "MaiBTService_Notify.generated.h"

class AAIController;
class APawn;

UCLASS(Abstract)
class MAI_API UMaiBTService_Notify : public UMaiBTService_BlueprintBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool _OnActivate;
    
    UPROPERTY(EditAnywhere)
    bool _OnDeactivate;
    
    UPROPERTY(EditAnywhere)
    bool _OnTick;
    
public:
    UMaiBTService_Notify();

    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveNotify(AAIController* OwnerController, APawn* ControlledPawn);
    
};

