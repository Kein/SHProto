#pragma once
#include "CoreMinimal.h"
#include "ESHEddieAnimInstanceMovementState.h"
#include "SHAnimFootIKSubcompSettings.h"
#include "SHAnimHeadRotationBaseSubcompSettings.h"
#include "SHEnemyAnimComponent.h"
#include "SHEddieAnimComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHEddieAnimComponent : public USHEnemyAnimComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHAnimHeadRotationBaseSubcompSettings HeadRotationSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHAnimFootIKSubcompSettings SHAnimFootIKSubcompSettings;
    
public:
    USHEddieAnimComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEddieMovementState(ESHEddieAnimInstanceMovementState InMovementState, bool InMovementChangeInProgress);
    
};

