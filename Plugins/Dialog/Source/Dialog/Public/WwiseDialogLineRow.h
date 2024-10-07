#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "WwiseDialogLineRow.generated.h"

USTRUCT()
struct FWwiseDialogLineRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FString _AudioFile;
    
    UPROPERTY(EditAnywhere)
    FString _ObjectPath;
    
    UPROPERTY(EditAnywhere)
    FString _Event;
    
    UPROPERTY(EditAnywhere)
    FString _Notes;
    
    UPROPERTY(EditAnywhere)
    FString _UsedEvent;
    
    UPROPERTY(EditAnywhere)
    bool _IsWwise;
    
    UPROPERTY(EditAnywhere)
    FString _Dialog;
    
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
    FString _Note;
    
    DIALOG_API FWwiseDialogLineRow();
};

