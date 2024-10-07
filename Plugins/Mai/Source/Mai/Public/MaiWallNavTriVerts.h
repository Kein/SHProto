#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaiWallNavTriVerts.generated.h"

USTRUCT()
struct MAI_API FMaiWallNavTriVerts {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector _Points[3];
    
    UPROPERTY()
    FVector _Normal;
    
    FMaiWallNavTriVerts();
};

