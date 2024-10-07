#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CollisionShapeProperty.h"
#include "FootIKNames.h"
#include "IgnoredActorClass.h"
#include "SHAnimSubcompSettings.h"
#include "SHAnimFootIKSubcompSettings.generated.h"

USTRUCT(BlueprintType)
struct SHPROTO_API FSHAnimFootIKSubcompSettings : public FSHAnimSubcompSettings {
    GENERATED_BODY()
public:
    UPROPERTY(EditDefaultsOnly)
    TArray<FFootIKNames> FeetIKNames;
    
    UPROPERTY(EditDefaultsOnly)
    float FeetIKHeight;
    
    UPROPERTY(EditDefaultsOnly)
    bool MoveFeetOnlyInZAxis;
    
    UPROPERTY(EditDefaultsOnly)
    bool UseSweepInsteadOfLineTrace;
    
    UPROPERTY(EditDefaultsOnly)
    FCollisionShapeProperty SweepCollisionShape;
    
    UPROPERTY(EditDefaultsOnly)
    bool UseSingleTraceLogic;
    
    UPROPERTY(EditDefaultsOnly)
    float TraceHalfDistance;
    
    UPROPERTY(EditDefaultsOnly)
    FVector2D FootRotationTargetLimit;
    
    UPROPERTY(EditDefaultsOnly)
    FName FootRootIKBoneName;
    
    UPROPERTY(EditDefaultsOnly)
    float FootLocationOffsetLimit;
    
    UPROPERTY(EditDefaultsOnly)
    TArray<FIgnoredActorClass> IgnoredActorClassess;
    
    UPROPERTY(EditDefaultsOnly)
    bool bDisableUpdatesThrottling;
    
    FSHAnimFootIKSubcompSettings();
};

