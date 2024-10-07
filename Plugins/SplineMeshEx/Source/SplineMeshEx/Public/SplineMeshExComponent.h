#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/PrimitiveComponent.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "MeshSegmentInfo.h"
#include "SplineMeshExComponent.generated.h"

class UPhysicalMaterial;
class USplineMeshProcedural;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SPLINEMESHEX_API USplineMeshExComponent : public USceneComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced)
    TArray<USplineMeshProcedural*> _Bodies;
    
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMeshSegmentInfo StartShape;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMeshSegmentInfo EndShape;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMeshSegmentInfo> LeftSideShapeVariants;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMeshSegmentInfo> MiddleShapeVariants;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FMeshSegmentInfo> RightSideShapeVariants;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RandomSeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CastShadow;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 LightMapResolution;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLightingChannels LightingChannels;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionEnabled::Type> Collision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionChannel> CollisionChannel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CanAffectNavigation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool StretchSegment;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool GenerateSimplifiedCollision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool CoalesceSides;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CoalesceLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ForceMipmapsResidency;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicalMaterial* PhysMaterialOverride;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bRenderCustomDepth: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ERendererStencilMask CustomDepthStencilWriteMask;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 CustomDepthStencilValue;
    
    USplineMeshExComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetVectorParameterValue(FName ParameterName, FLinearColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetScalarParameterValue(FName ParameterName, float Value);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomDepthStencil(bool RenderCustomDepth, ERendererStencilMask DepthStencilWriteMask, int32 DepthStencilValue);
    
};

