#pragma once
#include "CoreMinimal.h"
#include "SHPostprocessFilmOverride.generated.h"

USTRUCT(BlueprintType)
struct POSTPROCESSVOLUMEEX_API FSHPostprocessFilmOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FilmSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FilmToe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FilmShoulder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FilmBlackClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bOverride_FilmWhiteClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FilmSlope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FilmToe;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FilmShoulder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FilmBlackClip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Interp)
    float FilmWhiteClip;
    
    FSHPostprocessFilmOverride();
};

