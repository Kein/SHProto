#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaiNodeConnection.h"
#include "MaiNodeData.generated.h"

USTRUCT(BlueprintType)
struct MAI_API FMaiNodeData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FString _Name;
    
    UPROPERTY(VisibleAnywhere)
    FVector _Location;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FMaiNodeConnection> _Connections;
    
    UPROPERTY(Transient, VisibleAnywhere)
    bool _PendingKill;
    
    FMaiNodeData();
};

