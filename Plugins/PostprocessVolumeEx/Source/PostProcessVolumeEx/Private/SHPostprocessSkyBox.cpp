#include "SHPostprocessSkyBox.h"

FSHPostprocessSkyBox::FSHPostprocessSkyBox() {
    this->Visible = false;
    this->Orientation = 0.00f;
    this->Use2DClouds = false;
    this->UseAtmosphericSky = false;
    this->CloudsDensity = 0.00f;
    this->Clouds = NULL;
    this->Cubemap = NULL;
    this->HDRExponent = 0.00f;
    this->HDRScale = 0.00f;
    this->HDRScaleOutside = 0.00f;
    this->AnimateCubemap = false;
    this->CubemapWrapStrength = 0.00f;
    this->CubemapDisplaceStrength = 0.00f;
    this->HorizonFalloff = 0.00f;
    this->UseMoon = false;
    this->MoonTexture = NULL;
    this->UseStars = false;
    this->StarsIntensity = 0.00f;
    this->SkyLightDirectionFromDirectional = false;
    this->SunBrightness = 0.00f;
    this->SunHardness = 0.00f;
    this->SunRadius = 0.00f;
    this->SunRimHardness = 0.00f;
    this->SunRimRadius = 0.00f;
    this->SkyBoxOpacity = 0.00f;
    this->SkyBoxCutOutReplace = false;
    this->SkyBoxCutOutSmooth = 0.00f;
}

