#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ESHAnimEndType.h"
#include "SHHitReactionStatesContext.generated.h"

class UAnimMontage;
class USHAnimComponent;
class USHAnimMontagePlayer;
class USHAsyncLoaderComponent;
class USHHitReactionSubcomponent;

UCLASS()
class USHHitReactionStatesContext : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    USHHitReactionSubcomponent* OwningHitReactionSubcomponent;
    
    UPROPERTY(Instanced)
    USHAnimComponent* OwningAnimComponent;
    
    UPROPERTY(Instanced)
    USHAsyncLoaderComponent* AssignedAsyncLoader;
    
    UPROPERTY()
    TArray<USHAnimMontagePlayer*> MontagePlayersPool;
    
    UPROPERTY()
    TArray<USHAnimMontagePlayer*> OccupiedMontagePlayersPool;
    
public:
    USHHitReactionStatesContext();

protected:
    UFUNCTION()
    void MontagePlayerAnimationStopped(UAnimMontage* InMontage, ESHAnimEndType InAnimEndType);
    
};

