#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "MaiSplineActor.generated.h"

class USplineComponent;

UCLASS()
class MAI_API AMaiSplineActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    USplineComponent* Spline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _DistanceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 _MaxIterations;
    
    AMaiSplineActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    FVector ProjectOnSpline(FVector Location) const;
    
};

