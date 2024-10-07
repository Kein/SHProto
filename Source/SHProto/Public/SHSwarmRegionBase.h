#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "ESwarmRegionType.h"
#include "SHSwarmRegionBase.generated.h"

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHSwarmRegionBase : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESwarmRegionType RegionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SphereRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector BoxExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShowDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor RegionColor;
    
    USHSwarmRegionBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    FVector GetScaledShapeSize() const;
    
};

