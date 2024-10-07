#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Styling/SlateTypes.h"
#include "BVolumeControlStyle.generated.h"

USTRUCT(BlueprintType)
struct UCW_API FBVolumeControlStyle : public FVolumeControlStyle {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FLinearColor NormalColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor HoverColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor ActiveColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor DisabledColor;
    
    FBVolumeControlStyle();
};

