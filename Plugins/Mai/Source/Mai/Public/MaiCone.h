#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "MaiCone.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiCone {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVector _Origin;
    
    UPROPERTY(BlueprintReadWrite)
    FVector _Direction;
    
    UPROPERTY(BlueprintReadWrite)
    float _Angle;
    
    UPROPERTY(BlueprintReadWrite)
    float _Length;
    
    UPROPERTY(BlueprintReadWrite)
    FRotator _Rotation;
    
    FMaiCone();
};

