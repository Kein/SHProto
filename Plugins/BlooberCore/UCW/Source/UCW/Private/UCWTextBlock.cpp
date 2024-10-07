#include "UCWTextBlock.h"
#include "Components/SlateWrapperTypes.h"
#include "Templates/SubclassOf.h"

UUCWTextBlock::UUCWTextBlock() {
    this->Visibility = ESlateVisibility::SelfHitTestInvisible;
    this->Style = NULL;
    this->ScrollStyle = NULL;
    this->bInheritTextColor = true;
    this->bAutoCollapseWithEmptyText = false;
    this->MobileFontSizeMultiplier = 1.00f;
}

void UUCWTextBlock::SetWrapTextWidth(int32 InWrapTextAt) {
}

void UUCWTextBlock::SetTextCase(bool bUseAllCaps) {
}

void UUCWTextBlock::SetStyle(TSubclassOf<UCommonTextStyle> InStyle) {
}

void UUCWTextBlock::ResetScrollState() {
}


