#pragma once
#include "CoreMinimal.h"
#include "DaiFloatParam.h"
#include "EDaiFloatOperator.h"
#include "DaiFloatModifier.generated.h"

UCLASS(EditInlineNew)
class DAI_API UDaiFloatModifier : public UDaiFloatParam {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    EDaiFloatOperator _Operator;
    
    UPROPERTY(BlueprintReadOnly, meta=(AllowPrivateAccess=true))
    float _InValue;
    
public:
    UDaiFloatModifier();

    UFUNCTION(BlueprintPure)
    float GetDefaultValue() const;
    
};

