#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Components/ActorComponent.h"
#include "Components/SkinnedMeshComponent.h"
#include "Components/SceneComponent.h"
#include "EBones.h"
#include "ESkeletonSockets.h"
#include "SHSubcomponentSettingsProviderInterface.h"
#include "Templates/SubclassOf.h"
#include "SHAnimComponent.generated.h"

class UAnimInstance;
class UObject;
class USHAnimActionExecutiveBase;
class USHAnimSubcomponentBase;

UCLASS(Abstract, BlueprintType, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class SHPROTO_API USHAnimComponent : public UActorComponent, public ISHSubcomponentSettingsProviderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName GameplayLinkedAnimInstNodeTag;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<UAnimInstance> GameplayLinkedAnimInstDefaultClass;
    
    UPROPERTY(Transient)
    TSet<USHAnimSubcomponentBase*> OwnedSubcomponents;
    
    UPROPERTY(Transient)
    UAnimInstance* AnimInstance;
    
    UPROPERTY(Transient)
    USHAnimActionExecutiveBase* AnimActionExe;
    
public:
    USHAnimComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UnlinkGameplayAnimInst();
    
    UFUNCTION(BlueprintCallable)
    void SetAnimActionBlocked(const bool Blocked, const UObject* Object);
    
    UFUNCTION(BlueprintCallable)
    UAnimInstance* LinkGameplayAnimInst(TSubclassOf<UAnimInstance> InClass);
    
    UFUNCTION(BlueprintPure)
    bool IsInitialized() const;
    
    UFUNCTION(BlueprintPure)
    bool IsGameplayLinkedAnimInstSupported() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAnimActionBlocked() const;
    
    UFUNCTION(BlueprintPure)
    FName GetSkeletonSocketName(ESkeletonSockets SocketType) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetHipsForward() const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetCharacterBodyRotation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCharacterBodyForward() const;
    
    UFUNCTION(BlueprintPure)
    FTransform GetBoneTransform(EBones BoneType, TEnumAsByte<ERelativeTransformSpace> Space) const;
    
    UFUNCTION(BlueprintPure)
    FRotator GetBoneRotation(EBones BoneType, TEnumAsByte<ERelativeTransformSpace> TransformSpace) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetBoneRootLocation() const;
    
    UFUNCTION(BlueprintPure)
    FName GetBoneName(EBones BoneType) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetBoneLocation(EBones BoneType, TEnumAsByte<EBoneSpaces::Type> TransformSpace) const;
    
    UFUNCTION(BlueprintPure)
    EBones GetBoneFromName(FName BoneType) const;
    
    UFUNCTION(BlueprintPure)
    USHAnimActionExecutiveBase* GetAnimActionExe() const;
    
    UFUNCTION(BlueprintPure)
    USHAnimSubcomponentBase* FindSubcomponentByClass(const TSubclassOf<USHAnimSubcomponentBase> SubcomponentClass) const;
    
    UFUNCTION(BlueprintCallable)
    bool CreateAnimActionExe(TSubclassOf<USHAnimActionExecutiveBase> AnimActionExeClass, UObject* InContextObject);
    

    // Fix for true pure virtual functions not being implemented
};

