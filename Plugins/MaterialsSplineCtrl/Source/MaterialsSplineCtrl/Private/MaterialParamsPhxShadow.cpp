#include "MaterialParamsPhxShadow.h"

UMaterialParamsPhxShadow::UMaterialParamsPhxShadow(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->SphereRadius = 50.00f;
    this->SpheresCount = 16;
    this->SphereTimeCoverage = 1.50f;
    this->WobbleDistanceA = 15.00f;
    this->WobbleSpeedA = 0.50f;
    this->WobbleDistanceB = 10.00f;
    this->WobbleSpeedB = 2.00f;
    this->DebugDraw = true;
    this->Collection = NULL;
    this->BoundingSphereParamName = TEXT("BoundingSphere0");
    this->ArrayFormatPattern = TEXT("SSF%i");
    this->EntityPositionParamName = TEXT("HeroPosition");
    this->PreviousEntityPositionParamName = TEXT("HeroPositionPrev");
    this->EntityRotationParamName = TEXT("HeroRotation");
    this->PreviousEntityRotationParamName = TEXT("HeroRotationPrev");
}


