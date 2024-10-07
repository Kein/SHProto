#pragma once
#include "CoreMinimal.h"
#include "SHHud.h"
#include "SHHudPlay.generated.h"

UCLASS(NonTransient)
class SHPROTO_API ASHHudPlay : public ASHHud {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bDrawPostDebug;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bDrawDOFDebug;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly)
    bool bDrawPlayerLocation;
    
    ASHHudPlay(const FObjectInitializer& ObjectInitializer);

};

