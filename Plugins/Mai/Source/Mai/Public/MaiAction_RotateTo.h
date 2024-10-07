#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MaiAction.h"
#include "MaiAction_RotateTo.generated.h"

class AActor;
class UMaiAction_RotateTo;
class UObject;

UCLASS(EditInlineNew)
class MAI_API UMaiAction_RotateTo : public UMaiAction {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AActor* _LookAtActor;
    
    UPROPERTY(EditAnywhere)
    FVector _LookAtLocation;
    
protected:
    UPROPERTY(EditAnywhere)
    float _Precision;
    
public:
    UMaiAction_RotateTo();

    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMaiAction_RotateTo* createActionRotateToLocation(UObject* WorldContextObject, FVector Location, float Precision);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UMaiAction_RotateTo* createActionRotateToActor(UObject* WorldContextObject, AActor* Actor, float Precision);
    
};

