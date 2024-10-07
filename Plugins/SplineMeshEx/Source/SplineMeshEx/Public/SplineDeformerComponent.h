#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "SplineDeformerComponent.generated.h"

class USplineMeshProcedural;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPLINEMESHEX_API USplineDeformerComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 _AutoConversionVersion;
    
    UPROPERTY(Instanced)
    TArray<USplineMeshProcedural*> _Bodies;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableGeneration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DrawDebug;
    
    USplineDeformerComponent(const FObjectInitializer& ObjectInitializer);

};

