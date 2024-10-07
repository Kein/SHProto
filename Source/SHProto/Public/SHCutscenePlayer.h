#pragma once
#include "CoreMinimal.h"
#include "CutscenePlayer.h"
#include "EffectHandle.h"
#include "SHCutscenePlayer.generated.h"

class UCapsuleComponent;

UCLASS()
class SHPROTO_API ASHCutscenePlayer : public ACutscenePlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UCapsuleComponent* TeleportTarget;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UCapsuleComponent* MariaTeleportTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bHideMariaDuringCutscene: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 bTeleportMariaAfterCutscene: 1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bResetAggressiveEnemiesOnActivate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bResetCameraToDefaultRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float AfterCutsceneLightingBlendTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DynamicResolutionMinScreenPercentage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle LightEffect;
    
public:
    ASHCutscenePlayer(const FObjectInitializer& ObjectInitializer);

};

