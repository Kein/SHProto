#pragma once
#include "CoreMinimal.h"
#include "MaiNodeRef.h"
#include "MaiNodeConnection.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiNodeConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    FMaiNodeRef _Target;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float _Dist;
    
    FMaiNodeConnection();
};

