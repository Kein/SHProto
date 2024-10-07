#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "SHBreakableWallActor.generated.h"

class UAkAudioEvent;
class UBoxComponent;
class USHAkDynamicTickComponent;
class USHAkPortalOpenableComponent;
class USHBreakableMeshComponent;
class USHSecondaryTargetComponent;
class USceneComponent;

UCLASS(Abstract)
class SHPROTO_API ASHBreakableWallActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHBreakableMeshComponent* BreakableMeshMainComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHSecondaryTargetComponent* SecondaryTargetFrontComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHSecondaryTargetComponent* SecondaryTargetBackComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHAkDynamicTickComponent* AkSoundComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    UBoxComponent* PortalBoundsBoxComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHAkPortalOpenableComponent* AkPortalOpenableComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USceneComponent* VisualMeshesPivotComponent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle LastHitSecondaryAttackDataRowHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* BreakStepAudioEvent;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* LastBreakAudioEvent;
    
public:
    ASHBreakableWallActor(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION()
    void ProcessBreakableMeshMainComponentBreakEvent(USHBreakableMeshComponent* InComponentPtr);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsBroken() const;
    
};

