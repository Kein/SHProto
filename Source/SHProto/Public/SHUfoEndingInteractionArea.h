#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESHUfoEndingInteraction.h"
#include "SHUfoEndingInteractionArea.generated.h"

class UObject;

UCLASS(Abstract)
class SHPROTO_API ASHUfoEndingInteractionArea : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHUfoEndingInteraction InteractionContext;
    
public:
    ASHUfoEndingInteractionArea(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEnabled(const UObject* Enabler, bool InEnabled);
    
    UFUNCTION(BlueprintCallable)
    bool IsCompleted();
    
};

