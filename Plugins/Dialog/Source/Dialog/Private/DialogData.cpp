#include "DialogData.h"

UDialogData::UDialogData() {
    this->_LocalizationTarget = TEXT("Dialogs");
    this->_ShowLocalizedText = false;
    this->_Voices = NULL;
    this->_TagsTable = NULL;
    this->_FixSource = false;
    this->_OnlyChanged = false;
    this->_EntityRow = NULL;
    this->_LineRow = NULL;
    this->_RootAsset = NULL;
    this->_DialogDataTree = NULL;
    this->_CurrentItem = NULL;
    this->_Debugger = NULL;
}

void UDialogData::JsonToCsv() {
}

void UDialogData::CsvToJson() {
}


