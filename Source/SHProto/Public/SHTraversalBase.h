#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SHTraversalBase.generated.h"

class USphereComponent;

UCLASS()
class ASHTraversalBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USphereComponent* ProximitySphere;
    
public:
    ASHTraversalBase(const FObjectInitializer& ObjectInitializer);

};

