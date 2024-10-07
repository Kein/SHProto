#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Templates/SubclassOf.h"
#include "SHAnimNotify_PlayCharacterCameraShake.generated.h"

class UCameraShakeBase;

UCLASS(CollapseCategories)
class SHPROTO_API USHAnimNotify_PlayCharacterCameraShake : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCameraShakeBase> Shake;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ShakeScale;
    
    USHAnimNotify_PlayCharacterCameraShake();

};

