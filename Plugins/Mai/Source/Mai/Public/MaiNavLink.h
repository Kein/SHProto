#pragma once
#include "CoreMinimal.h"
#include "Navigation/NavLinkProxy.h"
#include "Engine/HitResult.h"
#include "MaiLinkOwnershipDelegate.h"
#include "MaiNavAreaGetterInterface.h"
#include "MaiNavLink.generated.h"

class AActor;
class APawn;
class ULineBatchComponent;
class UNavLinkCustomComponent;
class UPrimitiveComponent;
class USphereComponent;

UCLASS()
class MAI_API AMaiNavLink : public ANavLinkProxy, public IMaiNavAreaGetterInterface {
    GENERATED_BODY()
public:
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    USphereComponent* _LinkStartCollision;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    USphereComponent* _LinkEndCollision;
    
    UPROPERTY(Instanced, VisibleDefaultsOnly)
    ULineBatchComponent* _DebugLines;
    
    UPROPERTY(BlueprintReadOnly, VisibleInstanceOnly)
    float _PortalLength;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float _PortalWidth;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    float _UsePrecision;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool _AutoAttachCollision;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere)
    bool _CheckPortalSide;
    
    UPROPERTY(BlueprintAssignable)
    FMaiLinkOwnership OnTakeOwnership;
    
    UPROPERTY(BlueprintAssignable)
    FMaiLinkOwnership OnReturnOwnership;
    
    AMaiNavLink(const FObjectInitializer& ObjectInitializer);

    UFUNCTION()
    void UpdateNavMesh();
    
    UFUNCTION(BlueprintCallable)
    void TakeOwnership(APawn* Being);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void StartUsingBy(APawn* Being, bool startSide);
    
    UFUNCTION(BlueprintImplementableEvent)
    void StartMoveToLink(APawn* Being, bool startSide);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetNavigationRelevancy(bool isRelevant);
    
    UFUNCTION(BlueprintCallable)
    void ReturnOwnership(APawn* Being);
    
protected:
    UFUNCTION()
    void OnOverlapEnd(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    
    UFUNCTION()
    void OnOverlapBegin(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsOnBeingPath(APawn* Being, bool checkFromNext) const;
    
    UFUNCTION(BlueprintPure)
    UNavLinkCustomComponent* GetSmartLinkComp() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void FinishUsingBy(APawn* Being, bool startSide);
    
public:
    UFUNCTION(BlueprintCallable)
    void ClearPathsForWaitingCharacters(bool startSide);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BreakMoveToLink(APawn* Being, bool startSide);
    

    // Fix for true pure virtual functions not being implemented
};

