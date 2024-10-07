#pragma once
#include "CoreMinimal.h"
#include "SHFlickerLight.h"
#include "SHFlickerMesh.h"
#include "SHFlickerGroup.generated.h"

USTRUCT(BlueprintType)
struct FSHFlickerGroup {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 GroupId;
    
    UPROPERTY()
    TArray<FSHFlickerMesh> Meshes;
    
    UPROPERTY()
    TArray<FSHFlickerLight> Lights;
    
    UPROPERTY()
    float Multiplier;
    
    UPROPERTY()
    int32 OnOffTrigger;
    
    SHPROTO_API FSHFlickerGroup();
};

