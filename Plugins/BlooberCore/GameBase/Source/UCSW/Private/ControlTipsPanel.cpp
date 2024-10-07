#include "ControlTipsPanel.h"

UControlTipsPanel::UControlTipsPanel() : UUserWidget(FObjectInitializer::Get()) {
    this->Tips_box = NULL;
    this->Tips = NULL;
    this->KeyTexts = NULL;
    this->TipWidgetClass = NULL;
    this->SuportVisibilitySettings = false;
    this->VisibilityTime = 10.00f;
    this->GameTextsConfig = NULL;
    this->FadeOut_anim = NULL;
}

void UControlTipsPanel::Update(const FControlTipsData& Config) {
}

void UControlTipsPanel::SetTips4Test(const TArray<FName>& WantedTips, const FControlTipsData& Config) {
}

void UControlTipsPanel::SetTips(const TArray<FName>& wantedTooltips) {
}



void UControlTipsPanel::OnInputDeviceChanged() {
}



