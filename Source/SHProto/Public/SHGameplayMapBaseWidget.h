#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Blueprint/UserWidget.h"
#include "ESHMapObjectTypeEnum.h"
#include "SHGameplayMapBaseWidget.generated.h"

class ASHCharacterPlay;
class UCanvasPanel;
class UFont;
class UImage;
class ULocalizedFont;
class UTextLayoutWidget;
class UWidget;

UCLASS(EditInlineNew)
class USHGameplayMapBaseWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* ObjectsContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UCanvasPanel* FogRevealObjectsContainer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* PlayerPointer;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* Anchor1;
    
    UPROPERTY(BlueprintReadOnly, Instanced)
    UImage* Anchor2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UFont* FontToLocalize;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    float MapRotation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector Anchor1WorldPosition;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FVector Anchor2WorldPosition;
    
protected:
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Instanced, Transient)
    TArray<UWidget*> MapFogRevealObjectToApplyWidgets;
    
    UPROPERTY(Instanced, Transient)
    TArray<UTextLayoutWidget*> TextWidgets;
    
    UPROPERTY(Transient)
    ULocalizedFont* LocalizedFont;
    
public:
    USHGameplayMapBaseWidget();

    UFUNCTION(BlueprintImplementableEvent)
    void OnShowed();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnInit();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ApplyObjectData(UWidget* WidgetObject, ESHMapObjectTypeEnum ObjectType, int32 ObjectValue);
    
};

