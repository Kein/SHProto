#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "SHItemExeFlashlightManagerComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USHItemExeFlashlightManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bHideFlashlightMesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float InvestigationFlashlightIntensity;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector FlashlightRelLocOverride;
    
public:
    USHItemExeFlashlightManagerComponent(const FObjectInitializer& ObjectInitializer);

};

