#include "SHAnalyticsPerformanceRecordsDatabase.h"

FSHAnalyticsPerformanceRecordsDatabase::FSHAnalyticsPerformanceRecordsDatabase() {
    this->Raytracing = ERaytracing::Off;
    this->DynRes = EDynamicResolution::Off;
    this->Quality = GFXQuality::Low;
    this->BuildVersion = 0;
}

