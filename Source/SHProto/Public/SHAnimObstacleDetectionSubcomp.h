#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "SHAnimSubcomponentBase.h"
#include "SHAnimObstacleDetectionSubcomp.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHAnimObstacleDetectionSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    float WallHandTimeSinceLast;
    
    UPROPERTY()
    bool WallHandRightHandLast;
    
    UPROPERTY()
    FVector WallHandLastActorLocation;
    
    UPROPERTY()
    FVector WallHandLastWallNormal;
    
    UPROPERTY()
    FVector WallHandLastWallDirection;
    
    UPROPERTY()
    bool bWallFaceSide;
    
    UPROPERTY()
    float WallHandDistanceLast;
    
    UPROPERTY(BlueprintReadOnly)
    FVector WallHandRightLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator WallHandRightRotation;
    
    UPROPERTY(BlueprintReadOnly)
    float WallHandRightAlpha;
    
    UPROPERTY()
    FVector WallHandRightLocationTarget;
    
    UPROPERTY(BlueprintReadOnly)
    FVector WallHandLeftLocation;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator WallHandLeftRotation;
    
    UPROPERTY(BlueprintReadOnly)
    float WallHandLeftAlpha;
    
    UPROPERTY()
    FVector WallHandLeftLocationTarget;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator WallSpineRotation;
    
    UPROPERTY(BlueprintReadOnly)
    float WallSpineRotationAlpha;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator WallSpineImpulseRotation;
    
    UPROPERTY(BlueprintReadOnly)
    float WallSpineImpulseAlpha;
    
    UPROPERTY()
    float WallSpineImpulseTimeMax;
    
    UPROPERTY()
    float WallSpineImpulseTime;
    
    UPROPERTY(BlueprintReadOnly)
    FRotator WallSpineRotationFromCorner;
    
    UPROPERTY(BlueprintReadOnly)
    float WallSpineRotationFromCornerAlpha;
    
    UPROPERTY()
    float WallRotationFromCornerEndTimer;
    
    UPROPERTY(BlueprintReadOnly)
    float WallAvoidHandLeft;
    
    UPROPERTY(BlueprintReadOnly)
    float WallAvoidHandRight;
    
    USHAnimObstacleDetectionSubcomp();

};

