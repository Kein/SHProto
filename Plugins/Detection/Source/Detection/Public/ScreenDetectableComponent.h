#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "DetectableBaseComponent.h"
#include "EScreenDetectableCheckQuality.h"
#include "EScreenDetectableStatus.h"
#include "ScreenDetectableComponent.generated.h"

class UObject;
class UScreenDetectableComponent;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DETECTION_API UScreenDetectableComponent : public UDetectableBaseComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLost, UScreenDetectableComponent*, Detectable);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDetected, UScreenDetectableComponent*, Detectable);
    
protected:
    UPROPERTY(BlueprintAssignable)
    FDetected OnDetected;
    
    UPROPERTY(BlueprintAssignable)
    FLost OnLost;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EScreenDetectableCheckQuality Quality;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool UseTraces;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool LimitTraceRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D TraceRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool LimitTraceAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float TraceAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool StartEnabled;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool DrawDebug;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<FVector> RelativeCheckLocations;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    EScreenDetectableStatus CurrentStatus;
    
public:
    UScreenDetectableComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetDetectionEnabled(UObject* Object, const bool Enabled);
    
    UFUNCTION(BlueprintPure)
    bool IsDetectionEnabled() const;
    
    UFUNCTION(BlueprintPure)
    bool IsDetected() const;
    
    UFUNCTION(BlueprintPure)
    EScreenDetectableStatus GetCurrentStatus() const;
    
};

