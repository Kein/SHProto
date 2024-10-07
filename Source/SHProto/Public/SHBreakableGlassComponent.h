#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "Components/StaticMeshComponent.h"
#include "EffectHandle.h"
#include "SHMeleeAttackSecondaryTargetInterface.h"
#include "SHBreakableGlassComponent.generated.h"

class AController;
class USHBreakableGlassComponent;
class USHBreakableGlassFXData;
class USHBrokenGlassShardsContainerComponent;

UCLASS(EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHBreakableGlassComponent : public UStaticMeshComponent, public ISHMeleeAttackSecondaryTargetInterface {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSHBreakableGlassEvent, USHBreakableGlassComponent*, Component);
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bBrokenOnBeginPlay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector GlassPlaneLocalDirection;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector GlassPlaneOffset;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseCustomFXData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSoftObjectPtr<USHBreakableGlassFXData> CustomFXData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bRegisterAsMeleeAttackSecondaryTarget;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAllowedHeightDelta;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxAllowedDistanceToHitPoint2D;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bIsDirectionalOneSideOnly;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MinRequiredDirectionsDotProduct;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FDataTableRowHandle SecondaryAttackDataRowHandle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D PointToHitBorderDeadZone;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseCustomGlassPlaneLocalDirectionsWhitelist;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FVector> CustomGlassPlaneLocalDirectionsWhitelist;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FEffectHandle LightEffect;
    
    UPROPERTY(BlueprintAssignable)
    FSHBreakableGlassEvent OnBreakEvent;
    
    UPROPERTY(Instanced, Transient)
    USHBrokenGlassShardsContainerComponent* BrokenShardsContainer;
    
public:
    USHBreakableGlassComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsBroken() const;
    
    UFUNCTION(BlueprintCallable)
    void FakeBreak(AController* EventInstigator, const FVector& InHitDir);
    

    // Fix for true pure virtual functions not being implemented
};

