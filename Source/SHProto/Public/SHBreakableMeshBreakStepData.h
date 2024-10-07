#pragma once
#include "CoreMinimal.h"
#include "SHBreakableMeshBreakStepData.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHBreakableMeshBreakStepData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHideWeaponHitDecal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRemoveAttachedFXSystems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<TSoftObjectPtr<UStaticMesh>> Meshes;
    
    FSHBreakableMeshBreakStepData();
};

