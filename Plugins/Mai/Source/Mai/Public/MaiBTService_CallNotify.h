#pragma once
#include "CoreMinimal.h"
#include "MaiBTService_NativeNotify.h"
#include "MaiBTService_CallNotify.generated.h"

class UDaiNotify;

UCLASS()
class MAI_API UMaiBTService_CallNotify : public UMaiBTService_NativeNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, Instanced)
    UDaiNotify* _Notify;
    
public:
    UMaiBTService_CallNotify();

};

