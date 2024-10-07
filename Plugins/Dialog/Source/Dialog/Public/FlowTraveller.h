#pragma once
#include "CoreMinimal.h"
#include "FlowObjectID.h"
#include "FlowTraveller.generated.h"

class UObject;

USTRUCT()
struct DIALOG_API FFlowTraveller {
    GENERATED_BODY()
public:
private:
    UPROPERTY(SaveGame)
    FFlowObjectID _CurrentRef;
    
    UPROPERTY(SaveGame)
    TArray<FFlowObjectID> _Connections;
    
    UPROPERTY(SaveGame)
    TArray<FFlowObjectID> _History;
    
    UPROPERTY(SaveGame)
    TArray<FFlowObjectID> _Hubs;
    
    UPROPERTY(Transient)
    UObject* _Context;
    
public:
    FFlowTraveller();
};

