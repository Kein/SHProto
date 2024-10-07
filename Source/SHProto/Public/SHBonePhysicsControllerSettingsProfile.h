#pragma once
#include "CoreMinimal.h"
#include "SHBonePhysicsControllerSettingsBodyPhysicsOverride.h"
#include "SHBonePhysicsControllerSettingsProfile.generated.h"

USTRUCT(BlueprintType)
struct FSHBonePhysicsControllerSettingsProfile {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPreventPhysicsOfRootBody;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNeverManagePhysicsProfiles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DefaultInactivePhysicsProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName DefaultActivePhysicsProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<FName, FSHBonePhysicsControllerSettingsBodyPhysicsOverride> BodyPhysicsOverrides;
    
public:
    SHPROTO_API FSHBonePhysicsControllerSettingsProfile();
};

