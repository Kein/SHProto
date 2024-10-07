#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHInventoryRenderer.generated.h"

class USHGameplaySectionBaseWidget;
class UTextureRenderTarget2D;
class UWidgetComponent;

UCLASS()
class ASHInventoryRenderer : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UWidgetComponent* Widget;
    
public:
    ASHInventoryRenderer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    USHGameplaySectionBaseWidget* GetUserWidgetObject() const;
    
    UFUNCTION(BlueprintPure)
    UTextureRenderTarget2D* GetRenderTarget() const;
    
};

