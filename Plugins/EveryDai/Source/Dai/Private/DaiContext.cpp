#include "DaiContext.h"

FDaiContext::FDaiContext() {
    this->_ContextType = EDaiContextType::Caller;
    this->_Class = NULL;
    this->_Getter = NULL;
}

