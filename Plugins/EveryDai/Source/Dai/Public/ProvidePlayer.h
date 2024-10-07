#pragma once
#include "CoreMinimal.h"
#include "DaiContextGetter.h"
#include "ProvidePlayer.generated.h"

UCLASS(EditInlineNew)
class DAI_API UProvidePlayer : public UDaiContextGetter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    int32 _Index;
    
public:
    UProvidePlayer();

};

