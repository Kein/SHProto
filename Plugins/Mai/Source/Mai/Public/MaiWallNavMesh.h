#pragma once
#include "CoreMinimal.h"
#include "NavMesh/RecastNavMesh.h"
#include "MaiWallNavMesh.generated.h"

class UMaiWallNavGenerator;

UCLASS()
class MAI_API AMaiWallNavMesh : public ARecastNavMesh {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UMaiWallNavGenerator* WallMeshGen;
    
    AMaiWallNavMesh(const FObjectInitializer& ObjectInitializer);

};

