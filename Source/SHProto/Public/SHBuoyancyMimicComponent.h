#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHBuoyancyMimicWave.h"
#include "SHBuoyancyMimicComponent.generated.h"

class USceneComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHBuoyancyMimicComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSHBuoyancyMimicWave> WavesData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DisplacementScale;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool bEnableDebug;
    
public:
    USHBuoyancyMimicComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void Initialize(USceneComponent* InManagedComp);
    
};

