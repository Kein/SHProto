#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "SHGameplayFadeWidget.generated.h"

UCLASS(EditInlineNew)
class SHPROTO_API USHGameplayFadeWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultFadeInDurationSeconds;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DefaultFadeOutDurationSeconds;
    
public:
    USHGameplayFadeWidget();

    UFUNCTION(BlueprintPure)
    FLinearColor GetCurrentColor() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintImplementableColorChanged();
    
};

