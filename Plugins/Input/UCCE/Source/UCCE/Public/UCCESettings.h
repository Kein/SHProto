#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "ChromaAnimProxy.h"
#include "ChromaSDKAppInfo.h"
#include "UCCESettings.generated.h"

class UAkAudioEvent;
class UAkRtpc;

UCLASS(DefaultConfig, MinimalAPI, Config=Input)
class UUCCESettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    float GamepadLastUseStartTimeSec;
    
    UPROPERTY(Config, EditAnywhere)
    float GamepadLastUseEndTimeSec;
    
    UPROPERTY(Config, EditAnywhere)
    float XSXForceFeedbackScale;
    
    UPROPERTY(Config, EditAnywhere)
    float Ps5ForceFeedbackScale;
    
    UPROPERTY(Config, EditAnywhere)
    bool bUseWWiseMotion;
    
    UPROPERTY(Config, EditAnywhere)
    FString MotionAudioDeviceName;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UAkAudioEvent> WWiseMotionStopAllEvent;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UAkRtpc> WWiseMotionScale;
    
    UPROPERTY(Config, EditAnywhere)
    TSoftObjectPtr<UAkRtpc> WWiseMotionCtrlType;
    
    UPROPERTY(Config, EditAnywhere)
    bool bChromaSupported;
    
    UPROPERTY(Config, EditAnywhere)
    FChromaSDKAppInfo ChromaAppInfo;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 ForwardPadColor;
    
    UPROPERTY(Config, EditAnywhere)
    TMap<FName, FChromaAnimProxy> ChromaAnimationsMap;
    
    UUCCESettings();

};

