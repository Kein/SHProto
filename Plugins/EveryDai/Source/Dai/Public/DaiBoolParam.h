#pragma once
#include "CoreMinimal.h"
#include "ScriptDaiParam.h"
#include "DaiBoolParam.generated.h"

UCLASS(Abstract, EditInlineNew)
class DAI_API UDaiBoolParam : public UScriptDaiParam {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool _Value;
    
public:
    UDaiBoolParam();

    UFUNCTION(BlueprintCallable)
    void UpdateValue(bool Value);
    
    UFUNCTION(BlueprintPure)
    float GetUpToDateValue() const;
    
};

