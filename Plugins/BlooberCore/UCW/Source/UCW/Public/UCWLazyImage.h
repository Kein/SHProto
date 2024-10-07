#pragma once
#include "CoreMinimal.h"
#include "CommonLazyImage.h"
#include "UCWLazyImage.generated.h"

class UObject;

UCLASS()
class UUCWLazyImage : public UCommonLazyImage {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSoftObjectPtr<UObject> LazyObject;
    
    UPROPERTY(EditAnywhere)
    bool MatchSize;
    
public:
    UUCWLazyImage();

};

