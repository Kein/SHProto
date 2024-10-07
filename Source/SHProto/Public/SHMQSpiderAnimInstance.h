#pragma once
#include "CoreMinimal.h"
#include "SHMonsterAnimInstance.h"
#include "SHMQSpiderAnimInstance.generated.h"

class USHMQSpiderAnimInstanceStateData;

UCLASS(NonTransient)
class SHPROTO_API USHMQSpiderAnimInstance : public USHMonsterAnimInstance {
    GENERATED_BODY()
public:
    USHMQSpiderAnimInstance();

    UFUNCTION(BlueprintImplementableEvent)
    void OnChangeSurfaceAnimationEnd();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnChangeSurfaceAnimationBegin();
    
    UFUNCTION(BlueprintPure)
    USHMQSpiderAnimInstanceStateData* GetMQSpiderAnimInstanceStateData() const;
    
};

