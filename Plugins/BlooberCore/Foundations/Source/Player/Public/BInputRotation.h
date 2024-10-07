#pragma once
#include "CoreMinimal.h"
#include "BInputSource.h"
#include "BInputRotation.generated.h"

class UBInputTwoAxes;

UCLASS()
class PLAYER_API UBInputRotation : public UBInputSource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    UBInputTwoAxes* RotationDelta;
    
    UPROPERTY(Instanced, Transient)
    UBInputTwoAxes* RotationScale;
    
public:
    UBInputRotation();

};

