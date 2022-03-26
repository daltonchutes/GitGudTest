#include <gb/gb.h>
#include "Player.h"
#include "BabyOctoSpriteData.h"

void SpawnBabyOcto(struct BabyOctoData * OctoData, int PosX, int PosY)
{
	OctoData->CurrentSpriteIndex = 0;
	OctoData->PosX = PosX;
	OctoData->PosY = PosY;
	
	set_sprite_data(PLAYER_BABY_OCTO_SPRITE, 2, BabyOctoSprite);
	set_sprite_tile(PLAYER_BABY_OCTO_SPRITE, 0);
	move_sprite(PLAYER_BABY_OCTO_SPRITE, PosX, PosY);
}

void UpdateBabyOcto(struct BabyOctoData * OctoData)
{
    // Animate him
    OctoData->CurrentSpriteIndex = !OctoData->CurrentSpriteIndex;
    set_sprite_tile(PLAYER_BABY_OCTO_SPRITE, OctoData->CurrentSpriteIndex);
}

void RenderBabyOcto(struct BabyOctoData * OctoData)
{
    OctoData->PosX = OctoData->PosX;
}

void MoveBabyOcto(struct BabyOctoData * OctoData, int XAmount, int YAmount)
{
    OctoData->PosX += XAmount;
    OctoData->PosY += YAmount;
    move_sprite(PLAYER_BABY_OCTO_SPRITE, OctoData->PosX, OctoData->PosY);
}