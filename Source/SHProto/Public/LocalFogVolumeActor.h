#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "LocalFogVolumeActor.generated.h"

UCLASS()
class SHPROTO_API ALocalFogVolumeActor : public AActor {
    GENERATED_BODY()
public:
    ALocalFogVolumeActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDebugPosition(FTransform Transform);
    
};

