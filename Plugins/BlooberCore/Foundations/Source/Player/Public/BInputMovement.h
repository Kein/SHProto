#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BInputSource.h"
#include "BInputMovement.generated.h"

class UBInputAxis;

UCLASS(BlueprintType)
class PLAYER_API UBInputMovement : public UBInputSource {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Instanced, Transient)
    UBInputAxis* Forward;
    
    UPROPERTY(Instanced, Transient)
    UBInputAxis* Right;
    
    UPROPERTY(Instanced, Transient)
    UBInputAxis* Up;
    
public:
    UBInputMovement();

    UFUNCTION(BlueprintCallable)
    void SetCurrentValue(FVector NextValue);
    
};

