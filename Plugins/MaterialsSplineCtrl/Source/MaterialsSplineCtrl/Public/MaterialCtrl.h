#pragma once
#include "CoreMinimal.h"
#include "MaterialCtrl.generated.h"

class UMaterialInstanceDynamic;
class UMaterialInterface;

USTRUCT(BlueprintType)
struct FMaterialCtrl {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* Material;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    UMaterialInstanceDynamic* DynamicMaterial;
    
    UPROPERTY(Transient)
    UMaterialInterface* PreviousMaterial;
    
    UPROPERTY(Transient)
    UMaterialInterface* ReplacementMaterial;
    
    MATERIALSSPLINECTRL_API FMaterialCtrl();
};

