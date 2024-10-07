#pragma once
#include "CoreMinimal.h"
#include "MaiAction.h"
#include "MaiAction_MoveOnSpline.generated.h"

class AMaiActionPoint;
class AMaiSplineActor;
class APawn;
class UMaiAction_MoveOnSpline;
class UObject;

UCLASS(EditInlineNew)
class MAI_API UMaiAction_MoveOnSpline : public UMaiAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AMaiSplineActor* _Spline;
    
    UMaiAction_MoveOnSpline();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMaiAction_MoveOnSpline* createActionMoveOnSplineToAP(UObject* WorldContextObject, APawn* Pawn, AMaiActionPoint* Point);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMaiAction_MoveOnSpline* createActionMoveOnSpline(UObject* WorldContextObject, AMaiSplineActor* Spline);
    
};

