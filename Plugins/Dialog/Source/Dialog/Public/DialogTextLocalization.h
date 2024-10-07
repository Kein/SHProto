#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "DialogTextLocalization.generated.h"

USTRUCT(BlueprintType)
struct FDialogTextLocalization : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString _Dialog;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString _Speaker;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString _Text;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString _Translate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString _Directions;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSoftObjectPath _VO;
    
    DIALOG_API FDialogTextLocalization();
};

