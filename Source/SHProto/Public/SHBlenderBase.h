#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "SHBlenderBase.generated.h"

class UCurveFloat;

UCLASS(BlueprintType)
class SHPROTO_API USHBlenderBase : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    UObject* Requester;
    
    UPROPERTY(Transient)
    UCurveFloat* BlendInAlphaCurve;
    
    UPROPERTY(Transient)
    UCurveFloat* BlendOutAlphaCurve;
    
public:
    USHBlenderBase();

    UFUNCTION(BlueprintPure)
    bool IsBlendingInEnabled() const;
    
    UFUNCTION(BlueprintPure)
    float GetBlendAlpha() const;
    
};

