#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHFXWaterInteractionSubcompSettings.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHFXWaterInteractionSubcompSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableWaterInteraction;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BoneRadiusModifier;
    
    USHFXWaterInteractionSubcompSettings();

};

