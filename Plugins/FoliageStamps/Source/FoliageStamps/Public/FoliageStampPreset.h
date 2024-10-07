#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "FoliageItemInfo.h"
#include "FoliageStampPreset.generated.h"

USTRUCT(BlueprintType)
struct FFoliageStampPreset : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString BrushUniqueName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector Extent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool AllowRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FFoliageItemInfo> Foliages;
    
    FOLIAGESTAMPS_API FFoliageStampPreset();
};

