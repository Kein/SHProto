#pragma once
#include "CoreMinimal.h"
#include "MaterialTypes.h"
#include "ESHMaterialPropertyControlType.h"
#include "SHMaterialPropertyControlData.generated.h"

class UCurveFloat;
class UCurveVector;
class UTexture;

USTRUCT(BlueprintType)
struct FSHMaterialPropertyControlData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsLayerParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<EMaterialParameterAssociation> Association;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 LayerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName PropertyName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 ContextValueType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ChangeSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHMaterialPropertyControlType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> ControlFloatCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UCurveVector> ControlVectorCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, TSoftObjectPtr<UTexture>> AssignedTexures;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UCurveFloat> ControlTexureCurve;
    
    SHPROTO_API FSHMaterialPropertyControlData();
};

