#pragma once
#include "CoreMinimal.h"
#include "DataProviders/AIDataProvider.h"
#include "AIDataProvider_FromScript.generated.h"

class APawn;

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class MAI_API UAIDataProvider_FromScript : public UAIDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY()
    float FloatValue;
    
    UPROPERTY()
    int32 IntValue;
    
    UPROPERTY()
    bool BoolValue;
    
    UAIDataProvider_FromScript();

    UFUNCTION(BlueprintCallable)
    void SetIntValue(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetFloatValue(float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetBoolValue(bool Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    FString ScriptToString() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ScriptBindData(const APawn* Pawn);
    
};

