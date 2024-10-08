#include "SHCharacterPlayDeathPlayer.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"

ASHCharacterPlayDeathPlayer::ASHCharacterPlayDeathPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // FIXME
    // this->FullAreaWork = CreateDefaultSubobject<UBoxComponent>(TEXT("FullAreaWork"));
    // this->CharacterPlaySpot = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CharacterPlaySpot"));
    // this->CharacterPlaySpot->SetupAttachment(RootComponent);
    // this->FullAreaWork->SetupAttachment(RootComponent);
    this->CharacterPlayPreviewStandMesh = NULL;
    this->CharacterPlayPreviewLayDownMesh = NULL;
}


