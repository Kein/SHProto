#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "SHPlayerCameraManager.h"
#include "SHPlayerCameraManagerPlay.generated.h"

UCLASS(NonTransient)
class SHPROTO_API ASHPlayerCameraManagerPlay : public ASHPlayerCameraManager {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TEnumAsByte<ECollisionChannel> ProbeChannel;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ProbeSize;
    
public:
    ASHPlayerCameraManagerPlay(const FObjectInitializer& ObjectInitializer);

};

