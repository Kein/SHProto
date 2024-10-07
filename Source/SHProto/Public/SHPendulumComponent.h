#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Components/SceneComponent.h"
#include "SHPendulumComponent.generated.h"

UCLASS(BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHPendulumComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DragFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BeginPlayAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bClampAngles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D ClampAnglesValues;
    
    UPROPERTY(SaveGame)
    float AngleSaved;
    
    UPROPERTY(SaveGame)
    float ReceiverCurrentAngularVelocity;
    
public:
    USHPendulumComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetFreeze(const bool bInFreeze);
    
    UFUNCTION(BlueprintCallable)
    void AddAngularVelocity(const float InVelocity);
    
};

