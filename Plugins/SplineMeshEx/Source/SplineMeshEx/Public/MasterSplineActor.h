#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MasterSplineActor.generated.h"

class USplineComponent;

UCLASS()
class SPLINEMESHEX_API AMasterSplineActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USplineComponent* MasterSpline;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UpdateChildsTangents;
    
    AMasterSplineActor(const FObjectInitializer& ObjectInitializer);

};

