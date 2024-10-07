#include "SubtitleData.h"

FSubtitleData::FSubtitleData() {
    this->ShowSubtitles = false;
    this->ShowNonVerbalCaptions = false;
    this->SubtitleNames = false;
    this->Size = ETextSize::Tiny;
    this->Font = ETextFont::Default;
    this->Color = ESubtitleColor::Off;
    this->SubtitleBackground = ESubtitleBackground::None;
}

