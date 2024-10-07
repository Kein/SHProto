#include "SHCharacterPlayDeathPlayer.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"

ASHCharacterPlayDeathPlayer::ASHCharacterPlayDeathPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->FullAreaWork = CreateDefaultSubobject<UBoxComponent>(TEXT("FullAreaWork"));
    this->CharacterPlaySpot = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CharacterPlaySpot"));
    this->CharacterPlayPreviewStandMesh = NULL;
    this->CharacterPlayPreviewLayDownMesh = NULL;
    this->CharacterPlaySpot->SetupAttachment(RootComponent);
    this->FullAreaWork->SetupAttachment(RootComponent);
}


