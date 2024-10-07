#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DeveloperSettings.h"
#include "EMergeSamplesAction.h"
#include "AnalyticsPerformanceRecorderSettings.generated.h"

UCLASS(DefaultConfig, Config=Game)
class SHPROTO_API UAnalyticsPerformanceRecorderSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    FString PS5NCSubdirectory;
    
    UPROPERTY(Config, EditAnywhere)
    FString XSXNCSubdirectory;
    
    UPROPERTY(Config, EditAnywhere)
    FString WINNCSubdirectory;
    
    UPROPERTY(Config, EditAnywhere)
    FString NCServer;
    
    UPROPERTY(Config, EditAnywhere)
    FString NCUser;
    
    UPROPERTY(Config, EditAnywhere)
    FString NCAPIKey;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor Preset0StartColor;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset0StartValue;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor Preset0EndColor;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset0EndValue;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset0BaseRadius;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset0MergeRadius;
    
    UPROPERTY(Config, EditAnywhere)
    EMergeSamplesAction Preset0MergeAction;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor Preset1StartColor;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset1StartValue;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor Preset1EndColor;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset1EndValue;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset1BaseRadius;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset1MergeRadius;
    
    UPROPERTY(Config, EditAnywhere)
    EMergeSamplesAction Preset1MergeAction;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor Preset2StartColor;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset2StartValue;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor Preset2EndColor;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset2EndValue;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset2BaseRadius;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset2MergeRadius;
    
    UPROPERTY(Config, EditAnywhere)
    EMergeSamplesAction Preset2MergeAction;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor Preset3StartColor;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset3StartValue;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor Preset3EndColor;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset3EndValue;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset3BaseRadius;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset3MergeRadius;
    
    UPROPERTY(Config, EditAnywhere)
    EMergeSamplesAction Preset3MergeAction;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor Preset4StartColor;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset4StartValue;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor Preset4EndColor;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset4EndValue;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset4BaseRadius;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset4MergeRadius;
    
    UPROPERTY(Config, EditAnywhere)
    EMergeSamplesAction Preset4MergeAction;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor Preset5StartColor;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset5StartValue;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor Preset5EndColor;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset5EndValue;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset5BaseRadius;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset5MergeRadius;
    
    UPROPERTY(Config, EditAnywhere)
    EMergeSamplesAction Preset5MergeAction;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor Preset6StartColor;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset6StartValue;
    
    UPROPERTY(Config, EditAnywhere)
    FLinearColor Preset6EndColor;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset6EndValue;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset6BaseRadius;
    
    UPROPERTY(Config, EditAnywhere)
    float Preset6MergeRadius;
    
    UPROPERTY(Config, EditAnywhere)
    EMergeSamplesAction Preset6MergeAction;
    
    UAnalyticsPerformanceRecorderSettings();

};

