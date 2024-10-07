#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FootstepTerrainTextures.generated.h"

class UPhysicalMaterial;
class UTexture2D;

USTRUCT(BlueprintType)
struct BEING_API FFootstepTerrainTextures : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture2D> Texture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UPhysicalMaterial* Material;
    
    FFootstepTerrainTextures();
};

