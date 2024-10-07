#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DaiCondition.h"
#include "DaiContext.h"
#include "DaiTarget.h"
#include "EDaiDistanceType.h"
#include "AreInSameLocation.generated.h"

UCLASS(EditInlineNew)
class DAI_API UAreInSameLocation : public UDaiCondition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EDaiDistanceType _GeometricDistanceType;
    
    UPROPERTY(EditAnywhere)
    FDaiContext _ObjectA;
    
    UPROPERTY(EditAnywhere)
    FDaiContext _ObjectB;
    
    UPROPERTY(EditAnywhere)
    float _MaxDistance;
    
    UPROPERTY(EditAnywhere)
    bool _IncludeOverlapA;
    
    UPROPERTY(EditAnywhere)
    bool _IncludeOverlapB;
    
    UPROPERTY()
    bool _Fixed2;
    
    UPROPERTY()
    FDaiTarget _TargetA;
    
    UPROPERTY()
    FDaiTarget _TargetB;
    
    UPROPERTY()
    bool _Fixed;
    
    UPROPERTY()
    FGameplayTag _FirstActorTag;
    
    UPROPERTY()
    FGameplayTag _SecondActorTag;
    
    UPROPERTY()
    bool _OverlapFirst;
    
    UPROPERTY()
    bool _OverlapSecond;
    
    UAreInSameLocation();

};

