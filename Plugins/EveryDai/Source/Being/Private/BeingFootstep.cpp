#include "BeingFootstep.h"
#include "Components/SceneComponent.h"

ABeingFootstep::ABeingFootstep(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
    this->_AllowPutFootstepWithoutSpawn = true;
    this->_DefaultFootstep = NULL;
    this->_ClothesSound = NULL;
    this->_MaxSoundLife = 2.50f;
    this->_SurfaceType = SurfaceType_Default;
    this->_SurfaceTypeAlter = SurfaceType_Default;
    this->_SurfaceTypeDecal = SurfaceType_Default;
    this->_Foot = EFoot::ANY;
    this->_Movement = ESoundMovement::WALK;
    this->_VerticalStance = EVerticalStance::ON_GROUND;
    this->_FallHeight = 0;
    this->_SoundAttachToComponent = NULL;
    this->_ShowEffect = true;
    this->_DecalInitialAlpha = 1.00f;
    this->_MovementSpeed = 0.00f;
    this->_StanceAINoiseMod = 1.00f;
    this->_VolumeMul = 1.00f;
    this->_OcclusionRefreshInterval = 0.20f;
    this->_OcclusionCollisionChannel = ECC_Camera;
    this->_DecalComponent = NULL;
    this->_EffectDecalMID = NULL;
}

void ABeingFootstep::StartEffect(const FFootstepEffect& effect) {
}

void ABeingFootstep::PutFootstep() {
}

float ABeingFootstep::GetFootstepAINoise() const {
    return 0.0f;
}


