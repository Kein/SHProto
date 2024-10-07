#pragma once
#include "CoreMinimal.h"
#include "SHAnimSubcomponentBase.h"
#include "SHMariaFlashlightReactionAnimSubcompSettings.h"
#include "SHMariaFlashlightReactionAnimSubcomp.generated.h"

class UObject;

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHMariaFlashlightReactionAnimSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    FSHMariaFlashlightReactionAnimSubcompSettings Settings;
    
protected:
    UPROPERTY(BlueprintReadOnly)
    float EyesCoverAlpha;
    
public:
    USHMariaFlashlightReactionAnimSubcomp();

    UFUNCTION(BlueprintPure)
    float GetEyesCoverAlpha() const;
    
    UFUNCTION(BlueprintCallable)
    void BlockFlashlightReactions(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    void BlockAndInterruptFlashlightReactions(const UObject* Object);
    
};

