#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotify.h"
#include "AnimNotify_ExtMovementMarker.generated.h"

UCLASS(CollapseCategories, MinimalAPI)
class UAnimNotify_ExtMovementMarker : public UAnimNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 _Number;
    
public:
    UAnimNotify_ExtMovementMarker();

};

