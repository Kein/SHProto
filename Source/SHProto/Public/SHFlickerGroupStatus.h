#pragma once
#include "CoreMinimal.h"
#include "ESHFlickerGroupState.h"
#include "SHFlickerGroupStatus.generated.h"

USTRUCT(BlueprintType)
struct FSHFlickerGroupStatus {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FName Name;
    
    UPROPERTY()
    int32 GroupId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHFlickerGroupState State;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Multiplier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool TriggersOnOffSound;
    
    SHPROTO_API FSHFlickerGroupStatus();
};

