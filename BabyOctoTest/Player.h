#include <stdint.h>

#define PLAYER_BABY_OCTO_SPRITE 0

struct BabyOctoData
{
	int PosX;
	int PosY;
	int8_t CurrentSpriteIndex;
};

void SpawnBabyOcto(struct BabyOctoData * OctoData, int PosX, int PosY);
void UpdateBabyOcto(struct BabyOctoData * OctoData);
void RenderBabyOcto(struct BabyOctoData * OctoData);

void MoveBabyOcto(struct BabyOctoData *  OctoData, int XAmount, int YAmount);