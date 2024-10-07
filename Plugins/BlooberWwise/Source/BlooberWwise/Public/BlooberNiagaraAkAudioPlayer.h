#pragma once
#include "CoreMinimal.h"
#include "NiagaraDataInterface.h"
#include "BlooberNiagaraAkAudioPlayer.generated.h"

class UAkAudioEvent;

UCLASS(EditInlineNew)
class BLOOBERWWISE_API UBlooberNiagaraAkAudioPlayer : public UNiagaraDataInterface {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UAkAudioEvent* SoundToPlay;
    
    UPROPERTY(EditAnywhere)
    TArray<FString> StrParameterNames;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bLimitPlaysPerTick;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    int32 MaxPlaysPerTick;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bStopWhenComponentIsDestroyed;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bAllowLoopingOneShotSounds;
    
    UBlooberNiagaraAkAudioPlayer();

    virtual FNiagaraDataInterfaceParametersCS* CreateShaderStorage(const FNiagaraDataInterfaceGPUParamInfo& ParameterInfo, const FShaderParameterMap& ParameterMap) const;

    virtual void BindParameters(struct FNiagaraDataInterfaceParametersCS *,struct FNiagaraDataInterfaceGPUParamInfo const &,class FShaderParameterMap const &) override;
    virtual void SetParameters(struct FNiagaraDataInterfaceParametersCS const *,class FRHICommandList &,struct FNiagaraDataInterfaceSetArgs const &) const override;
    virtual void UnsetParameters(struct FNiagaraDataInterfaceParametersCS const *,class FRHICommandList &,struct FNiagaraDataInterfaceSetArgs const &) const override;
    virtual void BuildShaderParameters(class FNiagaraShaderParametersBuilder&) const override;
    virtual struct FTypeLayoutDesc const * GetComputeParametersTypeDesc() const override;
    virtual struct FNiagaraDataInterfaceParametersCS* CreateComputeParameters() const;

    virtual FTypeLayoutDesc* GetShaderStorageType() const override;

    virtual bool HasInternalAttributeReads(class UNiagaraEmitter const *,class UNiagaraEmitter const *) const override;
    virtual bool UseLegacyShaderBindings() const override;

};

