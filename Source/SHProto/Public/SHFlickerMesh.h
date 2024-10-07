#pragma once
#include "CoreMinimal.h"
#include "SHFlickerMaterial.h"
#include "SHFlickerMesh.generated.h"

class UPrimitiveComponent;

USTRUCT()
struct FSHFlickerMesh {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced)
    UPrimitiveComponent* Component;
    
    UPROPERTY()
    TArray<FSHFlickerMaterial> Materials;
    
    UPROPERTY()
    bool HasOffTag;
    
    SHPROTO_API FSHFlickerMesh();
};

