#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "DeviceAwareInterface.h"
#include "UCWProgressWidget.generated.h"

UCLASS(EditInlineNew)
class UUCWProgressWidget : public UUserWidget, public IDeviceAwareInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Percent;
    
public:
    UUCWProgressWidget();

    UFUNCTION(BlueprintCallable)
    void SetPercent(float InPercent);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnPercentUpdated(float InPercent);
    
public:
    UFUNCTION(BlueprintCallable)
    void InputDeviceChanged();
    

    // Fix for true pure virtual functions not being implemented
};

