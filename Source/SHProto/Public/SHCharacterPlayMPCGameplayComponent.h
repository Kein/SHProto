#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "SHCharacterPlayMPCGameplayComponent.generated.h"

class UMaterialParameterCollection;

UCLASS(BlueprintType, ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHCharacterPlayMPCGameplayComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialParameterCollection* AssetMPC;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FName FlashlightAlphaMPCParamName;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    FName LerpItemEmissiveMPCParamName;
    
public:
    USHCharacterPlayMPCGameplayComponent(const FObjectInitializer& ObjectInitializer);

};

