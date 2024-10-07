#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Animation/AnimInstance.h"
#include "AngleToAnimationRangeMap.h"
#include "LongWeaponAimObstacleCheckPayload.h"
#include "SHFirearmAimOffsetAnimInstance.generated.h"

class ASHItemWeapon;
class UAnimSequence;

UCLASS(NonTransient)
class SHPROTO_API USHFirearmAimOffsetAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bIsAiming;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bHasAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D HeadRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D AimOffsetArms;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAngleToAnimationRangeMap Offset_NoHead_Vertical_Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAngleToAnimationRangeMap Offset_Head_Vertical_Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAngleToAnimationRangeMap Offset_Hands_Vertical_Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAngleToAnimationRangeMap Offset_NoHead_Horizontal_Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAngleToAnimationRangeMap Offset_Head_Horizontal_Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAngleToAnimationRangeMap Offset_Hands_Horizontal_Range;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* NearWallAimPoseAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    FName AimObstacleTraceProfileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Offset_NoHead_Vertical_Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Offset_Head_Vertical_Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Offset_Hands_Vertical_Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Offset_NoHead_Horizontal_Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Offset_Head_Horizontal_Animation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UAnimSequence* Offset_Hands_Horizontal_Animation;
    
    USHFirearmAimOffsetAnimInstance();

    UFUNCTION(BlueprintPure)
    static float MapRangeClampedWithZeroInTheMidle(float Value, float InRangeA, float InRangeB, float OutRangeA, float OutRangeB);
    
protected:
    UFUNCTION(BlueprintPure)
    bool LongWeaponAimObstacleSingleCheck(const FLongWeaponAimObstacleCheckPayload& Payload) const;
    
    UFUNCTION(BlueprintPure)
    bool LongWeaponAimObstacleRangeCheck(const FLongWeaponAimObstacleCheckPayload& Payload) const;
    
    UFUNCTION(BlueprintPure)
    bool IsAimOffsetEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    void InterruptEquipToAim(float BlendOutTime);
    
    UFUNCTION(BlueprintPure)
    ASHItemWeapon* GetWeapon() const;
    
};

