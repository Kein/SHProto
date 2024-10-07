#pragma once
#include "CoreMinimal.h"
#include "SHGameInstanceSubObject.h"
#include "SHDebugManager.generated.h"

class USHDebugManagerWidget;

UCLASS(BlueprintType)
class USHDebugManager : public USHGameInstanceSubObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    USHDebugManagerWidget* Widget;
    
public:
    USHDebugManager();

};

