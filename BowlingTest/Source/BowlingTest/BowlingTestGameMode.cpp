// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "BowlingTestGameMode.h"
#include "BowlingTestBall.h"

ABowlingTestGameMode::ABowlingTestGameMode()
{
	// set default pawn class to our ball
	DefaultPawnClass = ABowlingTestBall::StaticClass();
}
