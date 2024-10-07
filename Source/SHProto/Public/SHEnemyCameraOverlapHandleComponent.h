#pragma once
#include "CoreMinimal.h"
#include "SHPlayerCameraOverlapReceiveComponent.h"
#include "SHEnemyCameraOverlapHandleComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHEnemyCameraOverlapHandleComponent : public USHPlayerCameraOverlapReceiveComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinimumHiddenTime;
    
public:
    USHEnemyCameraOverlapHandleComponent(const FObjectInitializer& ObjectInitializer);

};

