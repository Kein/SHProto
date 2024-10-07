#pragma once
#include "CoreMinimal.h"
#include "MaiFlyingConnection.generated.h"

class AMaiFlyingPoint;

USTRUCT(BlueprintType)
struct MAI_API FMaiFlyingConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    AMaiFlyingPoint* _Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float _Dist;
    
    FMaiFlyingConnection();
};

