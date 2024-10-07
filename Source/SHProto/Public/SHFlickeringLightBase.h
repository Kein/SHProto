#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "ESHFlickerGroupState.h"
#include "SHFlickerGroup.h"
#include "SHFlickerGroupStatus.h"
#include "SHFlickerLightSavedIntensities.h"
#include "SHFlickeringLightBase.generated.h"

class ASHFlickeringLightBase;
class UAkAudioEvent;
class UAkComponent;

UCLASS()
class SHPROTO_API ASHFlickeringLightBase : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* BuzzSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAkAudioEvent* OnOffSound;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OnOffThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float OffThreshold;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float BuzzThreshold;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere, EditFixedSize)
    TArray<FSHFlickerGroupStatus> GroupStates;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bEditModeEnabled;
    
protected:
    UPROPERTY(Instanced, Transient)
    UAkComponent* BuzzSoundComponent;
    
    UPROPERTY(Transient)
    TArray<FSHFlickerGroup> Groups;
    
    UPROPERTY(AdvancedDisplay, VisibleInstanceOnly)
    TArray<FSHFlickerLightSavedIntensities> SavedIntensities;
    
    UPROPERTY()
    bool bEditModeEnabledPrev;
    
public:
    ASHFlickeringLightBase(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void UpdateTemperatureAndBaseIntensity(float Temperature, float IntensityScale);
    
    UFUNCTION(BlueprintCallable)
    void UpdateOffTagsInGroups();
    
    UFUNCTION(BlueprintCallable)
    void UpdateNativeParameters(bool EnableRandomFlicker, float LightIntensityMin, float LightIntensityMax, float BlinkingMin, float BlinkingMax, float ChangeTimeMin, float ChangeTimeMax, float ShutdownIntensity, float GentleShutdownTime, bool ForceGentleShutdown, bool BlinkingIsAbsolute);
    
    UFUNCTION(BlueprintCallable)
    void UpdateNativeFlickers(bool RandomFlickerEnabled, FLinearColor EmissionColor, bool EmissionReplaceMtl, bool EmissionReplaceLgh, float ExternalScaleLight, float ExternalScaleMaterial);
    
    UFUNCTION(BlueprintCallable)
    void StopBuzzSound();
    
    UFUNCTION(BlueprintCallable)
    void StepFlickersInEditor(float DeltaSeconds);
    
    UFUNCTION(BlueprintCallable)
    void StartBuzzSound();
    
    UFUNCTION(BlueprintCallable)
    void SetWantTickEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetGroupState(FName Group, ESHFlickerGroupState State);
    
    UFUNCTION(BlueprintCallable)
    void PrepareFlickerGroups(float Temperature, float IntensityScale, bool ResetGroups);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnPostConstruction();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEditorRefresh();
    
    UFUNCTION(BlueprintPure)
    int32 GetNumberOfBrokenComponents() const;
    
    UFUNCTION(BlueprintCallable)
    ESHFlickerGroupState GetGroupState(FName Group);
    
    UFUNCTION(BlueprintPure)
    float GetAverageIntensity() const;
    
    UFUNCTION(BlueprintCallable)
    static TArray<ASHFlickeringLightBase*> GetAllFlickeringLights();
    
    UFUNCTION(BlueprintPure)
    bool EditModeEnabled() const;
    
};

