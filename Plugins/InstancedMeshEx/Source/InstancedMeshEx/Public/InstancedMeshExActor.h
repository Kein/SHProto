#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "InstancedMeshExActor.generated.h"

class UInstancedMeshExComponent;

UCLASS()
class INSTANCEDMESHEX_API AInstancedMeshExActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UInstancedMeshExComponent* InstancedMeshExComponent;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ReloadMeshes;
    
    AInstancedMeshExActor(const FObjectInitializer& ObjectInitializer);

};

