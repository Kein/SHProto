#pragma once
#include "CoreMinimal.h"
#include "SHDeathPlayer.h"
#include "SHMariaDeathPlayer.generated.h"

class UBoxComponent;
class UCapsuleComponent;
class UStaticMeshComponent;

UCLASS(Abstract)
class ASHMariaDeathPlayer : public ASHDeathPlayer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* FullAreaWork;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UCapsuleComponent* MariaSpot;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* MariaStartPreviewMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UStaticMeshComponent* MariaEndPreviewMesh;
    
public:
    ASHMariaDeathPlayer(const FObjectInitializer& ObjectInitializer);

};

