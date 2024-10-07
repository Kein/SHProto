#pragma once
#include "CoreMinimal.h"
#include "ESHBonePhysicsControllerSettingsBodyPhysicsPermission.h"
#include "SHBonePhysicsControllerSettingsBodyPhysicsOverride.generated.h"

USTRUCT(BlueprintType)
struct FSHBonePhysicsControllerSettingsBodyPhysicsOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bTreatBoneAsRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHBonePhysicsControllerSettingsBodyPhysicsPermission AllowPhysics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName InactivePhysicsProfileOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ActivePhysicsProfileOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaximumBlendWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaximumVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaximumAngularVelocity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bApplyForceMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaximumForceMultiplier;
    
    SHPROTO_API FSHBonePhysicsControllerSettingsBodyPhysicsOverride();
};

