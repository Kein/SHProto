#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GlobalPropertyHandleBool.h"
#include "GlobalPropertyHandleFloat.h"
#include "GlobalPropertyHandleInt.h"
#include "GlobalPropertiesEventsComponent.generated.h"

class UGlobalPropertiesEventsComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class GLOBALPROPERTIES_API UGlobalPropertiesEventsComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FIntValueChanged, UGlobalPropertiesEventsComponent*, Events, const FGlobalPropertyHandleInt&, Property, int32, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FFloatValueChanged, UGlobalPropertiesEventsComponent*, Events, const FGlobalPropertyHandleFloat&, Property, float, Value);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FBoolValueChanged, UGlobalPropertiesEventsComponent*, Events, const FGlobalPropertyHandleBool&, Property, bool, Value);
    
protected:
    UPROPERTY(BlueprintAssignable)
    FBoolValueChanged OnValueChangedBool;
    
    UPROPERTY(BlueprintAssignable)
    FIntValueChanged OnValueChangedInt;
    
    UPROPERTY(BlueprintAssignable)
    FFloatValueChanged OnValueChangedFloat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGlobalPropertyHandleBool> ObservedBools;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGlobalPropertyHandleInt> ObservedInts;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FGlobalPropertyHandleFloat> ObservedFloats;
    
public:
    UGlobalPropertiesEventsComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void SetObservedInts(const TArray<FGlobalPropertyHandleInt>& NewInts);
    
    UFUNCTION(BlueprintCallable)
    void SetObservedFloats(const TArray<FGlobalPropertyHandleFloat>& NewFloats);
    
    UFUNCTION(BlueprintCallable)
    void SetObservedBools(const TArray<FGlobalPropertyHandleBool>& NewBools);
    
    UFUNCTION(BlueprintCallable)
    void AddObservedInts(const TArray<FGlobalPropertyHandleInt>& NewInts);
    
    UFUNCTION(BlueprintCallable)
    void AddObservedFloats(const TArray<FGlobalPropertyHandleFloat>& NewFloats);
    
    UFUNCTION(BlueprintCallable)
    void AddObservedBools(const TArray<FGlobalPropertyHandleBool>& NewBools);
    
};

