#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DialogLine.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/LatentActionManager.h"
#include "ESHGameplayItemNotificationType.h"
#include "SHGameplayUIStatics.generated.h"

class UObject;

UCLASS(BlueprintType)
class SHPROTO_API USHGameplayUIStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USHGameplayUIStatics();

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ShowTips(UObject* WorldContextObject, const TArray<FName>& Tips, bool WithBackground, bool UseVisibilitySettings);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool ShowEnviromentalSubtitle(UObject* WorldContextObject, const FDialogLine& dialogLineID);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetGameplayFadeColor(UObject* WorldContextObject, const FLinearColor& InColor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RequestItemNotification(UObject* WorldContextObject, FName ItemDataRowName, int32 ItemQuantity, ESHGameplayItemNotificationType ItemNotificationType);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float RequestGameplayFadeOut(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float RequestGameplayFadeIn(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float RequestCustomGameplayFadeOut(UObject* WorldContextObject, float InFadeTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static float RequestCustomGameplayFadeIn(UObject* WorldContextObject, float InFadeTime);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveGameplayFadeInstant(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LatentGameplayFadeOut(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(Latent, LatentInfo="LatentInfo", WorldContext="WorldContextObject"))
    static void LatentGameplayFadeIn(UObject* WorldContextObject, FLatentActionInfo LatentInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void HideTips(UObject* WorldContextObject);
    
};

