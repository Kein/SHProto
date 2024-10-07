#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DaiContext.h"
#include "DaiNotify.h"
#include "ENotifyTagOperation.h"
#include "ChangeTagNotify.generated.h"

UCLASS(EditInlineNew)
class DAI_API UChangeTagNotify : public UDaiNotify {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    bool _Fixed;
    
    UPROPERTY()
    FGameplayTag _ActorTag;
    
    UPROPERTY(EditAnywhere)
    FDaiContext _Notified;
    
    UPROPERTY(EditAnywhere)
    FName _Tag;
    
    UPROPERTY(EditAnywhere)
    ENotifyTagOperation _Operation;
    
public:
    UChangeTagNotify();

};

