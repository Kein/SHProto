#include "AnalyticsPerformanceRecorderSettings.h"

UAnalyticsPerformanceRecorderSettings::UAnalyticsPerformanceRecorderSettings() {
    this->PS5NCSubdirectory = TEXT("Telemetry/SilentPerfPS5");
    this->XSXNCSubdirectory = TEXT("Telemetry/SilentPerfXSX");
    this->WINNCSubdirectory = TEXT("Telemetry/SilentPerfPC");
    this->NCServer = TEXT("https://box.blooberteam.com");
    this->NCUser = TEXT("telemetry3");
    this->NCAPIKey = TEXT("2LFJ5-gwS8w-zzLM7-YYKbF-jtnRA");
    this->Preset0StartValue = 30.00f;
    this->Preset0EndValue = 55.00f;
    this->Preset0BaseRadius = 250.00f;
    this->Preset0MergeRadius = 50.00f;
    this->Preset0MergeAction = EMergeSamplesAction::Average;
    this->Preset1StartValue = 16.00f;
    this->Preset1EndValue = 32.00f;
    this->Preset1BaseRadius = 250.00f;
    this->Preset1MergeRadius = 50.00f;
    this->Preset1MergeAction = EMergeSamplesAction::TakeMax;
    this->Preset2StartValue = 8.00f;
    this->Preset2EndValue = 16.00f;
    this->Preset2BaseRadius = 250.00f;
    this->Preset2MergeRadius = 50.00f;
    this->Preset2MergeAction = EMergeSamplesAction::TakeMax;
    this->Preset3StartValue = 4000.00f;
    this->Preset3EndValue = 8000.00f;
    this->Preset3BaseRadius = 250.00f;
    this->Preset3MergeRadius = 50.00f;
    this->Preset3MergeAction = EMergeSamplesAction::Average;
    this->Preset4StartValue = 0.00f;
    this->Preset4EndValue = 2.00f;
    this->Preset4BaseRadius = 250.00f;
    this->Preset4MergeRadius = 50.00f;
    this->Preset4MergeAction = EMergeSamplesAction::TakeMax;
    this->Preset5StartValue = 9750.00f;
    this->Preset5EndValue = 11500.00f;
    this->Preset5BaseRadius = 250.00f;
    this->Preset5MergeRadius = 50.00f;
    this->Preset5MergeAction = EMergeSamplesAction::TakeMax;
    this->Preset6StartValue = 1000.00f;
    this->Preset6EndValue = 2000.00f;
    this->Preset6BaseRadius = 250.00f;
    this->Preset6MergeRadius = 50.00f;
    this->Preset6MergeAction = EMergeSamplesAction::TakeMax;
}


