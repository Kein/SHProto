#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "ESHHealthStateEnum.h"
#include "SHGameplayHealthIndicatorWidget.generated.h"

class ASHCharacterPlay;
class UCanvasPanel;
class UImage;

UCLASS(EditInlineNew)
class SHPROTO_API USHGameplayHealthIndicatorWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* MainContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* IndicatorImage;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    ESHHealthStateEnum IndicatorVisibility_MinimumHealthState;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacterPlay;
    
public:
    USHGameplayHealthIndicatorWidget();

};

