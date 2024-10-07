#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AtmosphereVCloudsActor.generated.h"

class UBoxComponent;
class USplineComponent;
class UVolumeTexture;

UCLASS()
class POSTPROCESSVOLUMEEX_API AAtmosphereVCloudsActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    USplineComponent* SplineComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly, meta=(AllowPrivateAccess=true))
    UBoxComponent* BoxComponent;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UVolumeTexture* Volume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Density;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool OrientToSpline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float AnimationSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LoopAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float SequencerTime;
    
    AAtmosphereVCloudsActor(const FObjectInitializer& ObjectInitializer);

};

