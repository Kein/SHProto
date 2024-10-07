#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "BeingFootmarkGenerator.generated.h"

class AActor;
class UMaterialInterface;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingFootmarkGenerator : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool _TraceComplex;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> _TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _TraceIgnoreMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> _TraceIgnoreActors;
    
    UPROPERTY(EditAnywhere)
    float _TraceDownLength;
    
    UPROPERTY(EditAnywhere)
    float _TraceInterval;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* _MaskMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* _TrailsMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _FootmarkDrawTrails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _DrawFootmarksMask;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _FootmarkQuadSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _TrailQuadSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _TrailQuadWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _FootmarkQuadYScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D _FootmarkDirectionalOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D _FootmarkLocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _FootmarkAngleOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _TrailsTiling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _TrailsAngleOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _FootmarkCanvasDensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _FootmarkHeightLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _FootmarkLifeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _FootmarksLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _TrailsLimit;
    
    UBeingFootmarkGenerator(const FObjectInitializer& ObjectInitializer);

};

