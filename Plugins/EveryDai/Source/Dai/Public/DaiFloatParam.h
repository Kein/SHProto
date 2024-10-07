#pragma once
#include "CoreMinimal.h"
#include "ScriptDaiParam.h"
#include "DaiFloatParam.generated.h"

UCLASS(Abstract, EditInlineNew)
class DAI_API UDaiFloatParam : public UScriptDaiParam {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float _Value;
    
public:
    UDaiFloatParam();

    UFUNCTION(BlueprintCallable)
    void UpdateValue(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomValue(float newval);
    
    UFUNCTION(BlueprintPure)
    float GetUpToDateValue() const;
    
};

