#pragma once
#include "CoreMinimal.h"
#include "SHCustomBorder.h"
#include "SHHealthBasedBorder.generated.h"

class ASHCharacterPlay;

UCLASS()
class SHPROTO_API USHHealthBasedBorder : public USHCustomBorder {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShowAnimationDurationSeconds;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
public:
    USHHealthBasedBorder();

};

