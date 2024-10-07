#pragma once
#include "CoreMinimal.h"
#include "SHAnimComponent.h"
#include "SHAnimFootIKSubcompSettings.h"
#include "SHAnimHeadRotationBaseSubcompSettings.h"
#include "SHMariaFlashlightReactionAnimSubcompSettings.h"
#include "Templates/SubclassOf.h"
#include "SHMariaAnimComponent.generated.h"

class USHNPCLocomotionAnimInstance;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHMariaAnimComponent : public USHAnimComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHAnimFootIKSubcompSettings SHAnimFootIKSubcompSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHAnimHeadRotationBaseSubcompSettings HeadRotationSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHMariaFlashlightReactionAnimSubcompSettings FlashlightReactionSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USHNPCLocomotionAnimInstance> DefaultLocomotionAnimInstClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USHNPCLocomotionAnimInstance> InjuredLocomotionAnimInstClass;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<USHNPCLocomotionAnimInstance> InDangerLocomotionAnimInstClass;
    
public:
    USHMariaAnimComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RefreshAnimGraphs();
    
};

