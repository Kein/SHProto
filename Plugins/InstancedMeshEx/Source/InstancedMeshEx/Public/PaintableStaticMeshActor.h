#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "PaintableStaticMeshActor.generated.h"

UCLASS()
class INSTANCEDMESHEX_API APaintableStaticMeshActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    APaintableStaticMeshActor(const FObjectInitializer& ObjectInitializer);

};

