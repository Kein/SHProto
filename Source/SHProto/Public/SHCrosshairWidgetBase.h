#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SHCrosshairWidgetBase.generated.h"

class ASHCharacterPlay;

UCLASS(EditInlineNew)
class SHPROTO_API USHCrosshairWidgetBase : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
public:
    USHCrosshairWidgetBase();

};

