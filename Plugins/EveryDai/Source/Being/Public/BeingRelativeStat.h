#pragma once
#include "CoreMinimal.h"
#include "BeingStat.h"
#include "BeingRelativeStat.generated.h"

class AActor;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingRelativeStat : public UBeingStat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(VisibleAnywhere)
    bool _RelativeStat;
    
    UPROPERTY(VisibleAnywhere)
    TWeakObjectPtr<AActor> _Other;
    
public:
    UBeingRelativeStat(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetRelativeStat(AActor* Other, bool stat);
    
    UFUNCTION(BlueprintPure)
    bool GetRelativeStat(AActor* Other) const;
    
    UFUNCTION(BlueprintPure)
    AActor* GetOther() const;
    
};

