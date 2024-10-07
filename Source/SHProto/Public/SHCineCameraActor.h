#pragma once
#include "CoreMinimal.h"
#include "CineCameraActor.h"
#include "SHCineCameraActor.generated.h"

class USHCineCameraComponent;

UCLASS()
class SHPROTO_API ASHCineCameraActor : public ACineCameraActor {
    GENERATED_BODY()
public:
    ASHCineCameraActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    USHCineCameraComponent* GetSHCineCameraComponent() const;
    
};

