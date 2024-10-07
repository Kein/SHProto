#pragma once
#include "CoreMinimal.h"
#include "DaiTagsComponent.h"
#include "MaiCoverComponent.generated.h"

class AActor;
class UMaiCoverUser;

UCLASS(ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MAI_API UMaiCoverComponent : public UDaiTagsComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool _FullCover;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadOnly, Instanced, VisibleInstanceOnly)
    TArray<UMaiCoverUser*> _Users;
    
    UMaiCoverComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION()
    void OnOverlapEnd(AActor* OverlappedActor, AActor* OtherActor);
    
    UFUNCTION()
    void OnOverlapBegin(AActor* OverlappedActor, AActor* OtherActor);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsUserInCover(UMaiCoverUser* User);
    
    UFUNCTION(BlueprintPure)
    bool IsActorInCover(AActor* Actor);
    
};

