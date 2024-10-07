#include "MaiDecoy.h"
#include "BeingVisibilityLevelStat.h"
#include "MaiLightEmitter.h"
#include "MaiNoiseEmitter.h"

AMaiDecoy::AMaiDecoy(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->_LightEmitter = CreateDefaultSubobject<UMaiLightEmitter>(TEXT("LightEmitter"));
    this->_NoiseEmitter = CreateDefaultSubobject<UMaiNoiseEmitter>(TEXT("NoiseEmitter"));
    this->_VisibilityLevel = CreateDefaultSubobject<UBeingVisibilityLevelStat>(TEXT("VisibilityLevel"));
    this->_Hearable = true;
    this->_Visible = true;
    this->_Smelly = true;
    this->_NoiseEnabled = false;
    this->_VisibilityEnabled = false;
    this->_OdorEnabled = false;
    this->_LightEmitter->SetupAttachment(RootComponent);
    this->_NoiseEmitter->SetupAttachment(RootComponent);
}


