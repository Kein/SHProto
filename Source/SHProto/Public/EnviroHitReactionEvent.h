#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "AngleCurveWithScaleGetter.h"
#include "EnviroHitReactionEvent.generated.h"

class ASHCharacterPlay;

UCLASS()
class UEnviroHitReactionEvent : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FAngleCurveWithScaleGetter AngleToAdd;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* Character;
    
public:
    UEnviroHitReactionEvent();

};

