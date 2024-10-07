#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MaterialParamsPhxShadow.generated.h"

class UMaterialParameterCollection;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MATERIALSSPLINECTRL_API UMaterialParamsPhxShadow : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SphereRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 SpheresCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float SphereTimeCoverage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WobbleDistanceA;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WobbleSpeedA;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WobbleDistanceB;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float WobbleSpeedB;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DebugDraw;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialParameterCollection* Collection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName BoundingSphereParamName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ArrayFormatPattern;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName EntityPositionParamName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PreviousEntityPositionParamName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName EntityRotationParamName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName PreviousEntityRotationParamName;
    
    UMaterialParamsPhxShadow(const FObjectInitializer& ObjectInitializer);

};

