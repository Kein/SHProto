#pragma once
#include "CoreMinimal.h"
#include "SHAnimFootIKSubcompSettings.h"
#include "SHEnemyAnimComponent.h"
#include "SHMannequinAnimComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHMannequinAnimComponent : public USHEnemyAnimComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHAnimFootIKSubcompSettings SHAnimFootIKSubcompSettings;
    
public:
    USHMannequinAnimComponent(const FObjectInitializer& ObjectInitializer);

};

