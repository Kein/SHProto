#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHFlickeringLightManagerComponent.generated.h"

class ASHFlickeringLightBase;
class USpotLightWithShadowDistanceComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHFlickeringLightManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TArray<ASHFlickeringLightBase*> RegisteredFlickeringLights;
    
    UPROPERTY(Instanced, Transient)
    TArray<USpotLightWithShadowDistanceComponent*> RegisteredSpotLightsWithShadowDistance;
    
public:
    USHFlickeringLightManagerComponent(const FObjectInitializer& ObjectInitializer);

};

