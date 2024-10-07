#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHFXSkitteringBloodTraceSubcompSettings.generated.h"

class UNiagaraSystem;

UCLASS(BlueprintType)
class SHPROTO_API USHFXSkitteringBloodTraceSubcompSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool EnableSkitteringBloodTrace;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 BloodTraceShowBelowHP;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* SkitteringBloodTraceTemplate;
    
    USHFXSkitteringBloodTraceSubcompSettings();

};

