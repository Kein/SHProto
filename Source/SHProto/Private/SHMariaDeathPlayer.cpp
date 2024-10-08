#include "SHMariaDeathPlayer.h"
#include "Components/BoxComponent.h"
#include "Components/CapsuleComponent.h"

ASHMariaDeathPlayer::ASHMariaDeathPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	//FIXME
    this->FullAreaWork = CreateDefaultSubobject<UBoxComponent>(TEXT("FullAreaWork"));
    this->MariaSpot = CreateDefaultSubobject<UCapsuleComponent>(TEXT("MariaSpot"));
    this->FullAreaWork->SetupAttachment(RootComponent);
    this->MariaSpot->SetupAttachment(RootComponent);
    this->MariaStartPreviewMesh = NULL;
    this->MariaEndPreviewMesh = NULL;
}


