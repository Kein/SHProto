#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaterialTypes.h"
#include "SHFXSubcomponent.h"
#include "SHFXNurseHeadShakeSubcomp.generated.h"

class UMaterialInstanceDynamic;
class USHFXNurseHeadShakeSubcompSettings;
class USkeletalMeshComponent;

UCLASS(EditInlineNew)
class SHPROTO_API USHFXNurseHeadShakeSubcomp : public USHFXSubcomponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    USHFXNurseHeadShakeSubcompSettings* Settings;
    
    UPROPERTY(Instanced, Transient)
    USkeletalMeshComponent* OwnerSkeletalMesh;
    
    UPROPERTY(Transient)
    UMaterialInstanceDynamic* HeadDynamicMaterial;
    
    UPROPERTY(Transient)
    TArray<FVector> DestinationOffset;
    
    UPROPERTY(Transient)
    TArray<FVector> CurrentAccelerations;
    
    UPROPERTY(Transient)
    TArray<FVector> CurrentPositions;
    
    UPROPERTY(Transient)
    TArray<FMaterialParameterInfo> MaterialParameterInfos;
    
public:
    USHFXNurseHeadShakeSubcomp();

};

