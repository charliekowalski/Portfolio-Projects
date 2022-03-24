// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "PP3_FPS_SurviosHUD.generated.h"

UCLASS()
class APP3_FPS_SurviosHUD : public AHUD
{
	GENERATED_BODY()

public:
	APP3_FPS_SurviosHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

