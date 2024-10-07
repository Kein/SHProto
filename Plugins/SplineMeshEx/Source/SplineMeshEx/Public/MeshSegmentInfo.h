#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MeshSegmentInfo.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FMeshSegmentInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UStaticMesh* Shape;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTransform LocalTransform;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector CollisionLocalOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MeshSpacing;
    
    UPROPERTY()
    float LengthOfMesh;
    
    SPLINEMESHEX_API FMeshSegmentInfo();
};

