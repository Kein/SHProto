#pragma once
#include "CoreMinimal.h"
#include "DaiContext.h"
#include "GameplayTagContainer.h"
#include "FlowAction.h"
#include "PlayAnimationFA.generated.h"

class UAnimSequenceBase;

UCLASS(EditInlineNew)
class UPlayAnimationFA : public UFlowAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDaiContext _Performer;
    
    UPROPERTY(EditAnywhere)
    bool _SelectAnimByTag;
    
    UPROPERTY()
    UAnimSequenceBase* _Animation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<UAnimSequenceBase> _SoftAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FGameplayTagContainer _AnimTags;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _ComponentTag;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _Slot;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _BlendInTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _BlendOutTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _LoopCount;
    
    UPlayAnimationFA();

};

