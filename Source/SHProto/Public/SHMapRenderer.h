#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHMapRenderer.generated.h"

class ASHMapRenderer;
class UMaterialInstanceDynamic;
class USHGameplayMapRenderWidget;
class UTextureRenderTarget2D;
class UWidgetComponent;

UCLASS()
class ASHMapRenderer : public AActor {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHMapRendererEvent, ASHMapRenderer*, RendererPtr);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Instanced)
    UWidgetComponent* Widget;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* ReceiverDynamicMaterial;
    
public:
    ASHMapRenderer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    USHGameplayMapRenderWidget* GetUserWidgetObject() const;
    
    UFUNCTION(BlueprintPure)
    UTextureRenderTarget2D* GetRenderTarget() const;
    
};

