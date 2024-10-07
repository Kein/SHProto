#pragma once
#include "CoreMinimal.h"
#include "MaiShapeDrawer.h"
#include "MaiSenseDebugger.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiSenseDebugger : public UMaiShapeDrawer {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float _DefaultThickness;
    
    UMaiSenseDebugger(const FObjectInitializer& ObjectInitializer);

};

