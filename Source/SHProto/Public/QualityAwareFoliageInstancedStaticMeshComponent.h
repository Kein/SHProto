#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ELightSignificanceLevel -FallbackName=ELightSignificanceLevel
#include "LightSignificanceLevel.h"
#include "FoliageInstancedStaticMeshComponent.h"
#include "QualityAwareFoliageInstancedStaticMeshComponent.generated.h"

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API UQualityAwareFoliageInstancedStaticMeshComponent : public UFoliageInstancedStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    ELightSignificanceLevel ShadowsSignificance;
    
    UQualityAwareFoliageInstancedStaticMeshComponent(const FObjectInitializer& ObjectInitializer);

};

