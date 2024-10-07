#pragma once
#include "CoreMinimal.h"
#include "SHEnemyBaseFXComponent.h"
#include "SHNurseFXComponent.generated.h"

class USHFXNurseHeadShakeSubcompSettings;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHNurseFXComponent : public USHEnemyBaseFXComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    USHFXNurseHeadShakeSubcompSettings* NurseHeadShakeSettings;
    
public:
    USHNurseFXComponent(const FObjectInitializer& ObjectInitializer);

};

