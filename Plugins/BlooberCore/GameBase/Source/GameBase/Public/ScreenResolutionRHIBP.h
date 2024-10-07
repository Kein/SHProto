#pragma once
#include "CoreMinimal.h"
#include "ScreenResolutionRHIBP.generated.h"

USTRUCT(BlueprintType)
struct FScreenResolutionRHIBP {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Width;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RefreshRate;
    
    GAMEBASE_API FScreenResolutionRHIBP();
};

