// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Input/Reply.h"
#include "IDetailCustomization.h"

class FEdModeCyLand;
class IDetailLayoutBuilder;

class FCyLandSplineDetails : public IDetailCustomization
{
public:
	/** Makes a new instance of this detail layout class for a specific detail view requesting it */
	static TSharedRef<IDetailCustomization> MakeInstance();

	/** IDetailCustomization interface */
	virtual void CustomizeDetails(IDetailLayoutBuilder& DetailBuilder) override;

private:
	FEdModeCyLand* GetEditorMode() const;
	FReply OnSelectConnectedControlPointsButtonClicked();
	FReply OnSelectConnectedSegmentsButtonClicked();
	FReply OnMoveToCurrentLevelButtonClicked();
	bool IsMoveToCurrentLevelButtonEnabled() const;
};
