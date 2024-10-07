#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SHFirearmAimOffsetAnimInstance.h"
#include "SHCharacterPlayAimOffsetMatchingTool.generated.h"

class UObject;

UCLASS(Abstract, NonTransient)
class SHPROTO_API USHCharacterPlayAimOffsetMatchingTool : public USHFirearmAimOffsetAnimInstance {
    GENERATED_BODY()
public:
    USHCharacterPlayAimOffsetMatchingTool();

protected:
    UFUNCTION(BlueprintPure)
    FVector GetMuzzleAimLocation() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetCrosshairAimLocation() const;
    
    UFUNCTION(BlueprintPure)
    float GetCameraPitch() const;
    
    UFUNCTION(BlueprintCallable)
    void FakeRotationInput(float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    void FakeAimInput(bool Pressed);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawMuzzleAimTrace(const UObject* WorldContextObject);
    
};

