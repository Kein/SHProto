#pragma once
#include "CoreMinimal.h"
#include "ESHFXDirtState.h"
#include "SHFXMaterialModifierSubcomp.h"
#include "SHMaterialPropertyDirtSet.h"
#include "SHFXDirtLayerSubcomp.generated.h"

UCLASS(EditInlineNew)
class SHPROTO_API USHFXDirtLayerSubcomp : public USHFXMaterialModifierSubcomp {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    float _DirtBlendLayerValue;
    
    UPROPERTY(SaveGame)
    TArray<FSHMaterialPropertyDirtSet> MaterialPropertyDirtSets;
    
public:
    USHFXDirtLayerSubcomp();

    UFUNCTION(BlueprintCallable)
    bool SetDirtState(int32 DirtSetIndex, ESHFXDirtState InDirtState);
    
    UFUNCTION(BlueprintCallable)
    void SetDirtBlendLayerValue(float InDirtValue);
    
    UFUNCTION(BlueprintCallable)
    bool PreloadDirtState(int32 DirtSetIndex, ESHFXDirtState InDirtState);
    
    UFUNCTION(BlueprintPure)
    void GetDirtStateMaterialStats(int32 DirtSetIndex, int32& OutOverridedTextureParameterCount, int32& OutOverridedScalarParameterCount) const;
    
    UFUNCTION(BlueprintPure)
    FString GetDirtStateMaterialName(int32 DirtSetIndex) const;
    
    UFUNCTION(BlueprintPure)
    ESHFXDirtState GetDirtState(int32 DirtSetIndex) const;
    
    UFUNCTION(BlueprintPure)
    int32 GetDirtSetCount() const;
    
    UFUNCTION(BlueprintPure)
    float GetDirtBlendLayerValue() const;
    
    UFUNCTION(BlueprintPure)
    bool CheckDynamicMaterialValid(int32 DirtSetIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeDirtBlendLayerAmount(float DeltaValue);
    
};

