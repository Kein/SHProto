#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SkeletalMeshExActor.generated.h"

class USkeletalMeshExComponent;

UCLASS()
class INSTANCEDMESHEX_API ASkeletalMeshExActor : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMeshExComponent* SkeletalMeshExComponent;
    
public:
    ASkeletalMeshExActor(const FObjectInitializer& ObjectInitializer);

};

