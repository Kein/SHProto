#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SHRangedWeaponAnimInterface.generated.h"

UINTERFACE(Blueprintable)
class USHRangedWeaponAnimInterface : public UInterface {
    GENERATED_BODY()
};

class ISHRangedWeaponAnimInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void SetOutOfAmmo(bool InNewValue);
    
};

