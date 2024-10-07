#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "MaiRotationLimitsComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiRotationLimitsComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _MinPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _MaxPitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _MinYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _MaxYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _MinRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _MaxRoll;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator _RotationRate;
    
    UMaiRotationLimitsComponent(const FObjectInitializer& ObjectInitializer);

};

