#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "ESHSimpleDirectionType.h"
#include "Templates/SubclassOf.h"
#include "SHOtherStatics.generated.h"

class AActor;
class AController;
class ASHCharacterPlayGenericDeathPlayer;
class AVolume;
class UActorComponent;
class UAnimInstance;
class UAnimationAsset;
class UBoxComponent;
class UDataTable;
class UNavigationQueryFilter;
class UObject;
class UPrimitiveComponent;
class USkeletalMeshComponent;
class USkinnedMeshComponent;
class USplineComponent;
class UStaticMeshComponent;

UCLASS(BlueprintType)
class USHOtherStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USHOtherStatics();

    UFUNCTION(BlueprintCallable)
    static bool VolumeEncompassesPoint(AVolume* InVolume, FVector InCheckedPoint);
    
    UFUNCTION(BlueprintPure)
    static ESHSimpleDirectionType VectorsToSimpleDirectionType(const FVector& InVectorA, const FVector& InVectorB);
    
    UFUNCTION(BlueprintCallable)
    static void Trace_ContextObject_CPUProfiler(UObject* ContextObject);
    
    UFUNCTION(BlueprintCallable)
    static void SplitNameIntMapSortedByInt(TMap<FString, int32> StringIntMap, UPARAM(Ref) TArray<FString>& StringArray, UPARAM(Ref) TArray<int32>& IntArray, const bool bAscending);
    
    UFUNCTION(BlueprintCallable)
    static void SortIntsArray(UPARAM(Ref) TArray<int32>& Array, const bool bAscending);
    
    UFUNCTION(BlueprintCallable)
    static void SetDefaultCollisionProfile(UPrimitiveComponent* InComp);
    
    UFUNCTION(BlueprintCallable)
    static void RestoreForcedLumenReflections();
    
    UFUNCTION(BlueprintCallable)
    static void RemoveLinkedAnimInstances(UAnimInstance* AnimInstance);
    
    UFUNCTION(BlueprintCallable)
    static void LogWarnPIE(const FString& InLogString);
    
    UFUNCTION(BlueprintCallable)
    static void LogErrorPIE(const FString& InLogString);
    
    UFUNCTION(BlueprintCallable)
    static bool IsWorldLocInGenericDeathPlayerFullAreaWork(TSubclassOf<ASHCharacterPlayGenericDeathPlayer> InClass, FVector InWorldLoc);
    
    UFUNCTION(BlueprintPure)
    static bool IsSonyDemo();
    
    UFUNCTION(BlueprintCallable)
    static bool IsGoalReachable(AController* Controller, const FVector& goalLocation, TSubclassOf<UNavigationQueryFilter> filterClass, float InSearchDistance, float DistanceTolerance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool HasValidWorld(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UDataTable* GetWeaponsDataTable();
    
    UFUNCTION(BlueprintPure)
    static UDataTable* GetUseablesDataTable();
    
    UFUNCTION(BlueprintPure)
    static int32 GetShowFlagValue(const FString& InName);
    
    UFUNCTION(BlueprintPure)
    static FRotator GetRotatorsDelta(const FRotator InRot1, const FRotator InRot2);
    
    UFUNCTION(BlueprintPure)
    static float GetRotatorsComponentDelta(const float InRot1, const float InRot2);
    
    UFUNCTION(BlueprintPure)
    static FRotator GetRotatorInterpTo(const FRotator Current, const FRotator Target, float DeltaTime, float interpSpeed);
    
    UFUNCTION(BlueprintPure)
    static FVector GetRootMotionTranslation(UAnimationAsset* AnimationAsset);
    
    UFUNCTION(BlueprintPure)
    static FVector GetPreSkinPosition(USkinnedMeshComponent* Component, FName BoneName, FVector WorldPosition);
    
    UFUNCTION(BlueprintPure)
    static UDataTable* GetMapsDataTable();
    
    UFUNCTION(BlueprintPure)
    static UDataTable* GetItemsDataTable();
    
    UFUNCTION(BlueprintPure)
    static int32 GetGFrameNumber();
    
    UFUNCTION(BlueprintCallable)
    static bool GetGenericDeathPlayerFullAreaWork(TSubclassOf<ASHCharacterPlayGenericDeathPlayer> InClass, FVector& OutExtend, FVector& OutRelLoc);
    
    UFUNCTION(BlueprintCallable)
    static FTransform GetFirstViewportTransform();
    
    UFUNCTION(BlueprintPure)
    static UDataTable* GetEquipmentDataTable();
    
    UFUNCTION(BlueprintPure)
    static UAnimationAsset* GetAnimToPlay(USkeletalMeshComponent* InComponent);
    
    UFUNCTION(BlueprintCallable)
    static TArray<FVector> GenerateGridLocationsArray(FVector GridStartPoint, FIntPoint GridSize, FVector2D GridDistribution, FTransform GridWorldTransform);
    
    UFUNCTION(BlueprintCallable)
    static void ForceEnableLumenReflections();
    
    UFUNCTION(BlueprintCallable)
    static void ForceDisableLumenReflections();
    
    UFUNCTION(BlueprintPure)
    static float FInterpToConstantAngle(float Current, float Target, const float DeltaTime, const float Speed);
    
    UFUNCTION(BlueprintPure)
    static AActor* FindFurthestActor(const FVector Origin, const TArray<AActor*>& ActorsToCheck, float& Distance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugVolume(const UObject* WorldContextObject, AVolume* InVolume, bool bUseTriangulate, FLinearColor Color, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugStaticMeshComponent(const UObject* WorldContextObject, UStaticMeshComponent* StaticMeshComponent, FLinearColor Color, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugSimpleCylinder(const UObject* WorldContextObject, const FVector StartPosition, const FVector EndPosition, const float Radius, const FLinearColor& Color, const float DrawTime, const float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugSegmentRadius2D(const UObject* WorldContextObject, const FVector SegmentStart, const FVector SegmentEnd, const float Radius, const FLinearColor& Color, const float DrawTime, const float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugRadiusAtSimpleSplineComponent(UObject* WorldContextObject, USplineComponent* SplineComponent, const float Radius, const float HeightOffset, FLinearColor Color, float Duration, float Thickness);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugBoxEx(const UObject* WorldContextObject, FVector Center, FVector Box, const FRotator Rotation, FLinearColor Color, float Duration, float Thickness, int32 TopPlaneDepthPriority, int32 BottomPlaneDepthPriority, int32 SidesPlanesDepthPriority);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void DrawDebugArc(const UObject* WorldContextObject, FVector Center, const float MinAngle, const float MaxAngle, float Radius, int32 NumSegments, FLinearColor Color, float Duration, float Thickness, FVector YAxis, FVector ZAxis, bool bDrawAxis);
    
    UFUNCTION(BlueprintCallable)
    static void DisableAffectNavigation(UActorComponent* InActorComponent);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ClearWorldState(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool CanDrawLevelDebug(const AActor* InActorContext);
    
    UFUNCTION(BlueprintCallable)
    static bool BoxComponentEncompassesPoint(UBoxComponent* InBoxComponent, FVector InCheckedPoint);
    
};

