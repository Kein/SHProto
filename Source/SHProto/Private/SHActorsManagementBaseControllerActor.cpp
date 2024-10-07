#include "SHActorsManagementBaseControllerActor.h"
#include "Components/SceneComponent.h"
#include "SHSafeBeginPlayComponent.h"

ASHActorsManagementBaseControllerActor::ASHActorsManagementBaseControllerActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    this->SafeBeginPlayComponent = CreateDefaultSubobject<USHSafeBeginPlayComponent>(TEXT("SafeBeginPlayComponent"));
}


