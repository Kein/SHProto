#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "StaticMeshComponentNaniteFallbackShadows.generated.h"

class UStaticMeshComponentWithNaniteFallbackShadows;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INSTANCEDMESHEX_API UStaticMeshComponentNaniteFallbackShadows : public UStaticMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    UStaticMeshComponentWithNaniteFallbackShadows* ProxyParent;
    
public:
    UStaticMeshComponentNaniteFallbackShadows(const FObjectInitializer& ObjectInitializer);

};

