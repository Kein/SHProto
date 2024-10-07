#pragma once
#include "CoreMinimal.h"
#include "SHMonsterAnimInstance.h"
#include "SHLyingFigureAnimInstance.generated.h"

class USHLyingFigureAnimInstanceStateData;
class USHLyingFigureCrawlingLocomotionAnimInstance;
class USHLyingFigureLocomotionAnimInstance;
class USHLyingFigureStandingLocomotionAnimInstance;

UCLASS(NonTransient)
class SHPROTO_API USHLyingFigureAnimInstance : public USHMonsterAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditDefaultsOnly)
    bool bIsCrawling;
    
public:
    USHLyingFigureAnimInstance();

protected:
    UFUNCTION(BlueprintPure)
    USHLyingFigureStandingLocomotionAnimInstance* GetLyingFigureStandingLocomotionAnimInstance() const;
    
    UFUNCTION(BlueprintPure)
    USHLyingFigureCrawlingLocomotionAnimInstance* GetLyingFigureCrawlingLocomotionAnimInstance() const;
    
public:
    UFUNCTION(BlueprintPure)
    USHLyingFigureAnimInstanceStateData* GetLyingFigureAnimInstanceStateData() const;
    
protected:
    UFUNCTION(BlueprintPure)
    USHLyingFigureLocomotionAnimInstance* GetActiveLyingFigureLocomotionAnimInstance() const;
    
};

