#pragma once
#include "CoreMinimal.h"
#include "SHAnimFootIKSubcompSettings.h"
#include "SHEnemyAnimComponent.h"
#include "SHNurseAnimComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHNurseAnimComponent : public USHEnemyAnimComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHAnimFootIKSubcompSettings SHAnimFootIKSubcompSettings;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<int32> HeadShakeMaterialsIndexes;
    
public:
    USHNurseAnimComponent(const FObjectInitializer& ObjectInitializer);

};

