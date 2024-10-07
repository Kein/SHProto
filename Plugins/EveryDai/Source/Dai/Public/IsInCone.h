#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DaiCondition.h"
#include "DaiContext.h"
#include "IsInCone.generated.h"

UCLASS(EditInlineNew)
class DAI_API UIsInCone : public UDaiCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDaiContext _Observer;
    
    UPROPERTY(EditAnywhere)
    FDaiContext _Observed;
    
    UPROPERTY()
    bool _Fixed;
    
    UPROPERTY()
    FGameplayTag _ObserverTag;
    
    UPROPERTY()
    FGameplayTag _ObservedTag;
    
    UPROPERTY(EditAnywhere)
    float _ConeHalfAngle;
    
    UIsInCone();

};

