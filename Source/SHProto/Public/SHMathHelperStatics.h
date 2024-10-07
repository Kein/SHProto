#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "SHMathHelperStatics.generated.h"

UCLASS(BlueprintType)
class SHPROTO_API USHMathHelperStatics : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    USHMathHelperStatics();

    UFUNCTION(BlueprintPure)
    static void Vector2DToAngleAndLength(float& OutAngle, float& OutLength, const FVector2D& Vector, float ZeroVectorAngle);
    
    UFUNCTION(BlueprintPure)
    static float Vector2DToAngle(const FVector2D& Vector, float ZeroVectorAngle);
    
    UFUNCTION(BlueprintPure)
    static float SignNonZero(float Value, float ZeroValue);
    
    UFUNCTION(BlueprintPure)
    static float PlaneDot(const FPlane& Plane, const FVector& Location);
    
    UFUNCTION(BlueprintPure)
    static float MinWithoutSign(float ValueA, float ValueB);
    
    UFUNCTION(BlueprintPure)
    static float MaxWithoutSign(float ValueA, float ValueB);
    
    UFUNCTION(BlueprintPure)
    static float IfZero(float Value, float ZeroValue);
    
    UFUNCTION(BlueprintPure)
    static FVector2D HalfTimeInterpVector2D(const FVector2D& Current, const FVector2D& Target, float HalfTime, float DeltaTime, float Precision);
    
    UFUNCTION(BlueprintPure)
    static FVector HalfTimeInterpVector(const FVector& Current, const FVector& Target, float HalfTime, float DeltaTime, float Precision);
    
    UFUNCTION(BlueprintPure)
    static float HalfTimeInterp(float Current, float Target, float HalfTime, float DeltaTime, float Precision);
    
    UFUNCTION(BlueprintPure)
    static float FindAngleBetweenVectors(const FVector& A, const FVector& B, bool SignedAngle);
    
    UFUNCTION(BlueprintPure)
    static float FindAngleBetweenNormals(const FVector& A, const FVector& B, bool SignedAngle);
    
    UFUNCTION(BlueprintPure)
    static void AverageOfFloatArray(const TArray<float>& FloatArray, float& AverageValue);
    
    UFUNCTION(BlueprintPure)
    static FVector2D AngleToVector2D(float Angle);
    
    UFUNCTION(BlueprintPure)
    static FVector2D AngleAndLengthToVector2D(float Angle, float Length);
    
};

