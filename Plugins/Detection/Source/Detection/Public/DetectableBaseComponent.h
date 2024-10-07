#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "EDetectableShapeDiscoveryMethod.h"
#include "EDetectableShapeDiscoveryScope.h"
#include "DetectableBaseComponent.generated.h"

class UBoxComponent;
class UCapsuleComponent;
class UShapeComponent;
class USphereComponent;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DETECTION_API UDetectableBaseComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, Instanced)
    UShapeComponent* Shape;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    EDetectableShapeDiscoveryMethod DiscoveryMethod;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    EDetectableShapeDiscoveryScope DiscoveryScope;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FName DiscoveryShapeName;
    
    UPROPERTY(Instanced)
    UShapeComponent* SelectedShape;
    
public:
    UDetectableBaseComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool HasShape() const;
    
    UFUNCTION(BlueprintPure)
    USphereComponent* GetShapeAsSphere();
    
    UFUNCTION(BlueprintPure)
    UCapsuleComponent* GetShapeAsCapsule();
    
    UFUNCTION(BlueprintPure)
    UBoxComponent* GetShapeAsBox();
    
    UFUNCTION(BlueprintPure)
    UShapeComponent* GetShape();
    
    UFUNCTION(BlueprintPure)
    bool ContainsPoint(const FVector WorldLocation) const;
    
    UFUNCTION(BlueprintCallable)
    void BindShape(UShapeComponent* NewShape);
    
};

