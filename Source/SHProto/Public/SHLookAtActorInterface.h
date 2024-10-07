#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "SHLookAtActorInterface.generated.h"

class USceneComponent;

UINTERFACE(Blueprintable)
class USHLookAtActorInterface : public UInterface {
    GENERATED_BODY()
};

class ISHLookAtActorInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    USceneComponent* GetLookAtTargetComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool CanBeLookedAt() const;
    
};

