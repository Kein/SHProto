#pragma once
#include "CoreMinimal.h"
#include "ESHFleshLipAnimInstanceTransformationState.h"
#include "SHEnemyAnimComponent.h"
#include "SHFleshLipAnimComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHFleshLipAnimComponent : public USHEnemyAnimComponent {
    GENERATED_BODY()
public:
    USHFleshLipAnimComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFleshLipTransformationState(ESHFleshLipAnimInstanceTransformationState InFleshLipTransformation, bool InIsTransforming);
    
    UFUNCTION(BlueprintCallable)
    void SetFleshLipRightArmIsReleased(bool InIsReleased);
    
    UFUNCTION(BlueprintCallable)
    void SetFleshLipLegsAreReleased(bool InAreReleased);
    
    UFUNCTION(BlueprintCallable)
    void SetFleshLipLeftArmIsReleased(bool InIsReleased);
    
};

