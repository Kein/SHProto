#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "BeingWandererInterface.generated.h"

UINTERFACE()
class BEING_API UBeingWandererInterface : public UInterface {
    GENERATED_BODY()
};

class BEING_API IBeingWandererInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual bool HasRequestedVelocity() PURE_VIRTUAL(HasRequestedVelocity, return false;);
    
    UFUNCTION()
    virtual FVector GetRequestedVelocity() PURE_VIRTUAL(GetRequestedVelocity, return FVector{};);
    
};

