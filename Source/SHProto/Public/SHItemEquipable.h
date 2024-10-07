#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "SHItemEquipable.generated.h"

class ACharacter;
class UMeshComponent;
class UStreamableRenderAsset;

UCLASS(Abstract)
class SHPROTO_API ASHItemEquipable : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Instanced, Transient)
    UMeshComponent* Mesh;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSoftObjectPtr<UStreamableRenderAsset> MeshAsset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName EquipAttachSocket;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector EquipRelativeLocation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FVector EquipRelativeRotation;
    
    UPROPERTY(Transient)
    ACharacter* OwnerCharacter;
    
public:
    ASHItemEquipable(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintPure)
    ACharacter* GetOwnerCharacter() const;
    
    UFUNCTION(BlueprintPure)
    FName GetItemDataRowName() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintBeforeUnequip();
    
    UFUNCTION(BlueprintImplementableEvent)
    void BlueprintAfterEquip();
    
};

