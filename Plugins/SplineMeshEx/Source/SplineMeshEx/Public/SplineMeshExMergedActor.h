#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/StaticMeshActor.h"
#include "SplineMeshExMergedActor.generated.h"

UCLASS()
class SPLINEMESHEX_API ASplineMeshExMergedActor : public AStaticMeshActor {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FGuid> MergedGUIDS;
    
    ASplineMeshExMergedActor(const FObjectInitializer& ObjectInitializer);

};

