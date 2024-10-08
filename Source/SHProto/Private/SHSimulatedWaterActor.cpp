#include "SHSimulatedWaterActor.h"
#include "Components/StaticMeshComponent.h"
#include "NiagaraComponent.h"

ASHSimulatedWaterActor::ASHSimulatedWaterActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    // FIXME
    this->RootComponent = CreateDefaultSubobject<UNiagaraComponent>(TEXT("WaterSimulationNiagara"));
    this->WaterPlaneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("WaterPlaneMesh"));
    this->NiagaraComponent->SetupAttachment(RootComponent);
    this->WaterPlaneMesh->SetupAttachment(RootComponent);
    this->WaterPlaneSize = 2000.00f;
    this->WaterMaterialTemplate = NULL;
    this->EffectFixedSize = 50;
    this->_DynamicMaterial = NULL;
}

void ASHSimulatedWaterActor::SetWaterSimulationEnabled(bool IsEnable) {
}

float ASHSimulatedWaterActor::GetWaterWorldAltitude() const {
    return 0.0f;
}

bool ASHSimulatedWaterActor::GetWaterSimulationEnabled() const {
    return false;
}

float ASHSimulatedWaterActor::GetWaterDepthByLocation(const FVector& InLocation) const {
    return 0.0f;
}

float ASHSimulatedWaterActor::GetWaterDepthByCharacter(const ACharacter* InCharacter) const {
    return 0.0f;
}

UMaterialInstanceDynamic* ASHSimulatedWaterActor::GetDynamicInstanceMaterial() const {
    return NULL;
}

bool ASHSimulatedWaterActor::AddEffect(const ESimulatedWaterEffectType InType, const FVector& InPosition, const float InRadius, const FVector& InVeclocity) {
    return false;
}


