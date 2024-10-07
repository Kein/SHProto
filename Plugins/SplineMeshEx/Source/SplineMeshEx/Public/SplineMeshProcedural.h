#pragma once
#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "SplineMeshProcedural.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USplineMeshProcedural : public UProceduralMeshComponent {
    GENERATED_BODY()
public:
    USplineMeshProcedural(const FObjectInitializer& ObjectInitializer);

};

