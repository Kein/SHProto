#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHFXMaterialModifierSubcompSettings.generated.h"

class USHMaterialPropertyControlSettings;

UCLASS(Abstract, BlueprintType)
class SHPROTO_API USHFXMaterialModifierSubcompSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseCustomMaterialIndexes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<int32> CustomMaterialIndexes;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USHMaterialPropertyControlSettings* MaterialPropertyControlSettings;
    
    USHFXMaterialModifierSubcompSettings();

};

