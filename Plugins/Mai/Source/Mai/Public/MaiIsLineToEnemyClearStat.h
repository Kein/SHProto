#pragma once
#include "CoreMinimal.h"
#include "BeingRelativeStat.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/KismetSystemLibrary.h"
#include "MaiIsLineToEnemyClearStat.generated.h"

UCLASS(Abstract, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiIsLineToEnemyClearStat : public UBeingRelativeStat {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EDrawDebugTrace::Type> _DrawDebugType;
    
    UPROPERTY(EditAnywhere)
    FLinearColor _TraceColor;
    
    UPROPERTY(EditAnywhere)
    FLinearColor _TraceHitColor;
    
    UPROPERTY(EditAnywhere)
    float _DrawTime;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName _Profile;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _Radius;
    
public:
    UMaiIsLineToEnemyClearStat(const FObjectInitializer& ObjectInitializer);

};

