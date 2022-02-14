#ifndef SHOPCONTROLLER_H
#define SHOPCONTROLLER_H
#include "UnitController.h"

class ShopController : public UnitController {
	private:
		int money = 0;
		int shopRank = 0;
		int numberAllowedUnits = 4;
		std::vector<Unit> shopUnits;
		Unit *selectedUnit;
	public:
		ShopController(int savedLevel, std::vector<Unit> savedTeam, int turn);
		void step();
		void processReroll(UNIT_MAP unit_data, SPRITE_MAP &imageData);
		void processPurchase();
		void processSell();
		void removeShopUnit(int removeIndex);
		void initializeShop(UNIT_MAP unit_data, SPRITE_MAP &imageData);
		std::vector<Unit> getPlayerTeam();
		std::vector<std::string> getValidUnits();
};
#endif

