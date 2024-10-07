#pragma once
#include "CoreMinimal.h"
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "AnimNotifyState_Blow.generated.h"

UCLASS(CollapseCategories, EditInlineNew, MinimalAPI)
class UAnimNotifyState_Blow : public UAnimNotifyState {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 _ImpactID;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> _ColliderTags;
    
public:
    UAnimNotifyState_Blow();

};

