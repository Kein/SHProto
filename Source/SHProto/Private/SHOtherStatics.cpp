#include "SHOtherStatics.h"
#include "Templates/SubclassOf.h"

USHOtherStatics::USHOtherStatics() {
}

bool USHOtherStatics::VolumeEncompassesPoint(AVolume* InVolume, FVector InCheckedPoint) {
    return false;
}

ESHSimpleDirectionType USHOtherStatics::VectorsToSimpleDirectionType(const FVector& InVectorA, const FVector& InVectorB) {
    return ESHSimpleDirectionType::Undefined;
}

void USHOtherStatics::Trace_ContextObject_CPUProfiler(UObject* ContextObject) {
}

void USHOtherStatics::SplitNameIntMapSortedByInt(TMap<FString, int32> StringIntMap, TArray<FString>& StringArray, TArray<int32>& IntArray, const bool bAscending) {
}

void USHOtherStatics::SortIntsArray(TArray<int32>& Array, const bool bAscending) {
}

void USHOtherStatics::SetDefaultCollisionProfile(UPrimitiveComponent* InComp) {
}

void USHOtherStatics::RestoreForcedLumenReflections() {
}

void USHOtherStatics::RemoveLinkedAnimInstances(UAnimInstance* AnimInstance) {
}

void USHOtherStatics::LogWarnPIE(const FString& InLogString) {
}

void USHOtherStatics::LogErrorPIE(const FString& InLogString) {
}

bool USHOtherStatics::IsWorldLocInGenericDeathPlayerFullAreaWork(TSubclassOf<ASHCharacterPlayGenericDeathPlayer> InClass, FVector InWorldLoc) {
    return false;
}

bool USHOtherStatics::IsSonyDemo() {
    return false;
}

bool USHOtherStatics::IsGoalReachable(AController* Controller, const FVector& goalLocation, TSubclassOf<UNavigationQueryFilter> filterClass, float InSearchDistance, float DistanceTolerance) {
    return false;
}

bool USHOtherStatics::HasValidWorld(UObject* WorldContextObject) {
    return false;
}

UDataTable* USHOtherStatics::GetWeaponsDataTable() {
    return NULL;
}

UDataTable* USHOtherStatics::GetUseablesDataTable() {
    return NULL;
}

int32 USHOtherStatics::GetShowFlagValue(const FString& InName) {
    return 0;
}

FRotator USHOtherStatics::GetRotatorsDelta(const FRotator InRot1, const FRotator InRot2) {
    return FRotator{};
}

float USHOtherStatics::GetRotatorsComponentDelta(const float InRot1, const float InRot2) {
    return 0.0f;
}

FRotator USHOtherStatics::GetRotatorInterpTo(const FRotator Current, const FRotator Target, float DeltaTime, float interpSpeed) {
    return FRotator{};
}

FVector USHOtherStatics::GetRootMotionTranslation(UAnimationAsset* AnimationAsset) {
    return FVector{};
}

FVector USHOtherStatics::GetPreSkinPosition(USkinnedMeshComponent* Component, FName BoneName, FVector WorldPosition) {
    return FVector{};
}

UDataTable* USHOtherStatics::GetMapsDataTable() {
    return NULL;
}

UDataTable* USHOtherStatics::GetItemsDataTable() {
    return NULL;
}

int32 USHOtherStatics::GetGFrameNumber() {
    return 0;
}

bool USHOtherStatics::GetGenericDeathPlayerFullAreaWork(TSubclassOf<ASHCharacterPlayGenericDeathPlayer> InClass, FVector& OutExtend, FVector& OutRelLoc) {
    return false;
}

FTransform USHOtherStatics::GetFirstViewportTransform() {
    return FTransform{};
}

UDataTable* USHOtherStatics::GetEquipmentDataTable() {
    return NULL;
}

UAnimationAsset* USHOtherStatics::GetAnimToPlay(USkeletalMeshComponent* InComponent) {
    return NULL;
}

TArray<FVector> USHOtherStatics::GenerateGridLocationsArray(FVector GridStartPoint, FIntPoint GridSize, FVector2D GridDistribution, FTransform GridWorldTransform) {
    return TArray<FVector>();
}

void USHOtherStatics::ForceEnableLumenReflections() {
}

void USHOtherStatics::ForceDisableLumenReflections() {
}

float USHOtherStatics::FInterpToConstantAngle(float Current, float Target, const float DeltaTime, const float Speed) {
    return 0.0f;
}

AActor* USHOtherStatics::FindFurthestActor(const FVector Origin, const TArray<AActor*>& ActorsToCheck, float& Distance) {
    return NULL;
}

void USHOtherStatics::DrawDebugVolume(const UObject* WorldContextObject, AVolume* InVolume, bool bUseTriangulate, FLinearColor Color, float Duration, float Thickness) {
}

void USHOtherStatics::DrawDebugStaticMeshComponent(const UObject* WorldContextObject, UStaticMeshComponent* StaticMeshComponent, FLinearColor Color, float Duration, float Thickness) {
}

void USHOtherStatics::DrawDebugSimpleCylinder(const UObject* WorldContextObject, const FVector StartPosition, const FVector EndPosition, const float Radius, const FLinearColor& Color, const float DrawTime, const float Thickness) {
}

void USHOtherStatics::DrawDebugSegmentRadius2D(const UObject* WorldContextObject, const FVector SegmentStart, const FVector SegmentEnd, const float Radius, const FLinearColor& Color, const float DrawTime, const float Thickness) {
}

void USHOtherStatics::DrawDebugRadiusAtSimpleSplineComponent(UObject* WorldContextObject, USplineComponent* SplineComponent, const float Radius, const float HeightOffset, FLinearColor Color, float Duration, float Thickness) {
}

void USHOtherStatics::DrawDebugBoxEx(const UObject* WorldContextObject, FVector Center, FVector Box, const FRotator Rotation, FLinearColor Color, float Duration, float Thickness, int32 TopPlaneDepthPriority, int32 BottomPlaneDepthPriority, int32 SidesPlanesDepthPriority) {
}

void USHOtherStatics::DrawDebugArc(const UObject* WorldContextObject, FVector Center, const float MinAngle, const float MaxAngle, float Radius, int32 NumSegments, FLinearColor Color, float Duration, float Thickness, FVector YAxis, FVector ZAxis, bool bDrawAxis) {
}

void USHOtherStatics::DisableAffectNavigation(UActorComponent* InActorComponent) {
}

void USHOtherStatics::ClearWorldState(UObject* WorldContextObject) {
}

bool USHOtherStatics::CanDrawLevelDebug(const AActor* InActorContext) {
    return false;
}

bool USHOtherStatics::BoxComponentEncompassesPoint(UBoxComponent* InBoxComponent, FVector InCheckedPoint) {
    return false;
}


