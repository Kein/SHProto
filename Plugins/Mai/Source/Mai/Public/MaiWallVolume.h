#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "MaiWallVolume.generated.h"

class UMaiWallNavGenerator;

UCLASS()
class MAI_API AMaiWallVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleAnywhere)
    UMaiWallNavGenerator* WallMeshGen;
    
    AMaiWallVolume(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RegenerateGraph();
    
};

