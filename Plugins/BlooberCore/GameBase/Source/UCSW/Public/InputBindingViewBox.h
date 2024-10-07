#pragma once
#include "CoreMinimal.h"
#include "UE4InputHandle.h"
#include "Blueprint/UserWidget.h"
#include "Templates/SubclassOf.h"
#include "InputBindingViewBox.generated.h"

class UActionKeysViewWidget;
class UPanelWidget;
class UWidget;

UCLASS(EditInlineNew)
class UInputBindingViewBox : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UActionKeysViewWidget> ViewWidgetClass;
    
    UPROPERTY(BlueprintReadOnly, EditInstanceOnly)
    TArray<FUE4InputHandle> Options;
    
    UPROPERTY(EditAnywhere)
    bool bPCKeysOnly;
    
    UPROPERTY(EditAnywhere)
    bool bGamepadKeysOnly;
    
    UPROPERTY(EditAnywhere)
    bool bForAxisAnalogOnly;
    
    UPROPERTY(EditAnywhere)
    bool bShowSingleKey;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UPanelWidget* Options_panel;
    
public:
    UInputBindingViewBox();

    UFUNCTION(BlueprintPure)
    UWidget* GetLastChild() const;
    
    UFUNCTION(BlueprintPure)
    UWidget* GetFirstChild() const;
    
};

