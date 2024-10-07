#pragma once
#include "CoreMinimal.h"
#include "SHEnemyBaseFXComponent.h"
#include "SHLyingFigureFXComponent.generated.h"

class USHFXSkitteringBloodTraceSubcompSettings;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHLyingFigureFXComponent : public USHEnemyBaseFXComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXSkitteringBloodTraceSubcompSettings* SkitteringBloodTraceSettings;
    
public:
    USHLyingFigureFXComponent(const FObjectInitializer& ObjectInitializer);

};

