#pragma once
#include "CoreMinimal.h"
#include "PlayAnimationData.h"
#include "SHCameraAnimationData.h"
#include "SHCharacterPlayDeathPlayer.h"
#include "SHCharacterPlayGenericDeathPlayer.generated.h"

UCLASS(Abstract, NotPlaceable)
class ASHCharacterPlayGenericDeathPlayer : public ASHCharacterPlayDeathPlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FPlayAnimationData CharacterAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSHCameraAnimationData CameraAnimation;
    
public:
    ASHCharacterPlayGenericDeathPlayer(const FObjectInitializer& ObjectInitializer);

};

