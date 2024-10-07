#pragma once
#include "CoreMinimal.h"
#include "SHCustomRetainerBox.h"
#include "SHHealthBasedRetainerBox.generated.h"

class ASHCharacterPlay;

UCLASS()
class SHPROTO_API USHHealthBasedRetainerBox : public USHCustomRetainerBox {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShowAnimationDurationSeconds;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
public:
    USHHealthBasedRetainerBox();

};

