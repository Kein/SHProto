#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHAnimSubcomponentBase.h"
#include "WholeBodyTranslation.h"
#include "SHAnimWholeBodyTranslationSubcomp.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHAnimWholeBodyTranslationSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite)
    FWholeBodyTranslation AdditionalTranslationTarget;
    
    UPROPERTY(BlueprintReadWrite)
    FWholeBodyTranslation AdditionalTranslation;
    
    UPROPERTY(BlueprintReadWrite)
    float AdditionalTranslationAlphaTarget;
    
    UPROPERTY(BlueprintReadWrite)
    float AdditionalTranslationAlpha;
    
public:
    USHAnimWholeBodyTranslationSubcomp();

    UFUNCTION(BlueprintCallable)
    void SetAdditionalTranslation(FWholeBodyTranslation InAdditionalRotationTarget);
    
    UFUNCTION(BlueprintCallable)
    void SetAdditionalRotation(FRotator NewRotation);
    
    UFUNCTION(BlueprintCallable)
    void ResetAdditionalTranslation();
    
    UFUNCTION(BlueprintCallable)
    FWholeBodyTranslation CheckOnGroundAdditionalRotation();
    
};

