#include "SHAnimCombatSubcomp.h"
#include "SHAnimMontagePlayer.h"

USHAnimCombatSubcomp::USHAnimCombatSubcomp() {
    this->ReciveHit = CreateDefaultSubobject<USHAnimMontagePlayer>(TEXT("ReciveHit"));
    this->WeaponShow = CreateDefaultSubobject<USHAnimMontagePlayer>(TEXT("WeaponShow"));
    this->WeaponHide = CreateDefaultSubobject<USHAnimMontagePlayer>(TEXT("WeaponHide"));
    this->WeaponChange = CreateDefaultSubobject<USHAnimMontagePlayer>(TEXT("WeaponChange"));
    this->Attack = CreateDefaultSubobject<USHAnimMontagePlayer>(TEXT("Attack"));
    this->RangedFire = CreateDefaultSubobject<USHAnimMontagePlayer>(TEXT("RangedFire"));
    this->RangedReload = CreateDefaultSubobject<USHAnimMontagePlayer>(TEXT("RangedReload"));
    this->Dodge = CreateDefaultSubobject<USHAnimMontagePlayer>(TEXT("Dodge"));
}


