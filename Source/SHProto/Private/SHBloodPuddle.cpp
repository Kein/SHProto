#include "SHBloodPuddle.h"
#include "Components/DecalComponent.h"
#include "Components/SceneComponent.h"

ASHBloodPuddle::ASHBloodPuddle(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bSaveGame = true;
    // FIXME
    // this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("RootComponent"));
    // this->DecalPuddle = CreateDefaultSubobject<UDecalComponent>(TEXT("DecalPuddle"));
    // this->DecalPuddle->SetupAttachment(RootComponent);
    this->ErosionCurve = NULL;
    this->TimeToFillPuddle = 7.00f;
    this->VisibleFactorParameterName = TEXT("Opacity | Erosion | Step");
    this->FadeAwayTime = 30.00f;
    this->EnableAutoFadeAway = false;
    this->DelayToFadeAway = 30.00f;
    this->DestroyAfterFadeAway = true;
    this->DecalMaterialDynamic = NULL;
}




bool ASHBloodPuddle::IsFullyDeveloped() const {
    return false;
}

void ASHBloodPuddle::EnableFadeAway() {
}


