#include "StyledRichTextBlock.h"
#include "Templates/SubclassOf.h"

UStyledRichTextBlock::UStyledRichTextBlock() : URichTextBlock(FObjectInitializer::Get()) {
    this->ScrollStyle = NULL;
    this->TextStyle = NULL;
    this->bCommonFontSize = false;
    this->FontSize = 0;
    this->MobileTextBlockScale = 1.00f;
}

void UStyledRichTextBlock::SetStyle(TSubclassOf<UCommonTextStyle> InStyle) {
}


