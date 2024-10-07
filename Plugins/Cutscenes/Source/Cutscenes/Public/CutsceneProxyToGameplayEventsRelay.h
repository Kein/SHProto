#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "CutsceneProxyToGameplayEventsRelay.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class CUTSCENES_API UCutsceneProxyToGameplayEventsRelay : public UActorComponent {
    GENERATED_BODY()
public:
    UCutsceneProxyToGameplayEventsRelay(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetClothAnimDrive(FName ClothName, FVector2D AnimDriveStiffness, FVector2D AnimDriveDamping);
    
    UFUNCTION(BlueprintCallable)
    void IgnoreInputPose(bool ignore);
    
};

