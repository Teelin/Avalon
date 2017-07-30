// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "AvalonHUD.generated.h"

UCLASS()
class AAvalonHUD : public AHUD
{
	GENERATED_BODY()

public:
	AAvalonHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

