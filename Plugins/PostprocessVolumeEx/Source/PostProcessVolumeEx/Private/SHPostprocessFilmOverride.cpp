#include "SHPostprocessFilmOverride.h"

FSHPostprocessFilmOverride::FSHPostprocessFilmOverride() {
    this->bOverride_FilmSlope = false;
    this->bOverride_FilmToe = false;
    this->bOverride_FilmShoulder = false;
    this->bOverride_FilmBlackClip = false;
    this->bOverride_FilmWhiteClip = false;
    this->FilmSlope = 0.00f;
    this->FilmToe = 0.00f;
    this->FilmShoulder = 0.00f;
    this->FilmBlackClip = 0.00f;
    this->FilmWhiteClip = 0.00f;
}

