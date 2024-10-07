#pragma once
#include "CoreMinimal.h"
#include "SHFXSubcomponent.h"
#include "SHFXSkitteringBloodTraceSubcomp.generated.h"

class UMaiHealth;
class UNiagaraComponent;
class USHEnemyLyingComponent;
class USHFXSkitteringBloodTraceSubcompSettings;

UCLASS(EditInlineNew)
class SHPROTO_API USHFXSkitteringBloodTraceSubcomp : public USHFXSubcomponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHFXSkitteringBloodTraceSubcompSettings* Settings;
    
    UPROPERTY(Instanced, Transient)
    UNiagaraComponent* BloodTraceNS;
    
    UPROPERTY(Instanced, Transient)
    USHEnemyLyingComponent* OwnerLyingComponent;
    
    UPROPERTY(Instanced, Transient)
    UMaiHealth* OwnerHealthComponent;
    
public:
    USHFXSkitteringBloodTraceSubcomp();

};

