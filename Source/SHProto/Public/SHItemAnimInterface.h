#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "EItemInvestigationType.h"
#include "SHItemAnimInterface.generated.h"

UINTERFACE(Blueprintable)
class USHItemAnimInterface : public UInterface {
    GENERATED_BODY()
};

class ISHItemAnimInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayPostInvestigation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayOutroInvestigation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayMainInvestigation(EItemInvestigationType InvestigationType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void PlayIntroInvestigation();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InvestigationTypeSettingChanged(EItemInvestigationType InvestigationType);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InvestigationInputChanged(float InvestigationAnimationFrame);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void InvestigationFlipSettingsChanged(float InvestigationFlipPlayRate, float InvestigationFlipStartTime, int32 InvestigationFlipSide, bool InvestigationFlip);
    
};

