#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "DialogObjectID.h"
#include "FlowPin.h"
#include "FlowAsset.generated.h"

class UFlowAsset;
class UFlowItem;
class UVarObjectData;

UCLASS()
class DIALOG_API UFlowAsset : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FDialogObjectID _FlowRef;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FDialogObjectID> _Connections;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FFlowPin> _Pins;
    
private:
    UPROPERTY(EditAnywhere)
    FString _CopyPaste;
    
    UPROPERTY(VisibleAnywhere)
    bool _MovedAcionsToItem;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TMap<int32, UFlowItem*> _FlowItems;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TMap<int32, UVarObjectData*> _PrototypeData;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TMap<int32, UVarObjectData*> _InstanceData;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<UFlowAsset*> _AssetsToRemove;
    
    UPROPERTY(Instanced, VisibleAnywhere)
    TArray<UFlowAsset*> _AssetsToRevert;
    
    UPROPERTY(SkipSerialization)
    UObject* _OuterOfSource;
    
    UPROPERTY(SkipSerialization)
    UFlowAsset* _ParentOfSource;
    
public:
    UFlowAsset();

};

