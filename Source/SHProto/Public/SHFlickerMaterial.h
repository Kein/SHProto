#pragma once
#include "CoreMinimal.h"
#include "SHNamedMaterialParameter.h"
#include "SHFlickerMaterial.generated.h"

class UMaterialInstanceDynamic;

USTRUCT()
struct FSHFlickerMaterial {
    GENERATED_BODY()
public:
    UPROPERTY()
    UMaterialInstanceDynamic* Mid;
    
    UPROPERTY()
    FSHNamedMaterialParameter TintEmission0;
    
    UPROPERTY()
    FSHNamedMaterialParameter VertexColorEmissiveTint;
    
    UPROPERTY()
    FSHNamedMaterialParameter VertexColorEmissiveIntensity;
    
    UPROPERTY()
    FSHNamedMaterialParameter AOFactor;
    
    SHPROTO_API FSHFlickerMaterial();
};

