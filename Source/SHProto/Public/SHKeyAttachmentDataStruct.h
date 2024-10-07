#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "SHKeyAttachmentDataStruct.generated.h"

class UStaticMesh;

USTRUCT(BlueprintType)
struct FSHKeyAttachmentDataStruct : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TSoftObjectPtr<UStaticMesh> Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector MeshRelativeOffset;
    
    SHPROTO_API FSHKeyAttachmentDataStruct();
};

