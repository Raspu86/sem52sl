#include "\tfw_sem52sl\define.h"
#include "\task_force_radio\define.h"
#include "\task_force_radio\description.h"

class RscSEMLCD
{
	access = 0;
	type = 2;
	x = 0;
	y = 0;
	h = 0.04;
	w = 0.2;
	colorBackground[] =
	{
		0,
		0,
		0,
		0
	};
	colorText[] =
	{
		0,
		0,
		0,
		0.65
	};
	colorDisabled[] =
	{
		1,
		1,
		1,
		0.25
	};
	colorSelection[] =
	{
		//"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.69])",
		//"(profilenamespace getvariable ['GUI_BCG_RGB_G',0.75])",
		//"(profilenamespace getvariable ['GUI_BCG_RGB_B',0.5])",
		0,
		0.79,
		0.63,
		0.55
	};
	autocomplete = "";
	text = "";
	size = "0.2 * (0.7 / (getResolution select 5))";	
	//style = "0x00 + 0x40 + 0x200";
	style = "0x01 + 0x40 + 0x200";
	font = "tf_font_segments"; 
	shadow = 1;
	//sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2) * (0.7 / (getResolution select 5))";
	sizeEx = "(((((safezoneW / safezoneH) min 1.2) / 1.2) / 25) * 1.2) * (0.7 / (getResolution select 5))";
};

#include "\tfw_sem52sl\sem52sl_dialog.ext"