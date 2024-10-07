#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplineMeshExActor.generated.h"

class USplineComponent;
class USplineMeshExComponent;

UCLASS()
class SPLINEMESHEX_API ASplineMeshExActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USplineMeshExComponent* SplineMeshExComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineToFollow;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AllowToBeMerged;
    
    ASplineMeshExActor(const FObjectInitializer& ObjectInitializer);

};

