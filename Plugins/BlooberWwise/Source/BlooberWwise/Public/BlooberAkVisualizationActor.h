#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "BlooberAkVisualizationActor.generated.h"

class UBlooberAkVisualizationComponent;
class UInstancedStaticMeshComponent;

UCLASS(NotPlaceable, Transient)
class BLOOBERWWISE_API ABlooberAkVisualizationActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UBlooberAkVisualizationComponent* VisComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UInstancedStaticMeshComponent* InstComponent;
    
public:
    ABlooberAkVisualizationActor(const FObjectInitializer& ObjectInitializer);

};

