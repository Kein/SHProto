#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GraphObject.h"
#include "DialogObjectID.h"
#include "FlowPin.h"
#include "FlowItem.generated.h"

class UDaiCondition;
class UFlowAction;
class UFlowTemplate;
class UVarObjectData;

UCLASS(Abstract, EditInlineNew)
class DIALOG_API UFlowItem : public UGraphObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FColor _Color;
    
    UPROPERTY(EditAnywhere)
    FString _TechnicalName;
    
    UPROPERTY(EditAnywhere)
    bool _SaveGame;
    
    UPROPERTY(EditAnywhere)
    bool _ResetState;
    
    UPROPERTY(AdvancedDisplay, EditInstanceOnly, Transient)
    int32 _CallCounter;
    
    UPROPERTY()
    int32 _ShortID;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    FString _StringID;
    
    UPROPERTY(Instanced)
    UVarObjectData* _ExtraData;
    
    UPROPERTY(EditAnywhere)
    TMap<FName, FString> _ExtraFields;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<UFlowAction*> _Actions;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<UDaiCondition*> _Conditions;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<FDialogObjectID> _Connections;
    
    UPROPERTY(AdvancedDisplay, VisibleAnywhere)
    TArray<FFlowPin> _Pins;
    
    UPROPERTY(BlueprintReadOnly, Instanced, VisibleAnywhere)
    UFlowTemplate* _Template;
    
    UFlowItem();

    UFUNCTION(BlueprintPure)
    FDialogObjectID GetFlowRef() const;
    
    UFUNCTION(BlueprintPure)
    FString GetDisplayString() const;
    
};

