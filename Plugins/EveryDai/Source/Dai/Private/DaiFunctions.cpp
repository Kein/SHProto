#include "DaiFunctions.h"
#include "Templates/SubclassOf.h"

UDaiFunctions::UDaiFunctions() {
}

int32 UDaiFunctions::toBitmask(int32 Value) {
    return 0;
}

int32 UDaiFunctions::setBit(int32 bitmask, int32 Index) {
    return 0;
}

AActor* UDaiFunctions::selectNearestActor(const TArray<AActor*>& Actors, FVector Origin, TSubclassOf<AActor> ActorClass) {
    return NULL;
}

UObject* UDaiFunctions::provideSingleObject(const FDaiContext& query, UObject* Context, AActor* caller, UClass* objectClass) {
    return NULL;
}

TArray<UObject*> UDaiFunctions::provideObjectSet(const FDaiContext& query, UObject* Context, AActor* caller, UClass* objectClass) {
    return TArray<UObject*>();
}

UAnimMontage* UDaiFunctions::playDynamicMontage(USkeletalMeshComponent* Mesh, const FDaiAnimPlayParams& playParams, float PlayRate, int32 LoopCount) {
    return NULL;
}

bool UDaiFunctions::MaskedSphereTraceSingleByProfile(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, FHitResult& OutHit, TEnumAsByte<EMaskFilter> maskFilter) {
    return false;
}

FDaiContext UDaiFunctions::makeReferenceQuery(AActor* reference) {
    return FDaiContext{};
}

bool UDaiFunctions::isPlayingSlotAnimation(UAnimInstance* AnimInstance, FName SlotName, bool IgnoreIfBlendingOut) {
    return false;
}

bool UDaiFunctions::IsComponentVisibleByPlayer(APlayerController* PlayerCtrl, USceneComponent* Component, float FOVDownScale) {
    return false;
}

bool UDaiFunctions::IsComponentTraceableByPlayer(APlayerController* PlayerCtrl, USceneComponent* Component, TArray<AActor*> IgnoreActors, ETraceableByPlayerLevel TraceLevel, ETraceableByPlayerConditions TraceCondition) {
    return false;
}

bool UDaiFunctions::IsComponentMasked(UPrimitiveComponent* Component, TEnumAsByte<EMaskFilter> SearchedMask) {
    return false;
}

bool UDaiFunctions::IsActorVisibleByPlayer(APlayerController* PlayerCtrl, AActor* Actor, float FOVDownScale) {
    return false;
}

bool UDaiFunctions::IsActorTraceableByPlayer(APlayerController* PlayerCtrl, AActor* Actor, TArray<AActor*> IgnoreActors, ETraceableByPlayerLevel TraceLevel, ETraceableByPlayerConditions TraceCondition) {
    return false;
}

bool UDaiFunctions::hasSlotAnimation(UAnimMontage* Montage, FName SlotName) {
    return false;
}

bool UDaiFunctions::hasGameplayTag(AActor* Actor, FGameplayTag Tag, bool checkComponents) {
    return false;
}

bool UDaiFunctions::hasBit(int32 bitmask, int32 Index) {
    return false;
}

UObject* UDaiFunctions::getSingleObject(const FDaiContext& query, UObject* Context, AActor* caller, UClass* objectClass) {
    return NULL;
}

TArray<UObject*> UDaiFunctions::getObjectSet(const FDaiContext& query, UObject* Context, AActor* caller, UClass* objectClass) {
    return TArray<UObject*>();
}

UAnimSequence* UDaiFunctions::getAnimFromSection(UAnimMontage* Montage, FName Section) {
    return NULL;
}

UAnimationAsset* UDaiFunctions::getAnimByTags(AActor* Actor, FGameplayTagContainer Tags, FDaiAnimPlayParams& playParams, bool checkComponents) {
    return NULL;
}

UAnimationAsset* UDaiFunctions::GetAnimByTag(AActor* Actor, FGameplayTag Tag, FDaiAnimPlayParams& playParams, bool checkComponents) {
    return NULL;
}

UAnimationAsset* UDaiFunctions::getAnimByAngle(AActor* Actor, FGameplayTagContainer Tags, float hangle, FDaiAnimPlayParams& playParams, bool checkComponents) {
    return NULL;
}

AActor* UDaiFunctions::findNearestActorByTag(const UObject* Context, FVector Origin, FName Tag, TSubclassOf<AActor> ActorClass) {
    return NULL;
}

AActor* UDaiFunctions::findNearestActorByGameplayTag(const UObject* Context, FVector Origin, FGameplayTag Tag, TSubclassOf<AActor> ActorClass) {
    return NULL;
}

void UDaiFunctions::findAllActorsWithInterface(const UObject* Context, FGameplayTag Tag, TSubclassOf<UInterface> ainterface, TArray<AActor*>& OutActors) {
}

void UDaiFunctions::FindAllActorsWithComponent(UObject* Context, TSubclassOf<UActorComponent> ActorComponent, TArray<AActor*>& OutActors) {
}

void UDaiFunctions::findAllActorsByTag(const UObject* Context, FName Tag, TSubclassOf<AActor> ActorClass, TArray<AActor*>& Actors) {
}

void UDaiFunctions::findAllActorsByGameplayTag(const UObject* Context, FGameplayTag Tag, TSubclassOf<AActor> ActorClass, TArray<AActor*>& Actors) {
}

AActor* UDaiFunctions::findActorWithInterface(const UObject* Context, FGameplayTag Tag, TSubclassOf<UInterface> ainterface) {
    return NULL;
}

AActor* UDaiFunctions::findActorByTag(const UObject* Context, FName Tag, TSubclassOf<AActor> ActorClass) {
    return NULL;
}

AActor* UDaiFunctions::findActorByName(const UObject* Context, FName Name, TSubclassOf<AActor> ActorClass, bool exact) {
    return NULL;
}

AActor* UDaiFunctions::findActorByGameplayTag(const UObject* Context, FGameplayTag Tag, TSubclassOf<AActor> ActorClass) {
    return NULL;
}

AActor* UDaiFunctions::findActorByActorName(const UObject* Context, const FDaiActorName& Name, TSubclassOf<AActor> ActorClass) {
    return NULL;
}

bool UDaiFunctions::containsAnimation(UAnimMontage* Montage, UAnimSequenceBase* anim) {
    return false;
}

int32 UDaiFunctions::clearBit(int32 bitmask, int32 Index) {
    return 0;
}

bool UDaiFunctions::CheckGameplayTags(AActor* Actor, FGameplayTagContainer Tags, EGameplayContainerMatchType matchType, bool checkComponents) {
    return false;
}

FString UDaiFunctions::blockadeToString(const FDaiBlockade& blockade) {
    return TEXT("");
}

void UDaiFunctions::blockadeSetBlocked(FDaiBlockade& blockade, bool set, FName Tag) {
}

bool UDaiFunctions::blockadeIsBlockedBy(const FDaiBlockade& blockade, FName Tag) {
    return false;
}

bool UDaiFunctions::blockadeIsBlocked(const FDaiBlockade& blockade) {
    return false;
}


