#pragma once
#include "CoreMinimal.h"
#include "Camera/CameraActor.h"
#include "SHCameraActor.generated.h"

class USHCameraComponent;

UCLASS()
class SHPROTO_API ASHCameraActor : public ACameraActor {
    GENERATED_BODY()
public:
    ASHCameraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    USHCameraComponent* GetSHCameraComponent() const;
    
};

