#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "EBeingWalkType.h"
#include "EBeingWalkingStance.h"
#include "TickableFloat.h"
#include "BeingFunctions.generated.h"

class AActor;
class AController;
class APawn;
class UPrimitiveComponent;

UCLASS(BlueprintType)
class BEING_API UBeingFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBeingFunctions();

    UFUNCTION(BlueprintCallable)
    static void tickableFloatTick(UPARAM(Ref) FTickableFloat& tfloat, float deltasec);
    
    UFUNCTION(BlueprintCallable)
    static void tickableFloatSetWithStep(UPARAM(Ref) FTickableFloat& tfloat, float Value, float Step);
    
    UFUNCTION(BlueprintCallable)
    static void tickableFloatSetInTime(UPARAM(Ref) FTickableFloat& tfloat, float Value, float Duration);
    
    UFUNCTION(BlueprintCallable)
    static void tickableFloatSet(UPARAM(Ref) FTickableFloat& tfloat, float Value);
    
    UFUNCTION(BlueprintPure)
    static float tickableFloatGet(const FTickableFloat& tfloat);
    
    UFUNCTION(BlueprintCallable)
    static void setRootMotionTranslationScale(APawn* Being, float Scale);
    
    UFUNCTION(BlueprintCallable)
    static void setMoveIgnoreMask(AActor* Actor, uint8 Mask);
    
    UFUNCTION(BlueprintCallable)
    static void setMaskFilter(AActor* Actor, uint8 maskFilter);
    
    UFUNCTION(BlueprintCallable)
    static void setComponentMoveIgnoreMask(UPrimitiveComponent* Primitive, uint8 Mask);
    
    UFUNCTION(BlueprintCallable)
    static void setComponentMaskFilter(UPrimitiveComponent* Primitive, uint8 maskFilter);
    
    UFUNCTION(BlueprintCallable)
    static void putOnGround(APawn* Being, float Time);
    
    UFUNCTION(BlueprintCallable)
    static void MuteFootsteps(APawn* Being, bool mute);
    
    UFUNCTION(BlueprintPure)
    static FQuat makeQuatFromAxes(FVector Forward, FVector Right, FVector Up);
    
    UFUNCTION(BlueprintPure)
    static bool isFollowingAPath(const APawn* Being);
    
    UFUNCTION(BlueprintCallable)
    static void IgnoreNextFalling(APawn* Being);
    
    UFUNCTION(BlueprintPure)
    static EBeingWalkType getWalkingStanceType(EBeingWalkingStance stance);
    
    UFUNCTION(BlueprintPure)
    static EBeingWalkingStance getWalkingStanceEnum(APawn* Being);
    
    UFUNCTION(BlueprintPure)
    static FVector GetRequestedVelocity(const APawn* Being);
    
    UFUNCTION(BlueprintPure)
    static APawn* getPawn(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static FVector getGroundLocation(AActor* Actor);
    
    UFUNCTION(BlueprintPure)
    static FVector getDesiredVelocity(const APawn* Being);
    
    UFUNCTION(BlueprintPure)
    static AController* GetController(AActor* Actor);
    
    UFUNCTION(BlueprintCallable)
    static void forceYawRotation(APawn* Being, float DeltaSeconds, float localYaw, float clampYaw, float interpSpeed);
    
    UFUNCTION(BlueprintCallable)
    static void forceRollRotation(APawn* Being, float DeltaSeconds, float localYaw, float yawMul, float interpSpeed);
    
    UFUNCTION(BlueprintCallable)
    static bool findLocationNearWall(APawn* Being, float minDistance, FVector& Location);
    
    UFUNCTION(BlueprintPure)
    static float findDistanceToWall(APawn* Being, FVector InLocation, FVector& nearestPoint);
    
    UFUNCTION(BlueprintCallable)
    static void fastRotate(APawn* Being, float DeltaSeconds, float localYaw, float minYaw, float maxYaw, float interpSpeed);
    
    UFUNCTION(BlueprintCallable)
    static void clearWalkingStanceEnum(APawn* Being, uint8 Priority);
    
    UFUNCTION(BlueprintCallable)
    static bool changeWalkingStanceEnum(APawn* Being, EBeingWalkingStance stance, uint8 Priority);
    
    UFUNCTION(BlueprintPure)
    static FRotator changeRotationSpace(FVector Forward, FVector Right, FVector Up, FRotator Rotation);
    
    UFUNCTION(BlueprintPure)
    static FVector changeDirectionSpace(FVector Forward, FVector Right, FVector Up, FVector Direction);
    
};

