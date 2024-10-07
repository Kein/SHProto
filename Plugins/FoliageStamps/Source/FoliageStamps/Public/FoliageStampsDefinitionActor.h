#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FoliageStampsDefinitionActor.generated.h"

class UStaticMeshComponent;

UCLASS()
class FOLIAGESTAMPS_API AFoliageStampsDefinitionActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    UStaticMeshComponent* GizmoMesh;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AllowRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString UniqueName;
    
    AFoliageStampsDefinitionActor(const FObjectInitializer& ObjectInitializer);

};

