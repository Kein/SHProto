#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FootIKData.h"
#include "SHAnimFootIKSubcompSettings.h"
#include "SHAnimSubcomponentBase.h"
#include "SHAnimFootIKSubcomp.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHAnimFootIKSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    FVector PelvisOffset;
    
    UPROPERTY(EditDefaultsOnly)
    FSHAnimFootIKSubcompSettings Settings;
    
    USHAnimFootIKSubcomp();

    UFUNCTION(Exec)
    void SHDebug_Shared_Anim_FootIK_PelvisOffsetInterpSpeed(float interpSpeed);
    
    UFUNCTION(Exec)
    void SHDebug_Shared_Anim_FootIK_Enabled(bool Enabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPelvisIKEnabled(bool NewIsEnable, float PelvisInterpSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetIKEnabled(bool NewIsEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetFootIKEnabled(bool bEnable, int32 Index, float interpSpeed);
    
    UFUNCTION(BlueprintCallable)
    void SetFeetRotationOffsetEnabled(bool NewIsEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetFeetAllIKEnabled(bool bEnable, float interpSpeed);
    
    UFUNCTION(BlueprintCallable)
    void ResetIK();
    
    UFUNCTION(BlueprintPure)
    bool GetIsIKEnabled() const;
    
    UFUNCTION(BlueprintPure)
    FFootIKData GetFootIK(int32 Index) const;
    
};

