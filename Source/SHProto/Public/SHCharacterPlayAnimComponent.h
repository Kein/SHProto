#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SHAnimComponent.h"
#include "SHAnimEnviroHitReactionsSubcompSettings.h"
#include "SHAnimFootIKSubcompSettings.h"
#include "SHAnimHeadRotationSubcompSettings.h"
#include "SHAnimMovementSubcompSettings.h"
#include "SHCharacterPlayAnimComponent.generated.h"

class ASHCharacterPlay;
class UPhysicalAnimationProfileDA;

UCLASS(ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayAnimComponent : public USHAnimComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UPhysicalAnimationProfileDA* PhysicalAnimationProfilesDA;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHAnimHeadRotationSubcompSettings SHAnimHeadRotationSubcompSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHAnimFootIKSubcompSettings SHAnimFootIKSubcompSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHAnimEnviroHitReactionsSubcompSettings SHAnimEnviroHitReactionsSubcompSettings;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHAnimMovementSubcompSettings SHAnimMovementSubcompSettings;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
public:
    USHCharacterPlayAnimComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_Character_Animation_DrawDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_AimOffset_Enabled(bool Enabled);
    
    UFUNCTION(BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetHealthStateAsMontageBlendspaceInput() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetCurrentRotationSpeed() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetAimRotation() const;
    
    UFUNCTION(BlueprintPure)
    bool ForceTposeDebug() const;
    
};

