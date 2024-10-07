#pragma once
#include "CoreMinimal.h"
#include "MaiWallNavConnection.h"
#include "MaiWallPointBorder.generated.h"

USTRUCT()
struct MAI_API FMaiWallPointBorder : public FMaiWallNavConnection {
    GENERATED_BODY()
public:
    UPROPERTY()
    int16 _SourcePointIdx;
    
    FMaiWallPointBorder();
};

