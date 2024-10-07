#pragma once
#include "CoreMinimal.h"
#include "BehaviorTree/BTService.h"
#include "MaiBTService_NativeNotify.generated.h"

UCLASS(Abstract)
class MAI_API UMaiBTService_NativeNotify : public UBTService {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool _OnActivate;
    
    UPROPERTY(EditAnywhere)
    bool _OnDeactivate;
    
    UPROPERTY(EditAnywhere)
    bool _OnTick;
    
    UMaiBTService_NativeNotify();

};

