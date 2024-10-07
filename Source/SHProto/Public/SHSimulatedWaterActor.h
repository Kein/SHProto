#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ESimulatedWaterEffectType.h"
#include "SHSimulatedWaterActor.generated.h"

class ACharacter;
class UMaterialInstanceDynamic;
class UMaterialInterface;
class UNiagaraComponent;
class UStaticMeshComponent;

UCLASS(MinimalAPI)
class ASHSimulatedWaterActor : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UNiagaraComponent* NiagaraComponent;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UStaticMeshComponent* WaterPlaneMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WaterPlaneSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UMaterialInterface* WaterMaterialTemplate;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    int32 EffectFixedSize;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* _DynamicMaterial;
    
public:
    ASHSimulatedWaterActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetWaterSimulationEnabled(bool IsEnable);
    
    UFUNCTION(BlueprintPure)
    float GetWaterWorldAltitude() const;
    
    UFUNCTION(BlueprintPure)
    bool GetWaterSimulationEnabled() const;
    
    UFUNCTION(BlueprintPure)
    float GetWaterDepthByLocation(const FVector& InLocation) const;
    
    UFUNCTION(BlueprintPure)
    float GetWaterDepthByCharacter(const ACharacter* InCharacter) const;
    
    UFUNCTION(BlueprintPure)
    UMaterialInstanceDynamic* GetDynamicInstanceMaterial() const;
    
    UFUNCTION(BlueprintCallable)
    bool AddEffect(const ESimulatedWaterEffectType InType, const FVector& InPosition, const float InRadius, const FVector& InVeclocity);
    
};

