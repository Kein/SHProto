#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "SHNiagaraVolumeCutoutComponent.generated.h"

class UObject;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHNiagaraVolumeCutoutComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector BoxExtent;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FColor ShapeColor;
    
public:
    USHNiagaraVolumeCutoutComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetCutOutDisabled(const bool IsDisable, const UObject* Object);
    
    UFUNCTION(BlueprintPure)
    bool IsCutOutDisabledBy(const UObject* Object) const;
    
    UFUNCTION(BlueprintPure)
    bool IsCutOutDisabled() const;
    
};

