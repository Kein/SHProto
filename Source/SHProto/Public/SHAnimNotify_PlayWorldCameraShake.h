#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "Templates/SubclassOf.h"
#include "SHAnimNotify_PlayWorldCameraShake.generated.h"

class UCameraShakeBase;

UCLASS(CollapseCategories)
class SHPROTO_API USHAnimNotify_PlayWorldCameraShake : public UAnimNotify {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCameraShakeBase> Shake;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName EpicenterSocket;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float InnerRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OuterRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Falloff;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bOrientShakeTowardsEpicenter;
    
    USHAnimNotify_PlayWorldCameraShake();

};

