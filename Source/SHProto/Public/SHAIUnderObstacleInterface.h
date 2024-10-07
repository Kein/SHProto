#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SHAIUnderObstacleInterface.generated.h"

class UPrimitiveComponent;

UINTERFACE(Blueprintable)
class USHAIUnderObstacleInterface : public UInterface {
    GENERATED_BODY()
};

class ISHAIUnderObstacleInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UPrimitiveComponent* GetObstaclePrimitiveToOverlap() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    TArray<UPrimitiveComponent*> GetObstaclePrimitivesToIgnore() const;
    
};

