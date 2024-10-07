#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/HitResult.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "DaiActorName.h"
#include "DaiAnimPlayParams.h"
#include "DaiBlockade.h"
#include "DaiContext.h"
#include "EMaskFilter.h"
#include "ETraceableByPlayerConditions.h"
#include "ETraceableByPlayerLevel.h"
#include "Templates/SubclassOf.h"
#include "DaiFunctions.generated.h"

class AActor;
class APlayerController;
class IInterface;
class UInterface;
class UActorComponent;
class UAnimInstance;
class UAnimMontage;
class UAnimSequence;
class UAnimSequenceBase;
class UAnimationAsset;
class UObject;
class UPrimitiveComponent;
class USceneComponent;
class USkeletalMeshComponent;

UCLASS(BlueprintType)
class DAI_API UDaiFunctions : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UDaiFunctions();

    UFUNCTION(BlueprintPure)
    static int32 toBitmask(int32 Value);
    
    UFUNCTION(BlueprintPure)
    static int32 setBit(int32 bitmask, int32 Index);
    
    UFUNCTION(BlueprintPure)
    static AActor* selectNearestActor(const TArray<AActor*>& Actors, FVector Origin, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintPure)
    static UObject* provideSingleObject(const FDaiContext& query, UObject* Context, AActor* caller, UClass* objectClass);
    
    UFUNCTION(BlueprintPure)
    static TArray<UObject*> provideObjectSet(const FDaiContext& query, UObject* Context, AActor* caller, UClass* objectClass);
    
    UFUNCTION(BlueprintCallable)
    static UAnimMontage* playDynamicMontage(USkeletalMeshComponent* Mesh, const FDaiAnimPlayParams& playParams, float PlayRate, int32 LoopCount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool MaskedSphereTraceSingleByProfile(const UObject* WorldContextObject, const FVector Start, const FVector End, float Radius, FName ProfileName, bool bTraceComplex, const TArray<AActor*>& ActorsToIgnore, FHitResult& OutHit, TEnumAsByte<EMaskFilter> maskFilter);
    
    UFUNCTION(BlueprintPure)
    static FDaiContext makeReferenceQuery(AActor* reference);
    
    UFUNCTION(BlueprintPure)
    static bool isPlayingSlotAnimation(UAnimInstance* AnimInstance, FName SlotName, bool IgnoreIfBlendingOut);
    
    UFUNCTION(BlueprintCallable)
    static bool IsComponentVisibleByPlayer(APlayerController* PlayerCtrl, USceneComponent* Component, float FOVDownScale);
    
    UFUNCTION(BlueprintCallable)
    static bool IsComponentTraceableByPlayer(APlayerController* PlayerCtrl, USceneComponent* Component, TArray<AActor*> IgnoreActors, ETraceableByPlayerLevel TraceLevel, ETraceableByPlayerConditions TraceCondition);
    
    UFUNCTION(BlueprintCallable)
    static bool IsComponentMasked(UPrimitiveComponent* Component, TEnumAsByte<EMaskFilter> SearchedMask);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActorVisibleByPlayer(APlayerController* PlayerCtrl, AActor* Actor, float FOVDownScale);
    
    UFUNCTION(BlueprintCallable)
    static bool IsActorTraceableByPlayer(APlayerController* PlayerCtrl, AActor* Actor, TArray<AActor*> IgnoreActors, ETraceableByPlayerLevel TraceLevel, ETraceableByPlayerConditions TraceCondition);
    
    UFUNCTION(BlueprintPure)
    static bool hasSlotAnimation(UAnimMontage* Montage, FName SlotName);
    
    UFUNCTION(BlueprintPure)
    static bool hasGameplayTag(AActor* Actor, FGameplayTag Tag, bool checkComponents);
    
    UFUNCTION(BlueprintPure)
    static bool hasBit(int32 bitmask, int32 Index);
    
    UFUNCTION(BlueprintPure)
    static UObject* getSingleObject(const FDaiContext& query, UObject* Context, AActor* caller, UClass* objectClass);
    
    UFUNCTION(BlueprintPure)
    static TArray<UObject*> getObjectSet(const FDaiContext& query, UObject* Context, AActor* caller, UClass* objectClass);
    
    UFUNCTION(BlueprintPure)
    static UAnimSequence* getAnimFromSection(UAnimMontage* Montage, FName Section);
    
    UFUNCTION(BlueprintPure)
    static UAnimationAsset* getAnimByTags(AActor* Actor, FGameplayTagContainer Tags, FDaiAnimPlayParams& playParams, bool checkComponents);
    
    UFUNCTION(BlueprintPure)
    static UAnimationAsset* GetAnimByTag(AActor* Actor, FGameplayTag Tag, FDaiAnimPlayParams& playParams, bool checkComponents);
    
    UFUNCTION(BlueprintPure)
    static UAnimationAsset* getAnimByAngle(AActor* Actor, FGameplayTagContainer Tags, float hangle, FDaiAnimPlayParams& playParams, bool checkComponents);
    
    UFUNCTION(BlueprintPure)
    static AActor* findNearestActorByTag(const UObject* Context, FVector Origin, FName Tag, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintPure)
    static AActor* findNearestActorByGameplayTag(const UObject* Context, FVector Origin, FGameplayTag Tag, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintPure)
    static void findAllActorsWithInterface(const UObject* Context, FGameplayTag Tag, TSubclassOf<UInterface> ainterface, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintPure)
    static void FindAllActorsWithComponent(UObject* Context, TSubclassOf<UActorComponent> ActorComponent, TArray<AActor*>& OutActors);
    
    UFUNCTION(BlueprintPure)
    static void findAllActorsByTag(const UObject* Context, FName Tag, TSubclassOf<AActor> ActorClass, TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintPure)
    static void findAllActorsByGameplayTag(const UObject* Context, FGameplayTag Tag, TSubclassOf<AActor> ActorClass, TArray<AActor*>& Actors);
    
    UFUNCTION(BlueprintPure)
    static AActor* findActorWithInterface(const UObject* Context, FGameplayTag Tag, TSubclassOf<UInterface> ainterface);
    
    UFUNCTION(BlueprintPure)
    static AActor* findActorByTag(const UObject* Context, FName Tag, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintPure)
    static AActor* findActorByName(const UObject* Context, FName Name, TSubclassOf<AActor> ActorClass, bool exact);
    
    UFUNCTION(BlueprintPure)
    static AActor* findActorByGameplayTag(const UObject* Context, FGameplayTag Tag, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintPure)
    static AActor* findActorByActorName(const UObject* Context, const FDaiActorName& Name, TSubclassOf<AActor> ActorClass);
    
    UFUNCTION(BlueprintPure)
    static bool containsAnimation(UAnimMontage* Montage, UAnimSequenceBase* anim);
    
    UFUNCTION(BlueprintPure)
    static int32 clearBit(int32 bitmask, int32 Index);
    
    UFUNCTION(BlueprintPure)
    static bool CheckGameplayTags(AActor* Actor, FGameplayTagContainer Tags, EGameplayContainerMatchType matchType, bool checkComponents);
    
    UFUNCTION(BlueprintPure)
    static FString blockadeToString(const FDaiBlockade& blockade);
    
    UFUNCTION(BlueprintCallable)
    static void blockadeSetBlocked(UPARAM(Ref) FDaiBlockade& blockade, bool set, FName Tag);
    
    UFUNCTION(BlueprintPure)
    static bool blockadeIsBlockedBy(const FDaiBlockade& blockade, FName Tag);
    
    UFUNCTION(BlueprintPure)
    static bool blockadeIsBlocked(const FDaiBlockade& blockade);
    
};

