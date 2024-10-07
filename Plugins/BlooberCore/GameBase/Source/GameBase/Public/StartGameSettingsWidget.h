#pragma once
#include "CoreMinimal.h"
#include "BUserWidget.h"
#include "StateWidgetInterface.h"
#include "StartGameSettingsWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class GAMEBASE_API UStartGameSettingsWidget : public UBUserWidget, public IStateWidgetInterface {
    GENERATED_BODY()
public:
    UStartGameSettingsWidget();


    // Fix for true pure virtual functions not being implemented
};

