#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SplineDeformerActor.generated.h"

class USplineComponent;
class USplineDeformerComponent;

UCLASS()
class SPLINEMESHEX_API ASplineDeformerActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USplineDeformerComponent* DeformerComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineToFollow;
    
public:
    ASplineDeformerActor(const FObjectInitializer& ObjectInitializer);

};

