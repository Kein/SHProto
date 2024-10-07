#pragma once
#include "CoreMinimal.h"
#include "DaiFloatModifier.h"
#include "DaiFloatModifier2.generated.h"

class AActor;

UCLASS(EditInlineNew)
class DAI_API UDaiFloatModifier2 : public UDaiFloatModifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient, VisibleAnywhere)
    AActor* _Other;
    
public:
    UDaiFloatModifier2();

    UFUNCTION(BlueprintPure)
    AActor* GetOther() const;
    
};

