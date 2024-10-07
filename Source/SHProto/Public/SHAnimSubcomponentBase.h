#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SHAnimSubcomponentBase.generated.h"

class ACharacter;
class USHAnimComponent;

UCLASS(Abstract, EditInlineNew)
class SHPROTO_API USHAnimSubcomponentBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ACharacter* OwnerCharacter;
    
    UPROPERTY(Instanced, Transient)
    USHAnimComponent* OwnerComponent;
    
public:
    USHAnimSubcomponentBase();

};

