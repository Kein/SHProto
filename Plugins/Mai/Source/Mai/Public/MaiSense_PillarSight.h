#pragma once
#include "CoreMinimal.h"
#include "MaiSense_SightDecorator.h"
#include "MaiSense_PillarSight.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiSense_PillarSight : public UMaiSense_SightDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _HalfWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _Yaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _Local;
    
    UMaiSense_PillarSight(const FObjectInitializer& ObjectInitializer);

};

