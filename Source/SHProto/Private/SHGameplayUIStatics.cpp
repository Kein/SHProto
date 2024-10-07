#include "SHGameplayUIStatics.h"

USHGameplayUIStatics::USHGameplayUIStatics() {
}

void USHGameplayUIStatics::ShowTips(UObject* WorldContextObject, const TArray<FName>& Tips, bool WithBackground, bool UseVisibilitySettings) {
}

bool USHGameplayUIStatics::ShowEnviromentalSubtitle(UObject* WorldContextObject, const FDialogLine& dialogLineID) {
    return false;
}

void USHGameplayUIStatics::SetGameplayFadeColor(UObject* WorldContextObject, const FLinearColor& InColor) {
}

void USHGameplayUIStatics::RequestItemNotification(UObject* WorldContextObject, FName ItemDataRowName, int32 ItemQuantity, ESHGameplayItemNotificationType ItemNotificationType) {
}

float USHGameplayUIStatics::RequestGameplayFadeOut(UObject* WorldContextObject) {
    return 0.0f;
}

float USHGameplayUIStatics::RequestGameplayFadeIn(UObject* WorldContextObject) {
    return 0.0f;
}

float USHGameplayUIStatics::RequestCustomGameplayFadeOut(UObject* WorldContextObject, float InFadeTime) {
    return 0.0f;
}

float USHGameplayUIStatics::RequestCustomGameplayFadeIn(UObject* WorldContextObject, float InFadeTime) {
    return 0.0f;
}

void USHGameplayUIStatics::RemoveGameplayFadeInstant(UObject* WorldContextObject) {
}

void USHGameplayUIStatics::LatentGameplayFadeOut(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void USHGameplayUIStatics::LatentGameplayFadeIn(UObject* WorldContextObject, FLatentActionInfo LatentInfo) {
}

void USHGameplayUIStatics::HideTips(UObject* WorldContextObject) {
}


