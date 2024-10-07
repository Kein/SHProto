#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHEnemyAnimComponent.h"
#include "SHAbstractDaddyAnimComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAbstractDaddyAnimComponent : public USHEnemyAnimComponent {
    GENERATED_BODY()
public:
    USHAbstractDaddyAnimComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetBrakingPoint(FVector Location, int32 areaFlags);
    
};

