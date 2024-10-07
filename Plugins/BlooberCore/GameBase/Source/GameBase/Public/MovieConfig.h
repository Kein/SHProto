#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MovieConfig.generated.h"

class ULocalizedOverlays;

UCLASS(BlueprintType)
class GAMEBASE_API UMovieConfig : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadOnly, EditAnywhere)
    FString FilePath;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString MovieName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    ULocalizedOverlays* Subtitles;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float UnskipableLen;
    
    UMovieConfig();

};

