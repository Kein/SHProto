#pragma once
#include "CoreMinimal.h"
#include "SHCustomPrimitiveDataHelper.h"
#include "SHItemEmissiveDataHelper.generated.h"

class UObject;
class UPrimitiveComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHItemEmissiveDataHelper : public USHCustomPrimitiveDataHelper {
    GENERATED_BODY()
public:
    USHItemEmissiveDataHelper(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetEmmisive(UPrimitiveComponent* InComp, bool bShouldEmmisiveBeEnabled);
    
    UFUNCTION(BlueprintCallable)
    void OverrideDisabledValue(UObject* Requester, float InValue);
    
    UFUNCTION(BlueprintCallable)
    void InterpEmmisive(UPrimitiveComponent* InComp, bool bShouldEmmisiveBeEnabled);
    
    UFUNCTION(BlueprintPure)
    float GetValue(bool bShouldEmmisiveBeEnabled) const;
    
};

