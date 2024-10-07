#pragma once
#include "CoreMinimal.h"
#include "Components/InputComponent.h"
#include "SHCharacterPlayInputComponent.generated.h"

class UBInputAction;
class UBInputAxis;
class UBInputMovement;
class UBInputRotation;

UCLASS(NonTransient, ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class USHCharacterPlayInputComponent : public UInputComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Instanced)
    UBInputAction* MainMenu;
    
    UPROPERTY(Instanced)
    UBInputAction* Cancel;
    
    UPROPERTY(Instanced)
    UBInputMovement* Movement;
    
    UPROPERTY(Instanced)
    UBInputRotation* Rotation;
    
    UPROPERTY(Instanced)
    UBInputAction* Crouch;
    
    UPROPERTY(Instanced)
    UBInputAction* Sprint;
    
    UPROPERTY(Instanced)
    UBInputAction* Interact;
    
    UPROPERTY(Instanced)
    UBInputAction* FlashlightToggle;
    
    UPROPERTY(Instanced)
    UBInputMovement* InvestigationMovement;
    
    UPROPERTY(Instanced)
    UBInputRotation* InvestigationRotation;
    
    UPROPERTY(Instanced)
    UBInputAction* InvestigationFlip;
    
    UPROPERTY(Instanced)
    UBInputAction* InvestigationZoom;
    
    UPROPERTY(Instanced)
    UBInputAction* InvestigationTranscript;
    
    UPROPERTY(Instanced)
    UBInputAction* InvestigationPreviousItem;
    
    UPROPERTY(Instanced)
    UBInputAction* InvestigationNextItem;
    
    UPROPERTY(Instanced)
    UBInputAction* InventoryToggle;
    
    UPROPERTY(Instanced)
    UBInputAction* MapToggle;
    
    UPROPERTY(Instanced)
    UBInputAction* InventoryMapHold;
    
    UPROPERTY(Instanced)
    UBInputAction* MeleeAttack;
    
    UPROPERTY(Instanced)
    UBInputAction* RangedAim;
    
    UPROPERTY(Instanced)
    UBInputAxis* SwitchFocus;
    
    UPROPERTY(Instanced)
    UBInputAction* Fire;
    
    UPROPERTY(Instanced)
    UBInputAction* Reload;
    
    UPROPERTY(Instanced)
    UBInputAction* Dodge;
    
    UPROPERTY(Instanced)
    UBInputAction* Struggling;
    
    UPROPERTY(Instanced)
    UBInputAction* QuickTurn;
    
    UPROPERTY(Instanced)
    UBInputAction* ActionHealing;
    
    UPROPERTY(Instanced)
    UBInputAction* WeaponChangeRangedPrevious;
    
    UPROPERTY(Instanced)
    UBInputAction* WeaponChangeRangedNext;
    
    UPROPERTY(Instanced)
    UBInputAction* WeaponChangePistol;
    
    UPROPERTY(Instanced)
    UBInputAction* WeaponChangeShotgun;
    
    UPROPERTY(Instanced)
    UBInputAction* WeaponChangeRifle;
    
    UPROPERTY(Instanced)
    UBInputAction* BoatForward;
    
    UPROPERTY(Instanced)
    UBInputAction* BoatLeft;
    
    UPROPERTY(Instanced)
    UBInputAction* BoatRight;
    
public:
    USHCharacterPlayInputComponent(const FObjectInitializer& ObjectInitializer);

};

