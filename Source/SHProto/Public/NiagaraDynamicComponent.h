#pragma once
#include "CoreMinimal.h"
#include "NiagaraComponent.h"
#include "NiagaraDynamicComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UNiagaraDynamicComponent : public UNiagaraComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UMaterialInterface* oldMaterial;
    
    UNiagaraDynamicComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicMaterialInstance();
    
};

