#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NodeGraphTester.generated.h"

class UMaiNodePathDrawer;

UCLASS(Abstract)
class MAI_API ANodeGraphTester : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, VisibleAnywhere)
    UMaiNodePathDrawer* _NodePath;
    
public:
    ANodeGraphTester(const FObjectInitializer& ObjectInitializer);

};

