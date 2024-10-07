#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "DialogLine.h"
#include "DialogData.generated.h"

class UDataTable;
class UDialogDataTree;
class UDialogVoices;
class UFlowAsset;
class UFlowDebugger;
class UFlowItem;
class UScriptStruct;

UCLASS()
class DIALOG_API UDialogData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString _SourcePath;
    
    UPROPERTY(EditAnywhere)
    FString _LocalizationTarget;
    
    UPROPERTY(EditAnywhere)
    bool _ShowLocalizedText;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDialogVoices* _Voices;
    
    UPROPERTY()
    UDataTable* _TagsTable;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<FDialogLine> _LinesToSkip;
    
    UPROPERTY(EditAnywhere)
    FString _Language;
    
    UPROPERTY(EditAnywhere)
    FFilePath _JSonTemplate;
    
    UPROPERTY(EditAnywhere)
    bool _FixSource;
    
    UPROPERTY(EditAnywhere)
    bool _OnlyChanged;
    
    UPROPERTY(EditAnywhere)
    TArray<FName> _ValidIDS;
    
    UPROPERTY(EditAnywhere)
    FFilePath _EntityCSV;
    
    UPROPERTY(EditAnywhere)
    UScriptStruct* _EntityRow;
    
    UPROPERTY(EditAnywhere)
    FFilePath _LineCSV;
    
    UPROPERTY(EditAnywhere)
    UScriptStruct* _LineRow;
    
    UPROPERTY(EditAnywhere)
    FName _TagFilter;
    
private:
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    TMap<int32, UFlowAsset*> _SubAssets;
    
    UPROPERTY(AdvancedDisplay, Transient, VisibleAnywhere)
    TMap<int32, UFlowItem*> _PrototypesItems;
    
    UPROPERTY(Transient)
    TMap<int32, UFlowItem*> _InstancesItems;
    
    UPROPERTY()
    UFlowAsset* _RootAsset;
    
public:
    UPROPERTY(Transient)
    UDialogDataTree* _DialogDataTree;
    
    UPROPERTY(Transient)
    UFlowItem* _CurrentItem;
    
    UPROPERTY(Instanced, Transient)
    UFlowDebugger* _Debugger;
    
    UDialogData();

    UFUNCTION()
    void JsonToCsv();
    
    UFUNCTION()
    void CsvToJson();
    
};

