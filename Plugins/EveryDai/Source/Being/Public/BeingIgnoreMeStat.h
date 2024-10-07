#pragma once
#include "CoreMinimal.h"
#include "DaiBlockade.h"
#include "BeingStat.h"
#include "BeingIgnoreMeStat.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingIgnoreMeStat : public UBeingStat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    bool _IgnoreMe;
    
    UPROPERTY(Transient, VisibleAnywhere)
    bool _IsDead;
    
    UPROPERTY(EditAnywhere)
    bool _AlwaysMissMe;
    
    UPROPERTY(EditAnywhere)
    FDaiBlockade _IgnoreMeReasons;
    
public:
    UBeingIgnoreMeStat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetIsDead(bool IsDead);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreMeReason(FName Reason);
    
    UFUNCTION(BlueprintCallable)
    void SetAlwaysMissMe(bool missMe);
    
    UFUNCTION(BlueprintPure)
    bool GetIsDead() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIgnoreMe() const;
    
    UFUNCTION(BlueprintPure)
    bool GetAlwaysMissMe() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearIgnoreMeReason(FName Reason);
    
};

