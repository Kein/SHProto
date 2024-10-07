#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Engine/HitResult.h"
#include "SHRotateableComponent.generated.h"

class AActor;
class UPlaneSideDetectionComponent;
class UStaticMeshComponent;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHRotateableComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float MomentumDecreaser;
    
    UPROPERTY(EditAnywhere)
    float MomentumLimit;
    
    UPROPERTY(EditAnywhere)
    float ReceivedMoementumForceMod;
    
    UPROPERTY(EditAnywhere)
    float HitThrottle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bDebug;
    
protected:
    UPROPERTY(Instanced, Transient)
    UStaticMeshComponent* RotateableMesh;
    
    UPROPERTY(Instanced, Transient)
    UPlaneSideDetectionComponent* PlaneSideDetectionComponent;
    
public:
    USHRotateableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void RegisterComponents(UStaticMeshComponent* InRotateableMeshComponent, UPlaneSideDetectionComponent* InSHPlaneSideDetectionComponent);
    
protected:
    UFUNCTION()
    void OnActorHitApplyRotate(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    
};

