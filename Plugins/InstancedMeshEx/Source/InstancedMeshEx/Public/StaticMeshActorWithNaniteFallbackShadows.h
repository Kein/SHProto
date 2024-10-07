#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "StaticMeshActorWithNaniteFallbackShadows.generated.h"

UCLASS()
class INSTANCEDMESHEX_API AStaticMeshActorWithNaniteFallbackShadows : public AStaticMeshActor {
    GENERATED_BODY()
public:
    AStaticMeshActorWithNaniteFallbackShadows(const FObjectInitializer& ObjectInitializer);

};

