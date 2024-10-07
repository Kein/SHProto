#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMaiShapeType.h"
#include "MaiShape.generated.h"

USTRUCT(BlueprintType)
struct FMaiShape {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EMaiShapeType _Shape;
    
    UPROPERTY(EditAnywhere)
    FVector _Extents;
    
    MAI_API FMaiShape();
};

