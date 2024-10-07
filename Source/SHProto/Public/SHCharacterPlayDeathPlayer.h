#pragma once
#include "CoreMinimal.h"
#include "SHDeathPlayer.h"
#include "SHCharacterPlayDeathPlayer.generated.h"

class UBoxComponent;
class UCapsuleComponent;
class UStaticMeshComponent;

UCLASS(Abstract)
class ASHCharacterPlayDeathPlayer : public ASHDeathPlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* FullAreaWork;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UCapsuleComponent* CharacterPlaySpot;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* CharacterPlayPreviewStandMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* CharacterPlayPreviewLayDownMesh;
    
public:
    ASHCharacterPlayDeathPlayer(const FObjectInitializer& ObjectInitializer);

};

