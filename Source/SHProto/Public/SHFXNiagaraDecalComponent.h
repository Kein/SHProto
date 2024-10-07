#pragma once
#include "CoreMinimal.h"
#include "Components/DecalComponent.h"
#include "SHFXNiagaraDecalComponent.generated.h"

class UMaterialInstanceDynamic;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHFXNiagaraDecalComponent : public UDecalComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName ErosionParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FadeAwayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsErosionEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseErosionInvert;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* DecalMaterialDynamic;
    
public:
    USHFXNiagaraDecalComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetInitialErode(const float InitialErode);
    
};

