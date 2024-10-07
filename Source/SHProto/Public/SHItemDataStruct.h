#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "EItemInvestigationType.h"
#include "ESHGameplaySection.h"
#include "ESHItemAttachSlotType.h"
#include "ESHItemTypeEnum.h"
#include "SHItemAttachSlotData.h"
#include "SHItemInvestigationAnimsData.h"
#include "SHItemInvestigationTranscriptContext.h"
#include "SHItemDataStruct.generated.h"

class ASHItemInvestigationExecutive;
class UAkSwitchValue;
class UAnimInstance;
class UAnimSequence;
class UMaterialInterface;
class USHTranscriptData;
class UStreamableRenderAsset;
class UTexture;

USTRUCT(BlueprintType)
struct FSHItemDataStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHItemTypeEnum Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    ESHGameplaySection GameplaySection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsCollectable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsStackable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool BlockInventoryInvestigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UStreamableRenderAsset> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MeshWorldScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UAnimInstance> SkeletalMeshAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector InteractionIconOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAkSwitchValue> ItemAudioType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UTexture> InventoryTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverrideMeshInInvestigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UStreamableRenderAsset> MeshInInvestigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<UAnimInstance> SkeletalMeshAnimClassInInvestigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<int32, TSoftObjectPtr<UMaterialInterface>> MeshInInvestigationMaterialsOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InvestigationMeshWorldScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHItemAttachSlotData InvesitagtionAttachData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftClassPtr<ASHItemInvestigationExecutive> InvesitagtionExeOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TMap<ESHItemAttachSlotType, FSHItemAttachSlotData> QuickTakeEquipSlotParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> QuickTakeHandPoseOverrideAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    EItemInvestigationType InvestigationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationSpeedKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RotationSpeedMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FSHItemInvestigationAnimsData InvestigationAnimations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UAnimSequence> TakeAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool IsReadable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<USHTranscriptData> TranscriptData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUseDefaultTranscriptDataIfNoContextValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TArray<FSHItemInvestigationTranscriptContext> InvestigationTranscriptContexts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DefaultMeshBoundsScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InvestigationMeshBoundsScale;
    
    SHPROTO_API FSHItemDataStruct();
};

