#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SHGameplayTutorialStatics.generated.h"

class UObject;

UCLASS(BlueprintType)
class USHGameplayTutorialStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USHGameplayTutorialStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowSprintTutorial(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowScriptedPreTraversalTutorial(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowScriptedBreakWallTutorial(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowScriptedBreakGlassTutorial(UObject* WorldContextObject);
    
};

