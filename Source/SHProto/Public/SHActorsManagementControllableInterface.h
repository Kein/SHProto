#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SHActorsManagementControllableInterface.generated.h"

class ASHActorsManagementBaseControllerActor;

UINTERFACE(Blueprintable)
class USHActorsManagementControllableInterface : public UInterface {
    GENERATED_BODY()
};

class ISHActorsManagementControllableInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    bool ApplyShouldBeActive(ASHActorsManagementBaseControllerActor* InControllerActor, const bool InShouldBeActive);
    
};

