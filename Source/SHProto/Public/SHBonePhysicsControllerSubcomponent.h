#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHAnimSubcomponentBase.h"
#include "SHBonePhysicsControllerSettingsProfile.h"
#include "SHBonePhysicsPhysicsBlendInput.h"
#include "SHBonePhysicsControllerSubcomponent.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class SHPROTO_API USHBonePhysicsControllerSubcomponent : public USHAnimSubcomponentBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPreventPhysicsOfRootBody;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bNeverManagePhysicsProfiles;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FSHBonePhysicsControllerSettingsProfile DefaultPhysicsProfile;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bPrintPhysicsStatesDebug;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDrawAppliedForcesDebug;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DrawAppliedForcesDebugScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDrawBodyActiveForcesDebug;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DrawBodyActiveForcesDebugScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    bool bDrawDebugPose;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DrawStreamedPoseDebugDuration;
    
public:
    USHBonePhysicsControllerSubcomponent();

    UFUNCTION(BlueprintCallable)
    void UnfreezeBodiesPose(float InUnfreezeDelay);
    
    UFUNCTION(BlueprintCallable)
    void SetStreamedPoseDrawingDuration(float InDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetPhysicsStatesDebugPrinting(bool InEnableDebugPrint);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawBodyActiveForcesDebugArrows(bool InDrawBodyActiveForcesDebug, float InBodyActiveForcesScale);
    
    UFUNCTION(BlueprintCallable)
    void SetDrawAppliedForcesDebugArrows(bool InDrawAppliedForcesDebug, float InDrawAppliedForcesScale);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugSettings(bool InPrintPhysicsStates, bool InDrawAppliedForcesDebug, float InDrawAppliedForcesScale, bool InDrawBodyActiveForcesDebug, float InBodyActiveForcesScale, bool InDrawPoseDebug, float InDrawStreamedPoseDuration);
    
    UFUNCTION(BlueprintCallable)
    void SetDebugPoseDrawing(bool InDrawPose);
    
    UFUNCTION(BlueprintPure)
    bool IsBodiesPoseFrozen(bool InIncludeUnfreezing) const;
    
    UFUNCTION(BlueprintCallable)
    void FreezeBodiesPose(bool InOnlyIfNotFrozen);
    
    UFUNCTION(BlueprintPure)
    bool FindIfRootPhysicsSimulationIsActive() const;
    
    UFUNCTION(BlueprintPure)
    bool FindIfBoneHasActivePhysics(FName InBoneName) const;
    
    UFUNCTION(BlueprintCallable)
    void FadeOutPhysicsByIdentifier(float InBlendOutTime, float InBlendOutCurveBend, FName InPhysicsIdentifier);
    
    UFUNCTION(BlueprintCallable)
    void FadeOutBonePhysicsByIdentifier(float InBlendOutTime, float InBlendOutCurveBend, FName InPhysicsIdentifier, FName InBoneName);
    
    UFUNCTION(BlueprintCallable)
    void FadeOutAllPhysics(float InBlendOutTime, float InBlendOutCurveBend);
    
    UFUNCTION(BlueprintCallable)
    void AssignBonePhysicsSettingsProfile(const FSHBonePhysicsControllerSettingsProfile& InSettingsProfile);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyPhysicsForceToChildBodiesOfBone(FName InBoneName, const FVector& InForceLocation, const FVector& InForce, bool InOnlyDirectChildren, bool InApplyForceAtChildLocation, const FSHBonePhysicsPhysicsBlendInput& InPhysicsBlendInput, bool InAllowRootPhysics, FName InPhysicsIdentifier);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyPhysicsForceToBoneAndItsChildren(FName InBoneName, const FVector& InForceLocation, const FVector& InForce, float InChildrenBoneForceMultiplier, bool InOnlyApplyForceToDirectChildren, bool InApplyForceAtChildLocation, int32 InActivatePhysicsForParentBodyLevelsAbove, const FSHBonePhysicsPhysicsBlendInput& InPhysicsBlendInput, bool InAllowRootPhysics, FName InPhysicsIdentifier);
    
    UFUNCTION(BlueprintCallable)
    bool ApplyPhysicsForceToBone(FName InBoneName, const FVector& InForceLocation, const FVector& InForce, int32 InActivatePhysicsForParentBodyLevelsAbove, const FSHBonePhysicsPhysicsBlendInput& InPhysicsBlendInput, bool InAllowRootPhysics, FName InPhysicsIdentifier);
    
    UFUNCTION(BlueprintCallable)
    bool ActivatePhysicsForBone(FName InBoneName, int32 InActivatePhysicsForParentBodyLevelsAbove, const FSHBonePhysicsPhysicsBlendInput& InPhysicsBlendInput, bool InAllowRootPhysics, FName InPhysicsIdentifier);
    
};

