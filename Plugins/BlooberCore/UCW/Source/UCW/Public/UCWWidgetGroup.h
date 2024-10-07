#pragma once
#include "CoreMinimal.h"
#include "Groups\CommonWidgetGroupBase.h"
// #include "OnSelectionClearedDelegate.h"
#include "UCWWidgetGroupDelegateDelegate.h"
#include "UCWWidgetGroup.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnSelectionCleared);

class UUCWButtonBase;

UCLASS()
class UCW_API UUCWWidgetGroup : public UCommonWidgetGroupBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bSelectionRequired;
    
public:
    UPROPERTY(BlueprintAssignable)
    FUCWWidgetGroupDelegate OnSelectedButtonBaseChanged;
    
    UPROPERTY(BlueprintAssignable)
    FOnSelectionCleared OnSelectionCleared;
    
    UUCWWidgetGroup();

    UFUNCTION(BlueprintCallable)
    void SetSelectionRequired(bool bRequireSelection);
    
    UFUNCTION(BlueprintCallable)
    void SelectPreviousButton(bool bAllowWrap);
    
    UFUNCTION(BlueprintCallable)
    void SelectNextButton(bool bAllowWrap);
    
    UFUNCTION(BlueprintCallable)
    void SelectButtonAtIndex(int32 ButtonIndex, const bool bAllowSound);
    
    UFUNCTION(BlueprintPure)
    bool HasAnyButtons() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetSelectedButtonIndex() const;
    
    UFUNCTION(BlueprintPure)
    UUCWButtonBase* GetSelectedButtonBase() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetHoveredButtonIndex() const;
    
    UFUNCTION(BlueprintPure)
    int32 GetButtonCount() const;
    
    UFUNCTION(BlueprintPure)
    UUCWButtonBase* GetButtonBaseAtIndex(int32 Index) const;
    
    UFUNCTION(BlueprintPure)
    int32 FindButtonIndex(const UUCWButtonBase* ButtonToFind) const;
    
    UFUNCTION(BlueprintCallable)
    void DeselectAll();
    
};

