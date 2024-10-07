#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BeingFootsIKComponent.h"
#include "FootData.h"
#include "Being4FootsIKComponent.generated.h"

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class BEING_API UBeing4FootsIKComponent : public UBeingFootsIKComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    bool _OnlyDropIK;
    
    UPROPERTY(EditAnywhere)
    FName _FootsSockets[4];
    
    UPROPERTY(EditAnywhere)
    FName _FootsFixedSockets[4];
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    float _ChestOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    float _HipOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    FVector _FloorNormal;
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    FFootData _FootsData[4];
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    float _FootDropDists[4];
    
    UPROPERTY(EditAnywhere)
    float _Lenght;
    
    UPROPERTY(EditAnywhere)
    float _MaxPitch;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, VisibleInstanceOnly)
    float _MeshPitch;
    
    UBeing4FootsIKComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool IsOnSlope(float toleranceAngle) const;
    
    UFUNCTION(BlueprintPure)
    FFootData GetRightFrontFoot() const;
    
    UFUNCTION(BlueprintPure)
    FFootData GetRightBackFoot() const;
    
    UFUNCTION(BlueprintPure)
    FFootData GetLeftFrontFoot() const;
    
    UFUNCTION(BlueprintPure)
    FFootData GetLeftBackFoot() const;
    
};

