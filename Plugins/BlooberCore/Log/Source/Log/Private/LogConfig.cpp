#include "LogConfig.h"

ULogConfig::ULogConfig() {
    this->UseGlobalVerbosity = false;
    this->GlobalVerbosity = ELogCustomVerbosity::NoLogging;
    this->EnableMessageLogWarnings = true;
    this->EnableMessageLogErrors = true;
}


