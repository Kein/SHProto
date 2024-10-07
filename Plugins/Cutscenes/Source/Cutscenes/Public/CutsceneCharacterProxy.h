#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/EngineTypes.h"
#include "CutsceneCharacterProxy.generated.h"

class UCapsuleComponent;

UCLASS(Abstract)
class CUTSCENES_API ACutsceneCharacterProxy : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLightingChannels MeshLightingChannels;
    
private:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CapsuleComponent;
    
public:
    ACutsceneCharacterProxy(const FObjectInitializer& ObjectInitializer);

};

