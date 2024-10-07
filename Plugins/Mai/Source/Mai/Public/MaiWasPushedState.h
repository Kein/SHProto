#pragma once
#include "CoreMinimal.h"
#include "MaiState.h"
#include "MaiWasPushedState.generated.h"

class APawn;

UCLASS(EditInlineNew)
class MAI_API UMaiWasPushedState : public UMaiState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    bool _CanBePushed;
    
    UPROPERTY(BlueprintReadWrite)
    APawn* _Other;
    
    UPROPERTY(EditAnywhere)
    FName _BBAwayFocus;
    
    UMaiWasPushedState();

    UFUNCTION(BlueprintPure)
    bool IsBlockedByOther() const;
    
};

