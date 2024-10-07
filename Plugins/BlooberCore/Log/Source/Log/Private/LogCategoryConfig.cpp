#include "LogCategoryConfig.h"

FLogCategoryConfig::FLogCategoryConfig() {
    this->Verbosity = ELogCustomVerbosity::NoLogging;
    this->IncludeFileLocation = false;
}

