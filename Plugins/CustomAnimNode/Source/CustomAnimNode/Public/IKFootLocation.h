#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "IKFootLocation.generated.h"

USTRUCT()
struct FIKFootLocation {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector LimbRootLocation = {0,0,0};
    
    UPROPERTY(EditAnywhere)
    FVector OriginLocation = {0,0,0};
    
    UPROPERTY(EditAnywhere)
    FVector ActualLocation = {0,0,0};
    
    UPROPERTY(EditAnywhere)
    FVector NewLocation = {0,0,0};
    
    //CUSTOMANIMNODE_API FIKFootLocation();
};

