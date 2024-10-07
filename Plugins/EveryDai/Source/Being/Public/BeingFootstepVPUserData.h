#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/AssetUserData.h"
#include "EVPDataEvaluatorType.h"
#include "EVPDataSourceChannel.h"
#include "BeingFootstepVPUserData.generated.h"

class UPhysicalMaterial;

UCLASS(BlueprintType, EditInlineNew)
class BEING_API UBeingFootstepVPUserData : public UAssetUserData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EVPDataEvaluatorType Evaluator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool SingleChannelMask;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UsePuddles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float ContrastBoost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HeightSensitivity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor HeightAvg;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EVPDataSourceChannel SourceChannel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicalMaterial* Channel0;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicalMaterial* Channel1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicalMaterial* Channel2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicalMaterial* Channel3;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UPhysicalMaterial* Puddles;
    
    UBeingFootstepVPUserData();

};

