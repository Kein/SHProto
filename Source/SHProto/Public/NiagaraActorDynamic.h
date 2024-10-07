#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "NiagaraActorDynamic.generated.h"

class UNiagaraDynamicComponent;

UCLASS(MinimalAPI)
class ANiagaraActorDynamic : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraDynamicComponent* NiagaraComponent;
    
public:
    ANiagaraActorDynamic(const FObjectInitializer& ObjectInitializer);

};

