#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "BeingSteeringData.generated.h"

USTRUCT(BlueprintType)
struct BEING_API FBeingSteeringData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _IsCrouching;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _IsFollowingAPath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _IsMoving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _IsSliding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _StartTurn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _RequestedVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector _DesiredVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator _Rotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator _ControlLocalRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator _LocalRotation;
    
    FBeingSteeringData();
};

