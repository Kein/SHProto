#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "AnimatedProceduralMeshActor.generated.h"

class UAnimatedProceduralMeshComponent;

UCLASS()
class INSTANCEDMESHEX_API AAnimatedProceduralMeshActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UAnimatedProceduralMeshComponent* AnimatedProceduralMesh;
    
public:
    AAnimatedProceduralMeshActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ImportMeshes();
    
};

