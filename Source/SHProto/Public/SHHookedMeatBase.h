#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SHHookedMeatBoneworkHandler.h"
#include "Templates/SubclassOf.h"
#include "SHHookedMeatBase.generated.h"

class UDamageType;
class USHAkHookedMeatComponent;
class USkeletalMeshComponent;

UCLASS()
class SHPROTO_API ASHHookedMeatBase : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USkeletalMeshComponent* MainSkeletalMesh;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleDefaultsOnly)
    USHAkHookedMeatComponent* SHAkHookedMeatComponent;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    FSHHookedMeatBoneworkHandler BoneworkHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 RenderTargetAtlasIndex;
    
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere)
    float SplineDistance;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ActionOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TraceLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TraceOffset;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIsPushedByEddie;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bObliterateOnAnyDamage;
    
public:
    ASHHookedMeatBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    bool ShouldPushLeft(const AActor* Target, const FVector AttackPosition) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMeatPush(bool IsGoingForward);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsFullyDestroyed() const;
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetForceValueFromTypeClass(TSubclassOf<UDamageType> InDamageTypeClass);
    
    UFUNCTION(BlueprintPure)
    TArray<FName> GetExistingChildBones(const FName& InParentBoneName) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetEddieCoverPosition(const AActor* Target) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetDesiredEddieMeatPushPosition(const AActor* EddieActor) const;
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetDamageValueFromTypeClass(TSubclassOf<UDamageType> InDamageTypeClass);
    
    UFUNCTION(BlueprintImplementableEvent)
    float GetBoneDefaultHealth(const FName& InBoneName);
    
    UFUNCTION(BlueprintCallable)
    void BreakAllBones();
    
    UFUNCTION(BlueprintCallable)
    bool ApplyDamageToBone(const FName& InBoneName, const FVector& HitFromDirection, const TSubclassOf<UDamageType>& InDamageTypeClass);
    
};

