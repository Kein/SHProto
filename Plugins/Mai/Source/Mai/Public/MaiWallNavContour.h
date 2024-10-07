#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaiWallNavBorder.h"
#include "MaiWallNavContour.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiWallNavContour : public FMaiWallNavBorder {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector _Start;
    
    UPROPERTY()
    FVector _End;
    
    UPROPERTY()
    int8 _Region;
    
    UPROPERTY()
    int8 _Surface;
    
    FMaiWallNavContour();
};

