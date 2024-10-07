#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "MaiLightRay.h"
#include "MaiLightRaySegment.h"
#include "MaiLightStateChangeDelegate.h"
#include "MaiLightingStateDelegate.h"
#include "MaiLightEmitter.generated.h"

class AActor;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiLightEmitter : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    bool _Enabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _AutoRegister;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool _CastLightRays;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    uint8 _RayCount;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _Angle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _Range;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _RayRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _PointRange;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    float _YawPeriod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    uint8 _FirstValidRay;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    uint8 _NextRay;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleAnywhere)
    TArray<FMaiLightRay> _RayList;
    
    UPROPERTY(EditInstanceOnly)
    TSoftObjectPtr<AActor> _Observer;
    
    UPROPERTY(EditInstanceOnly)
    float _AIHalfAngle;
    
    UPROPERTY(EditInstanceOnly)
    float _AIRange;
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    TMap<int32, FMaiLightRaySegment> _ValidRaySegments;
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    TArray<FVector> _PointList;
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    TArray<FVector> _IgnoredPointList;
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    TArray<FVector> _RayPointList;
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    TArray<FVector> _SightPointList;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> _TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> _TraceIgnoreActors;
    
    UPROPERTY(BlueprintAssignable)
    FMaiLightStateChange LightEmitterChange;
    
    UPROPERTY(BlueprintAssignable)
    FMaiLightingState LightingState;
    
    UMaiLightEmitter(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void TurnOffLight();
    
    UFUNCTION()
    void TestLight();
    
    UFUNCTION(BlueprintCallable)
    void SetRange(float Range);
    
    UFUNCTION(BlueprintCallable)
    void SetAngle(float Angle);
    
    UFUNCTION(BlueprintCallable)
    void LightLight();
    
    UFUNCTION(BlueprintPure)
    bool IsInLight(FVector Location, float Radius, float hheight, FRotator Rotation);
    
};

