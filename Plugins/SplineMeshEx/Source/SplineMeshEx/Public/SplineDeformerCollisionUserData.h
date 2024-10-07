#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "Engine/EngineTypes.h"
#include "SplineDeformerCollisionUserData.generated.h"

UCLASS(EditInlineNew)
class SPLINEMESHEX_API USplineDeformerCollisionUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionEnabled::Type> CollisionEnabled;
    
    UPROPERTY(EditAnywhere)
    FName CollisionProfileName;
    
    USplineDeformerCollisionUserData();

};

