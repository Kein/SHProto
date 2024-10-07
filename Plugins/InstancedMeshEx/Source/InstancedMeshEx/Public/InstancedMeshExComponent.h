#pragma once
#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "InstancedMeshExComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UStaticMesh;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INSTANCEDMESHEX_API UInstancedMeshExComponent : public UProceduralMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* MaterialOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* Shape;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 NumberOfInstances;
    
    UInstancedMeshExComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicMaterial();
    
};

