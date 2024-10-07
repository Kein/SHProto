#pragma once
#include "CoreMinimal.h"
#include "SettingOptionVisualizationData.h"
#include "EInteractionIconSize.h"
#include "EInteractionIconVisibility.h"
#include "TraversalIconData.generated.h"

USTRUCT(BlueprintType)
struct FTraversalIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    EInteractionIconVisibility Visibility;
    
    UPROPERTY(BlueprintReadOnly)
    EInteractionIconSize Size;
    
    UPROPERTY(BlueprintReadOnly)
    float ScaleMultiplier;
    
    UPROPERTY(BlueprintReadOnly)
    FSettingOptionVisualizationData VisualizationData;
    
    UPROPERTY(BlueprintReadOnly)
    FSettingOptionVisualizationData SizeData;
    
    SHPROTO_API FTraversalIconData();
};

