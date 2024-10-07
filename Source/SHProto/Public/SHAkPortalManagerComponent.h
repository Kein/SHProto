#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHAkPortalManagerComponent.generated.h"

class USHAkPortalComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAkPortalManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    TArray<USHAkPortalComponent*> RegisteredAkPortals;
    
public:
    USHAkPortalManagerComponent(const FObjectInitializer& ObjectInitializer);

};

