#pragma once
#include "CoreMinimal.h"
#include "DaiContext.h"
#include "DaiNotify.h"
#include "ENotifyTagOperation.h"
#include "GameplayTagContainer.h"
#include "ChangeGameplayTagNotify.generated.h"

UCLASS(EditInlineNew)
class MAI_API UChangeGameplayTagNotify : public UDaiNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDaiContext _Notified;
    
    UPROPERTY(EditAnywhere)
    FGameplayTag _Tag;
    
    UPROPERTY(EditAnywhere)
    ENotifyTagOperation _Operation;
    
    UChangeGameplayTagNotify();

};

