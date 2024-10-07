#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "2DPingPongRTBinding.h"
#include "2DPingPongPass.generated.h"

class UCanvas;
class UMaterialInstanceDynamic;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct F2DPingPongPass {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TargetIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool Clear;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ClearAtBeginPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector4 ClearColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_DTParameterName: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName DTParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_TimeParameterName: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName TimeParameterName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bOverride_FrameIndexName: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName FrameIndexNameName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* Material;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* DynamicMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<F2DPingPongRTBinding> RTBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FCanvasUVTri> Triangles;
    
    UPROPERTY()
    UCanvas* Canvas[2];
    
    SHPROTO_API F2DPingPongPass();
};

