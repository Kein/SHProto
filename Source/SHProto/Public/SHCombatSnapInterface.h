#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "SHCombatSnapInterface.generated.h"

UINTERFACE(Blueprintable)
class USHCombatSnapInterface : public UInterface {
    GENERATED_BODY()
};

class ISHCombatSnapInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    FVector GetSnapLocation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanSnapOnActor() const;
    
};

