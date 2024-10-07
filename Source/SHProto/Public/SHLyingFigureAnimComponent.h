#pragma once
#include "CoreMinimal.h"
#include "SHAnimFootIKSubcompSettings.h"
#include "SHEnemyAnimComponent.h"
#include "SHLyingFigureAnimComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHLyingFigureAnimComponent : public USHEnemyAnimComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHAnimFootIKSubcompSettings SHAnimFootIKSubcompSettings;
    
public:
    USHLyingFigureAnimComponent(const FObjectInitializer& ObjectInitializer);

};

