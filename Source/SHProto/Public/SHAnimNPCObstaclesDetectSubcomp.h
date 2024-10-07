#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHAnimSubcomponentBase.h"
#include "SHObstacleDetectMovementData.h"
#include "SHObstacleDetectSocketData.h"
#include "SHAnimNPCObstaclesDetectSubcomp.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHAnimNPCObstaclesDetectSubcomp : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    TArray<FSHObstacleDetectSocketData> SocketsToDetect;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    FSHObstacleDetectMovementData MovementDetectionData;
    
    USHAnimNPCObstaclesDetectSubcomp();

    UFUNCTION(BlueprintPure)
    FVector GetSocketLocation(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    float GetSocketCheckVectorLength(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetSocketCheckVector(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    float GetSocketAlpha(int32 Index) const;
    
};

