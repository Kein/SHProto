#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "Components/SceneComponent.h"
#include "Chaos/ChaosEngineInterface.h"
#include "FootstepLoudness.h"
#include "OnFootstepDelegate.h"
#include "OnWadingFootprintDelegate.h"
#include "Templates/SubclassOf.h"
#include "BeingFootstepTracer.generated.h"

class AActor;
class ABeingFootstep;
class UDataTable;
class UFXSystemComponent;
class UMaterialInterface;
class UPhysicalMaterial;

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeingFootstepTracer : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<ECollisionChannel> _TraceChannel;
    
    UPROPERTY(EditAnywhere)
    bool _TraceComplex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _TraceFindInitialOverlaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 _TraceIgnoreMask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<AActor*> _TraceIgnoreActors;
    
    UPROPERTY(EditAnywhere)
    float _TraceRadius;
    
    UPROPERTY(EditAnywhere)
    float _TraceUpLength;
    
    UPROPERTY(EditAnywhere)
    float _TraceDownLength;
    
    UPROPERTY(EditAnywhere)
    TSoftClassPtr<ABeingFootstep> _FootstepClass;
    
    UPROPERTY(Transient, VisibleAnywhere)
    TSubclassOf<ABeingFootstep> _FootstepClassInstance;
    
    UPROPERTY()
    TSubclassOf<ABeingFootstep> _FootstepsTemplate;
    
    UPROPERTY(EditAnywhere)
    FName _FootSockets[4];
    
    UPROPERTY(EditAnywhere)
    float _MinStepPeriod;
    
    UPROPERTY(EditAnywhere)
    bool _SingleEffect;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    bool _IgnoreNextFalling;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _TraceFoliage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<TEnumAsByte<EPhysicalSurface>, int32> _FootstepRepeatableOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _MuteFootstep;
    
    UPROPERTY(EditAnywhere)
    FFootstepLoudness _FootstepLoudness[3];
    
    UPROPERTY(EditAnywhere)
    float _TurnLoudnessMod;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TEnumAsByte<EPhysicalSurface> _LastFootSurface[5];
    
    UPROPERTY(BlueprintAssignable)
    FOnFootstep _OnFootstep;
    
    UPROPERTY(BlueprintAssignable)
    FOnWadingFootprint _OnWadingFootprint;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* _MaskMaterial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UMaterialInterface* _TrailsMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _FootstepDrawTrails;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _FootstepQuadSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _TrailQuadSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _TrailQuadWidth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _FootstepQuadYScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D _FootstepDirectionalOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D _FootstepLocationOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _FootstepAngleOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _TrailsTiling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _TrailsAngleOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _FootstepCanvasDensity;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _FootstepHeightLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _FootstepLifeTime;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _FootstepsLimit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 _TrailsLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _DrawFootstepsMask;
    
private:
    UPROPERTY(Transient)
    bool _WadingSoundLoopEnabled;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    TEnumAsByte<EPhysicalSurface> _LastWadingSurface;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    float _LastWadingDepth;
    
    UPROPERTY(Transient)
    ABeingFootstep* _LastWadingFootstep;
    
    UPROPERTY(Instanced, Transient)
    UFXSystemComponent* _WadingParticle;
    
    UPROPERTY(Transient)
    ABeingFootstep* _WadingParticleCaller;
    
    UPROPERTY(Transient)
    float _WadingParticleTimer;
    
    UPROPERTY(Transient)
    bool _TerrainTexturesMapInitialized;
    
    UPROPERTY(Transient)
    UDataTable* _TerrainTexturesMap;
    
    UPROPERTY(Transient)
    TMap<uint64, UPhysicalMaterial*> _TerrainTextureCache;
    
    UPROPERTY(Transient)
    FDateTime _WadingTimestamp;
    
public:
    UBeingFootstepTracer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsOnSurface(TEnumAsByte<EPhysicalSurface> Surface) const;
    
    UFUNCTION(BlueprintPure)
    TEnumAsByte<EPhysicalSurface> GetWadingSurface() const;
    
    UFUNCTION(BlueprintPure)
    float GetWadingDepth() const;
    
};

