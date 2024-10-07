#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "PlayAnimationData.h"
#include "SHOverrideFXData.h"
#include "SHTraceData.h"
#include "Templates/SubclassOf.h"
#include "SHCharacterPlayAttackBaseData.generated.h"

class UCameraShakeBase;
class UDamageType;

USTRUCT(BlueprintType)
struct SHPROTO_API FSHCharacterPlayAttackBaseData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName Name;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UDamageType> DamageTypeClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HitCheckRadius;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HitCheckAngle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnvTraceOnlyFirstHit;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnvTraceManualLocations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<FSHTraceData> EnvTraceLocalManualLocations;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bEnvTraceFromWeapon;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EnvTracePitch;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EnvTraceLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FPlayAnimationData AnimationData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseSectionSwitching;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCameraShakeBase> HitCameraShakeClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float HitCameraShakeScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TSubclassOf<UCameraShakeBase> EnvHitCameraShakeClass;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float EnvHitCameraShakeScale;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSHOverrideFXData OverrideFXData;
    
    FSHCharacterPlayAttackBaseData();
};

