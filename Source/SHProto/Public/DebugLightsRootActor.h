#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "DebugLightsRootActor.generated.h"

class ADebugLightsRootActor;

UCLASS()
class SHPROTO_API ADebugLightsRootActor : public AActor {
    GENERATED_BODY()
public:
    ADebugLightsRootActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    TArray<ADebugLightsRootActor*> GetAllLightsRoots();
    
    UFUNCTION(BlueprintCallable)
    TArray<AActor*> GetAllChildsWithTag(FName Tag, bool FromAllRoots);
    
};

