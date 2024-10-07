#pragma once
#include "CoreMinimal.h"
#include "ProceduralMeshComponent.h"
#include "AnimProcMeshSectionsIDs.h"
#include "AnimatedProceduralMeshComponent.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;
class UStaticMesh;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class INSTANCEDMESHEX_API UAnimatedProceduralMeshComponent : public UProceduralMeshComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FAnimProcMeshSectionsIDs> SectionsAndFrames;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* MaterialOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UStaticMesh*> Shapes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    bool AutoFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AutoFrameFPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float AnimationFrame;
    
    UAnimatedProceduralMeshComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ImportMeshes();
    
    UFUNCTION(BlueprintCallable)
    UMaterialInstanceDynamic* GetDynamicMaterial();
    
};

