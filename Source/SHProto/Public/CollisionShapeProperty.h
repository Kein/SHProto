#pragma once
#include "CoreMinimal.h"
#include "ECollisionShapePropertyType.h"
#include "CollisionShapeProperty.generated.h"

USTRUCT(BlueprintType)
struct FCollisionShapeProperty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ECollisionShapePropertyType CollisionShapeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Parameter1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Parameter2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Parameter3;
    
    SHPROTO_API FCollisionShapeProperty();
};

