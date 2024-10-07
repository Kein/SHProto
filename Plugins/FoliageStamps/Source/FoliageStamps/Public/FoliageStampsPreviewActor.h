#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FoliageStampPreset.h"
#include "FoliageStampsPreviewActor.generated.h"

class UInstancedStaticMeshComponent;
class UStaticMeshComponent;

UCLASS(NotPlaceable, Transient)
class FOLIAGESTAMPS_API AFoliageStampsPreviewActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UStaticMeshComponent* GizmoMesh;
    
    UPROPERTY(Instanced)
    TArray<UInstancedStaticMeshComponent*> Bodies;
    
    UPROPERTY()
    FFoliageStampPreset CachedStamp;
    
public:
    AFoliageStampsPreviewActor(const FObjectInitializer& ObjectInitializer);

};

