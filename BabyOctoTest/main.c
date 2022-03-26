#include <gb/gb.h>
#include <stdio.h>
#include <stdint.h>
#include "Player.h"
#include "SimpleBubbleMapData.h"
#include "SimpleBubbleSpriteData.h"


// FUNCTIONS
void Init();
void Update();

// INPUT
void PollInput();
void OnPushUp();
void OnPushDown();
void OnPushLeft();
void OnPushRight();

// VARIABLES
struct BabyOctoData PlayerOctoData;



void main()
{
	Init();
	
	Update();

}

void Init()
{
	set_bkg_data(0, 6, SimpleBubbleTiles);
	set_bkg_tiles(0, 0, 40, 18, SimpleBubbleMapData);

	SpawnBabyOcto(&PlayerOctoData, 60, 78);
	SHOW_BKG;
	SHOW_SPRITES;
	DISPLAY_ON;
}

void Update()
{
	while (1)
	{
		PollInput();
		scroll_bkg(1, 0);
		delay(100);
	}
}

void PollInput()
{
	switch(joypad())
	{
		case J_UP:
			OnPushUp();
			break;
		case J_DOWN:
			OnPushDown();
			break;
		case J_LEFT:
			OnPushLeft();
			break;
		case J_RIGHT:
			OnPushRight();
			break;
		default:
			break;
	}
}

void OnPushUp()
{
	UpdateBabyOcto(&PlayerOctoData);
	MoveBabyOcto(&PlayerOctoData, 0, -10);
	delay(300);
}

void OnPushDown()
{
	UpdateBabyOcto(&PlayerOctoData);
	MoveBabyOcto(&PlayerOctoData, 0, 10);
	delay(300);
}

void OnPushLeft()
{
	UpdateBabyOcto(&PlayerOctoData);
	MoveBabyOcto(&PlayerOctoData, -10, 0);
	delay(300);
}

void OnPushRight()
{
	UpdateBabyOcto(&PlayerOctoData);
	MoveBabyOcto(&PlayerOctoData, 10, 0);
	delay(300);
}