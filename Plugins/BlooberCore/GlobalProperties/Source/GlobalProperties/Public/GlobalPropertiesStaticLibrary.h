#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GlobalPropertyHandleBool.h"
#include "GlobalPropertyHandleFloat.h"
#include "GlobalPropertyHandleInt.h"
#include "GlobalPropertiesStaticLibrary.generated.h"

class UGlobalPropertiesSheet;
class UObject;

UCLASS(BlueprintType)
class GLOBALPROPERTIES_API UGlobalPropertiesStaticLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UGlobalPropertiesStaticLibrary();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ToggleGlobalBool(UObject* WorldContextObject, FGlobalPropertyHandleBool Handle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 SubtractFromGlobalInt(UObject* WorldContextObject, FGlobalPropertyHandleInt Handle, const int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float SubtractFromGlobalFloat(UObject* WorldContextObject, FGlobalPropertyHandleFloat Handle, const float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGlobalInt(UObject* WorldContextObject, FGlobalPropertyHandleInt Handle, const int32 NewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGlobalFloat(UObject* WorldContextObject, FGlobalPropertyHandleFloat Handle, const float NewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGlobalBool(UObject* WorldContextObject, FGlobalPropertyHandleBool Handle, const bool NewValue);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ResetGlobalProperties(UObject* WorldContextObject, const UGlobalPropertiesSheet* Sheet);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 MultiplyGlobalIntBy(UObject* WorldContextObject, FGlobalPropertyHandleInt Handle, const int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float MultiplyGlobalFloatBy(UObject* WorldContextObject, FGlobalPropertyHandleFloat Handle, const float Value);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static int32 GetGlobalInt(UObject* WorldContextObject, FGlobalPropertyHandleInt Handle);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static float GetGlobalFloat(UObject* WorldContextObject, FGlobalPropertyHandleFloat Handle);
    
    UFUNCTION(BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static bool GetGlobalBool(UObject* WorldContextObject, FGlobalPropertyHandleBool Handle);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 DivideGlobalIntBy(UObject* WorldContextObject, FGlobalPropertyHandleInt Handle, const int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float DivideGlobalFloatBy(UObject* WorldContextObject, FGlobalPropertyHandleFloat Handle, const float Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 AddToGlobalInt(UObject* WorldContextObject, FGlobalPropertyHandleInt Handle, const int32 Value);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float AddToGlobalFloat(UObject* WorldContextObject, FGlobalPropertyHandleFloat Handle, const float Value);
    
};

