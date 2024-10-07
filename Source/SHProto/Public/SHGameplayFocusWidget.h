#pragma once
#include "CoreMinimal.h"
#include "UE4InputActionHandle.h"
#include "UE4InputAxisHandle.h"
#include "Blueprint/UserWidget.h"
#include "SHGameplayFocusWidget.generated.h"

class ASHCharacterPlay;
class USHInputKeysData;
class USHMiniInventoryWidget;

UCLASS(EditInlineNew)
class SHPROTO_API USHGameplayFocusWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    USHMiniInventoryWidget* MiniInventoryWidget;
    
    UPROPERTY(EditAnywhere)
    USHInputKeysData* InputKeysDataAsset;
    
    UPROPERTY(EditAnywhere)
    FUE4InputActionHandle ToggleFlashlightActionHandle;
    
    UPROPERTY(EditAnywhere)
    FUE4InputAxisHandle FocusableCameraRotationAxisHandleX;
    
    UPROPERTY(EditAnywhere)
    FUE4InputAxisHandle FocusableCameraRotationAxisHandleY;
    
protected:
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
public:
    USHGameplayFocusWidget();

};

