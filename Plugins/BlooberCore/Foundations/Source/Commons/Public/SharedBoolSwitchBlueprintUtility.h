#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SharedBoolSwitchBlueprint.h"
#include "SharedBoolSwitchBlueprintUtility.generated.h"

class UObject;

UCLASS(BlueprintType)
class USharedBoolSwitchBlueprintUtility : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USharedBoolSwitchBlueprintUtility();

    UFUNCTION(BlueprintCallable)
    static void Release(UPARAM(Ref) FSharedBoolSwitchBlueprint& BoolSwitch, UObject* User);
    
    UFUNCTION(BlueprintPure)
    static bool IsSwitched(const FSharedBoolSwitchBlueprint& BoolSwitch);
    
    UFUNCTION(BlueprintPure)
    static bool GetDefaultValue(const FSharedBoolSwitchBlueprint& BoolSwitch);
    
    UFUNCTION(BlueprintPure)
    static bool GetCurrentValue(const FSharedBoolSwitchBlueprint& BoolSwitch);
    
    UFUNCTION(BlueprintCallable)
    static void ClearAllUsers(UPARAM(Ref) FSharedBoolSwitchBlueprint& BoolSwitch);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeDefaultValue(UPARAM(Ref) FSharedBoolSwitchBlueprint& BoolSwitch, const bool NewDefaultValue);
    
    UFUNCTION(BlueprintCallable)
    static void Acquire(UPARAM(Ref) FSharedBoolSwitchBlueprint& BoolSwitch, UObject* User);
    
};

