#pragma once
#include "CoreMinimal.h"
#include "DaiUpdatableParam.h"
#include "GraphObject.h"
#include "DaiParam.generated.h"

UCLASS(Abstract, EditInlineNew)
class DAI_API UDaiParam : public UGraphObject, public IDaiUpdatableParam {
    GENERATED_BODY()
public:
private:
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    bool _IsUpToDate;
    
public:
    UDaiParam();

    UFUNCTION(BlueprintCallable)
    void SetUpToDate();
    
    UFUNCTION(BlueprintCallable)
    void NeedsUpdate();
    
    UFUNCTION(BlueprintPure)
    bool IsUpToDate() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdate();
    

    // Fix for true pure virtual functions not being implemented
};

