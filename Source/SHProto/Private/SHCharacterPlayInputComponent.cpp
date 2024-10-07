#include "SHCharacterPlayInputComponent.h"
#include "BInputAction.h"
#include "BInputAxis.h"
#include "BInputMovement.h"
#include "BInputRotation.h"

USHCharacterPlayInputComponent::USHCharacterPlayInputComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MainMenu = CreateDefaultSubobject<UBInputAction>(TEXT("MainMenu"));
    this->Cancel = CreateDefaultSubobject<UBInputAction>(TEXT("Cancel"));
    this->Movement = CreateDefaultSubobject<UBInputMovement>(TEXT("Movement"));
    this->Rotation = CreateDefaultSubobject<UBInputRotation>(TEXT("Rotation"));
    this->Crouch = CreateDefaultSubobject<UBInputAction>(TEXT("Crouch"));
    this->Sprint = CreateDefaultSubobject<UBInputAction>(TEXT("Sprint"));
    this->Interact = CreateDefaultSubobject<UBInputAction>(TEXT("Interact"));
    this->FlashlightToggle = CreateDefaultSubobject<UBInputAction>(TEXT("FlashlightToggle"));
    this->InvestigationMovement = CreateDefaultSubobject<UBInputMovement>(TEXT("InvestigationMovement"));
    this->InvestigationRotation = CreateDefaultSubobject<UBInputRotation>(TEXT("InvestigationRotation"));
    this->InvestigationFlip = CreateDefaultSubobject<UBInputAction>(TEXT("InvestigationFlip"));
    this->InvestigationZoom = CreateDefaultSubobject<UBInputAction>(TEXT("InvestigationZoom"));
    this->InvestigationTranscript = CreateDefaultSubobject<UBInputAction>(TEXT("InvestigationTranscript"));
    this->InvestigationPreviousItem = CreateDefaultSubobject<UBInputAction>(TEXT("InvestigationPreviousItem"));
    this->InvestigationNextItem = CreateDefaultSubobject<UBInputAction>(TEXT("InvestigationNextItem"));
    this->InventoryToggle = CreateDefaultSubobject<UBInputAction>(TEXT("InventoryToggle"));
    this->MapToggle = CreateDefaultSubobject<UBInputAction>(TEXT("MapToggle"));
    this->InventoryMapHold = CreateDefaultSubobject<UBInputAction>(TEXT("InventoryMapHold"));
    this->MeleeAttack = CreateDefaultSubobject<UBInputAction>(TEXT("MeleeAttack"));
    this->RangedAim = CreateDefaultSubobject<UBInputAction>(TEXT("RangedAim"));
    this->SwitchFocus = CreateDefaultSubobject<UBInputAxis>(TEXT("SwitchFocus"));
    this->Fire = CreateDefaultSubobject<UBInputAction>(TEXT("Fire"));
    this->Reload = CreateDefaultSubobject<UBInputAction>(TEXT("Reload"));
    this->Dodge = CreateDefaultSubobject<UBInputAction>(TEXT("Dodge"));
    this->Struggling = CreateDefaultSubobject<UBInputAction>(TEXT("Struggling"));
    this->QuickTurn = CreateDefaultSubobject<UBInputAction>(TEXT("QuickTurn"));
    this->ActionHealing = CreateDefaultSubobject<UBInputAction>(TEXT("ActionHealing"));
    this->WeaponChangeRangedPrevious = CreateDefaultSubobject<UBInputAction>(TEXT("WeaponChangeRangedPrevious"));
    this->WeaponChangeRangedNext = CreateDefaultSubobject<UBInputAction>(TEXT("WeaponChangeRangedNext"));
    this->WeaponChangePistol = CreateDefaultSubobject<UBInputAction>(TEXT("WeaponChangePistol"));
    this->WeaponChangeShotgun = CreateDefaultSubobject<UBInputAction>(TEXT("WeaponChangeShotgun"));
    this->WeaponChangeRifle = CreateDefaultSubobject<UBInputAction>(TEXT("WeaponChangeRifle"));
    this->BoatForward = CreateDefaultSubobject<UBInputAction>(TEXT("BoatForward"));
    this->BoatLeft = CreateDefaultSubobject<UBInputAction>(TEXT("BoatLeft"));
    this->BoatRight = CreateDefaultSubobject<UBInputAction>(TEXT("BoatRight"));
}


