#pragma once
#include "CoreMinimal.h"
#include "DaiContextGetter.h"
#include "DialogEntity.h"
#include "ProvideSpeaker.generated.h"

UCLASS(EditInlineNew)
class DIALOG_API UProvideSpeaker : public UDaiContextGetter {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    bool _DirectSet;
    
    UPROPERTY(EditAnywhere)
    FDialogEntity _Entity;
    
public:
    UProvideSpeaker();

};

