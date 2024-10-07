#pragma once
#include "CoreMinimal.h"
#include "MinMaxVector2D.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "SHGameplayFocusSlotsWidget.generated.h"

class UCanvasPanel;
class USHGameplayFocusWidget;

UCLASS(EditInlineNew)
class USHGameplayFocusSlotsWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* MainCanvas;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector2D SlotsNavVector;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMinMaxVector2D InputBlockWaitTimeMinMax;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InputThrottleAcceleration;
    
protected:
    UPROPERTY(Instanced, Transient)
    USHGameplayFocusWidget* OwnerWidget;
    
public:
    USHGameplayFocusSlotsWidget();

};

