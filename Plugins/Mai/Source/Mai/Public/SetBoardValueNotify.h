#pragma once
#include "CoreMinimal.h"
#include "DaiContext.h"
#include "DaiNotify.h"
#include "MaiBlackboardValue.h"
#include "SetBoardValueNotify.generated.h"

UCLASS(EditInlineNew)
class MAI_API USetBoardValueNotify : public UDaiNotify {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FDaiContext _Notified;
    
    UPROPERTY(EditAnywhere)
    FMaiBlackboardValue _BoardValue;
    
    USetBoardValueNotify();

};

