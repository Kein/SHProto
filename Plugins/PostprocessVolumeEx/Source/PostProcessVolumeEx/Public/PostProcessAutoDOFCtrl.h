#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/EngineTypes.h"
#include "PostProcessAutoDOFCtrl.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class POSTPROCESSVOLUMEEX_API UPostProcessAutoDOFCtrl : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector DOFActorOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool DOFFromPlayerPosition;
    
    UPostProcessAutoDOFCtrl(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetExternalDriver(bool State);
    
    UFUNCTION(BlueprintCallable)
    void SetExternalDepthValue(float DepthValue);
    
};

