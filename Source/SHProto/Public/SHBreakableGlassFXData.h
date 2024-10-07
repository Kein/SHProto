#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SHBreakableGlassSizeAudioData.h"
#include "SHBreakableGlassFXData.generated.h"

class UAkAudioEvent;
class UNiagaraSystem;

UCLASS(BlueprintType)
class SHPROTO_API USHBreakableGlassFXData : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* DefaultAkEventToPlayAtHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHBreakableGlassSizeAudioData> GlassSizeAudioConfig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UNiagaraSystem* NiagaraSystemToPlayAtHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName NiagaraHitSystemDirectionParamName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName NiagaraHitSystemLocationParamName;
    
    USHBreakableGlassFXData();

};

