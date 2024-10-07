#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "BlairwitchDialogLineRow.generated.h"

USTRUCT()
struct FBlairwitchDialogLineRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString _Speaker;
    
    UPROPERTY(EditAnywhere)
    FString _Text;
    
    UPROPERTY(EditAnywhere)
    FString _Directions;
    
    UPROPERTY(EditAnywhere)
    uint8 _Loudness;
    
    UPROPERTY(EditAnywhere)
    FString _Mastering;
    
    UPROPERTY(EditAnywhere)
    FString _Note1;
    
    UPROPERTY(EditAnywhere)
    FString _Note2;
    
    UPROPERTY(EditAnywhere)
    FString _Note3;
    
    UPROPERTY(VisibleAnywhere)
    FString _WaveName;
    
    UPROPERTY(VisibleAnywhere)
    FString _WavePath;
    
    UPROPERTY(EditAnywhere)
    FSoftObjectPath _WavePreview;
    
    DIALOG_API FBlairwitchDialogLineRow();
};

