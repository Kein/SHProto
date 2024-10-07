#include "BlooberNiagaraAkAudioPlayer.h"

UBlooberNiagaraAkAudioPlayer::UBlooberNiagaraAkAudioPlayer() {
    this->SoundToPlay = NULL;
    this->bLimitPlaysPerTick = true;
    this->MaxPlaysPerTick = 10;
    this->bStopWhenComponentIsDestroyed = true;
    this->bAllowLoopingOneShotSounds = false;
}


FNiagaraDataInterfaceParametersCS* UBlooberNiagaraAkAudioPlayer::CreateShaderStorage(const FNiagaraDataInterfaceGPUParamInfo& ParameterInfo, const FShaderParameterMap& ParameterMap) const
{
	return NULL;
}


void UBlooberNiagaraAkAudioPlayer::BindParameters(struct FNiagaraDataInterfaceParametersCS *,struct FNiagaraDataInterfaceGPUParamInfo const &,class FShaderParameterMap const &)
{
}


void UBlooberNiagaraAkAudioPlayer::UnsetParameters(struct FNiagaraDataInterfaceParametersCS const *,class FRHICommandList &,struct FNiagaraDataInterfaceSetArgs const &) const
{
}

void UBlooberNiagaraAkAudioPlayer::BuildShaderParameters(class FNiagaraShaderParametersBuilder&) const
{
}


struct FNiagaraDataInterfaceParametersCS* UBlooberNiagaraAkAudioPlayer::CreateComputeParameters() const
{
	return NULL;
}


void UBlooberNiagaraAkAudioPlayer::SetParameters(struct FNiagaraDataInterfaceParametersCS const *,class FRHICommandList &,struct FNiagaraDataInterfaceSetArgs const &) const
{
}

struct FTypeLayoutDesc const * UBlooberNiagaraAkAudioPlayer::GetComputeParametersTypeDesc() const
{
	return NULL;
}


FTypeLayoutDesc* UBlooberNiagaraAkAudioPlayer::GetShaderStorageType() const
{
	return NULL;
}

bool UBlooberNiagaraAkAudioPlayer::HasInternalAttributeReads(class UNiagaraEmitter const *, class UNiagaraEmitter const *) const
{
	return false;
}

bool UBlooberNiagaraAkAudioPlayer::UseLegacyShaderBindings() const
{
	return false;
}

