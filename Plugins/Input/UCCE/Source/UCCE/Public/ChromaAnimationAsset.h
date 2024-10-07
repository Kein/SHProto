#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "ChromaAnimationAsset.generated.h"

UCLASS()
class UCCE_API UChromaAnimationAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FName Name;
    
    UPROPERTY(VisibleAnywhere)
    FString SourcePath;
    
    UPROPERTY(VisibleAnywhere)
    int32 DataSize;
    
    UPROPERTY()
    TArray<uint8> Data;
    
    UChromaAnimationAsset();

};

