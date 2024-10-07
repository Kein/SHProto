#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "BeingVertexAnimComponent.generated.h"

class UMaterialInstanceDynamic;
class UStaticMeshComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingVertexAnimComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* _EffectMaterial;
    
    UPROPERTY(Instanced, Transient)
    UStaticMeshComponent* _EffectMesh;
    
    UBeingVertexAnimComponent(const FObjectInitializer& ObjectInitializer);

};

