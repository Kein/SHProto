#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SHCombatPushedInterface.generated.h"

class AActor;

UINTERFACE(Blueprintable)
class USHCombatPushedInterface : public UInterface {
    GENERATED_BODY()
};

class ISHCombatPushedInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool PushedBy(AActor* pusher);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBePushed();
    
};

