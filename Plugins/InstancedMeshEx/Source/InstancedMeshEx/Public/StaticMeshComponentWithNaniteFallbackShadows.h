#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "StaticMeshComponentWithNaniteFallbackShadows.generated.h"

class UStaticMeshComponentNaniteFallbackShadows;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INSTANCEDMESHEX_API UStaticMeshComponentWithNaniteFallbackShadows : public UStaticMeshComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced, Transient)
    UStaticMeshComponentNaniteFallbackShadows* Fallback;
    
public:
    UStaticMeshComponentWithNaniteFallbackShadows(const FObjectInitializer& ObjectInitializer);

};

