#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "CustomDecalMeshHits.h"
#include "SHCustomDecalComponent.generated.h"

class UMeshComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHCustomDecalComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    TMap<UMeshComponent*, FCustomDecalMeshHits> ManagedMeshesHits;
    
public:
    USHCustomDecalComponent(const FObjectInitializer& ObjectInitializer);

};

