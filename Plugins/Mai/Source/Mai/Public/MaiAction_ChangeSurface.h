#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "MaiAction_PlayAnimation.h"
#include "Templates/SubclassOf.h"
#include "MaiAction_ChangeSurface.generated.h"

class UMaiAction_ChangeSurface;
class UObject;

UCLASS(EditInlineNew)
class MAI_API UMaiAction_ChangeSurface : public UMaiAction_PlayAnimation {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(VisibleInstanceOnly)
    FTransform _TargetTransform;
    
public:
    UMaiAction_ChangeSurface();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMaiAction_ChangeSurface* createActionChangeSurface(UObject* WorldContextObject, FGameplayTagContainer animTags, FTransform targetTransform, TSubclassOf<UMaiAction_ChangeSurface> ActionClass, float PlayRate);
    
};

