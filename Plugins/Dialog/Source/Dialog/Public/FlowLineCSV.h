#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FlowLineCSV.generated.h"

USTRUCT(BlueprintType)
struct FFlowLineCSV : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString ID;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Dir0;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Dir1;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Dir2;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Dialog;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Template;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Tags;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString speaker;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DisplaySpeaker;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Text;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Description;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString Order;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString DeleteMe;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString HasVO;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString HasValidVO;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString VOName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString WavePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString CuePath;
    
    DIALOG_API FFlowLineCSV();
};

