#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/SpringArmComponent.h"
#include "SHCameraDataStruct.h"
#include "SHCharacterPlaySpringArmComponent.generated.h"

class ASHCharacterPlay;
class UObject;
class USHCameraDataBlender;
class USHCameraProfilesData;

UCLASS(ClassGroup=Custom, Within=SHCharacterPlay, meta=(BlueprintSpawnableComponent))
class USHCharacterPlaySpringArmComponent : public USpringArmComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    USHCameraProfilesData* ProfilesData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CollisionBlendOutDelay;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector2D CollisionBlendInSpeeds;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float ArmLengthMin;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    bool bEnableTargetOffsetExtraHeightFromPitch;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    float TargetOffsetExtraHeightFromPitchLowInfluenceValue;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, EditAnywhere)
    FVector2D TargetOffsetExtraHeightFromPitchValuesRange;
    
    UPROPERTY(Transient)
    ASHCharacterPlay* OwnerCharacter;
    
    UPROPERTY(Transient)
    USHCameraDataBlender* ExteriorSprintCameraBlender;
    
    UPROPERTY(Transient)
    USHCameraDataBlender* InteriorCameraBlender;
    
    UPROPERTY(Transient)
    USHCameraDataBlender* InteriorSprintCameraBlender;
    
    UPROPERTY(Transient)
    TArray<USHCameraDataBlender*> CustomCameraBlenders;
    
public:
    USHCharacterPlaySpringArmComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(Exec)
    void SHDebug_Character_Camera_ValuesDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Camera_DrawDebug();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Camera_ContinousReadData();
    
    UFUNCTION(Exec)
    void SHDebug_Character_Camera_BlendsDebug();
    
    UFUNCTION(BlueprintCallable)
    void SetCustomCameraData(const UObject* Object, const FString& InCustomCameraName, const FSHCameraDataStruct InCustomCameraData, const FSHCameraDataStruct InCustomCollisionData);
    
    UFUNCTION(BlueprintCallable)
    void RequestRefreshState(const UObject* Requester);
    
    UFUNCTION(BlueprintCallable)
    bool ReneableCustomCameraData(const UObject* Object, const FString& InCustomCameraName);
    
    UFUNCTION(BlueprintPure)
    float GetCustomCameraBlendAlpha(const UObject* Object) const;
    
    UFUNCTION(BlueprintCallable)
    void ClearCustomCameraData(const UObject* Object, const bool Instant);
    
};

