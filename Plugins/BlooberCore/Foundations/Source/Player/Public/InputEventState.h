#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "InputEventState.generated.h"

UCLASS(BlueprintType)
class PLAYER_API UInputEventState : public UObject {
    GENERATED_BODY()
public:
    UInputEventState();

    UFUNCTION(BlueprintPure)
    bool IsConsumed() const;
    
    UFUNCTION(BlueprintPure)
    UObject* GetConsumer() const;
    
    UFUNCTION(BlueprintCallable)
    bool Consume(UObject* NewConsumer);
    
};

