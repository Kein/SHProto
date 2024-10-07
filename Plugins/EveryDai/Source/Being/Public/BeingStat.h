#pragma once
#include "CoreMinimal.h"
#include "DaiFloatModifiers1.h"
#include "DaiFloatModifiers2.h"
#include "DaiUpdatableParam.h"
#include "Components/ActorComponent.h"
#include "Templates/SubclassOf.h"
#include "BeingStat.generated.h"

class UDaiFloatModifier;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingStat : public UActorComponent, public IDaiUpdatableParam {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    bool _IsUpToDate;
    
    UPROPERTY(EditAnywhere)
    FDaiFloatModifiers1 _Mods;
    
    UPROPERTY(EditAnywhere)
    FDaiFloatModifiers2 _PersonalizedMods;
    
    UBeingStat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintNativeEvent)
    void Update();
    
    UFUNCTION(BlueprintCallable)
    void SetUpToDate();
    
    UFUNCTION(BlueprintCallable)
    void NeedsUpdateModifier(TSubclassOf<UDaiFloatModifier> modclass, FName Name);
    
    UFUNCTION(BlueprintCallable)
    void NeedsUpdate();
    
    UFUNCTION(BlueprintPure)
    bool IsUpToDate() const;
    
    UFUNCTION(BlueprintCallable)
    void ForceUpdate();
    
    UFUNCTION(BlueprintPure)
    UDaiFloatModifier* FindFloatModifier(TSubclassOf<UDaiFloatModifier> modclass, FName Name) const;
    

    // Fix for true pure virtual functions not being implemented
};

