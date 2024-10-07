#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SHCharacterAudioSubcomponentBase.generated.h"

class ACharacter;
class USHAkComponent;

UCLASS(Abstract, EditInlineNew)
class SHPROTO_API USHCharacterAudioSubcomponentBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ACharacter* OwnerCharacter;
    
    UPROPERTY(Instanced, Transient)
    USHAkComponent* OwnerComponent;
    
public:
    USHCharacterAudioSubcomponentBase();

};

