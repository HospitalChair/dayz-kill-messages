
// Control types
#define CT_STATIC	0

// Static styles
#define ST_LEFT	0
#define ST_RIGHT	1
#define ST_CENTER	2
#define ST_UP		3
#define ST_DOWN	4
#define ST_VCENTER	5

#define ST_SINGLE	0
#define ST_MULTI	16
#define ST_PICTURE	48
#define ST_FRAME	64

#define ST_HUD_BACKGROUND 128
#define ST_TILE_PICTURE 144
#define ST_WITH_RECT 160
#define ST_LINE	176

#define ST_SHADOW	256
#define ST_NO_RECT	512

// logo watermark

	class dm_disp {
		idd = -1;
		onLoad = "uiNamespace setVariable ['dm_control', _this select 0]";
		fadein = 0;
		fadeout = .5;
		duration = 10;
		controlsBackground[] = {};
		objects[] = {};
		class controls {
			class dm_txt {
				idc = 1;
				x = 0.00683707 * safezoneW + safezoneX;
				y = 0.0104715 * safezoneH + safezoneY;
				w = 0.25 * safezoneW;
				h = 0.106246 * safezoneH;
				shadow = 2;
				class Attributes
				{
					font = "zeppelin32";
					color = "#ffffff";
					align = "left"; // put "center" here if you want some background
					valign = "middle";
					shadow = 2;
				};
				colorBackground[] = { 1, 0.3, 0, 0 };  // uncomment and increase 4th number to have a background
				font = "zeppelin32";
				size = 0.025*safeZoneH;
				type = 13;
				style = 0;
				text="";
			};
		};
	};

