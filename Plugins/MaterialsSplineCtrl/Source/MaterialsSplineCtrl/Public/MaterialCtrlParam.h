#pragma once
#include "CoreMinimal.h"
#include "EGizmoParameterTransfer.h"
#include "MaterialCtrlParam.generated.h"

class UCurveBase;

USTRUCT(BlueprintType)
struct FMaterialCtrlParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 PType;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UCurveBase* Curve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseGizmoField;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EGizmoParameterTransfer GizmoCoordsTransfer;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName GizmoTagName;
    
    UPROPERTY(Transient)
    FName GizmoTagNameOld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool LoopsAround;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SpeedScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ValueScale;
    
    MATERIALSSPLINECTRL_API FMaterialCtrlParam();
};

