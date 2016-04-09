class CfgPatches
{
	class tfw_sem52sl
	{
		units[] = {
		"item_tfw_sem52sl"
    };
    weapons[] = {
		"tfw_sem52sl"
    };
		requiredVersion = 1.0;
		requiredAddons[] = {"task_force_radio", "task_force_radio_items"};
		author[] = {"Raspu"};
		version = 1;
		versionStr = "1";
		versionAr[] = {1,0,0};
	};
};

#include "description.h"
#include "\tfw_sem52sl\CfgFunctions.h"
#include "\task_force_radio\RscTitles.hpp"


class CfgFontFamilies
{
  class tfw_font_lcd
  {
    fonts[] = {
		"\tfw_sem52sl\fonts\djbed"
    };
    spaceWidth = 0.6;
    spacing = 0.15;
    //spacing = 0.5;
  };
};

class CfgFactionClasses
{
    class BWA3_Faction
    {
        personal_tf_faction_radio_api = "tfw_sem52sl";
    };
} ;

class CfgSounds
{
	class SEM52SL_rotatorPush
	{
		name = "SEM 52 SL - Rotator Switch (Push)";
		sound[] = {"\tfw_sem52sl\sounds\sem52click.wss",1.5,1};
		titles[] = {};
	};
};

class CfgVehicles {
	
	class Item_Base_F;
	
	class Item_tf_sem52sl: Item_Base_F
	{
		scope = 2;
		scopeCurator = 2;
		displayName = "SEM 52 SL";
		author = "Raspu";
		vehicleClass = "Items";
		class TransportItems
		{
			class tfw_sem52sl
			{
			name="tfw_sem52sl";
			count=1;
			};
		};
	};
};

#include "\task_force_radio_items\radio_ids.hpp"

class CfgWeapons
{
	class ItemRadio;

	class tfw_sem52sl: ItemRadio
	{
		author = "Raspu";
		displayName = "SEM 52 SL";
		descriptionShort = "Sender/Empfaenger, mobil SEM 52 SL";
		scope = 2;
		scopeCurator = 2;
		model = "\tfw_sem52sl\data\model\sem52sl.p3d";
		picture = "\tfw_sem52sl\data\ui\sem52sl_icon.paa";
		tf_prototype = 1;
		tf_range = 5000;
		tf_dialog = "sem52sl_radio_dialog";
		tf_encryptionCode = "tf_west_radio_code";
		tf_dialogUpdate = ["Pr%1"] call TFAR_fnc_updateSWDialogToChannel;
		tf_subtype = "digital";
		tf_parent = "tfw_sem5sl";
		tf_additional_channel = 1;
	};

	TF_RADIO_IDS(tfw_sem52sl,SEM 52 SL)

};