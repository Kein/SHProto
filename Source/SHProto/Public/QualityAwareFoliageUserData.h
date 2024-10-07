#pragma once
#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ELightSignificanceLevel -FallbackName=ELightSignificanceLevel
#include "QualityAwareFoliageUserData.generated.h"

UCLASS(EditInlineNew)
class SHPROTO_API UQualityAwareFoliageUserData : public UAssetUserData {
    GENERATED_BODY()
public:
      
    UPROPERTY(EditAnywhere)
    ELightSignificanceLevel ShadowsSignificance;
    
    UQualityAwareFoliageUserData();

};

