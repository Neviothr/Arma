class CfgPatches
{
	class MBG_Nam_C
	{
		units[]={};
		weapons[]={};
		requiredVersion=1.5;
		requiredAddons[]=
		{
			"MBG_Nam",
			"MBG_Nam_Obj",
			"Chernarus",
			"Takistan",
			"brg_africa"
		};
		author="Mondkalb";
		mail="Mondkalb@vr-web.de";
	};
};

class CfgWorlds
{
	class DefaultWorld
	{
		class Weather;
	};
	class CAWorld: DefaultWorld
	{
		class Grid
		{
		};
		class DayLightingBrightAlmost;
		class DayLightingRainy;
		class DefaultClutter;
		class Weather: Weather
		{
			class Lighting;
		};
	};
	class DefaultLighting;
	class MBG_Nam: CAWorld
	{
		cutscenes[]=
		{
			"MBG_NAM_Cutscene1",
			"MBG_NAM_Cutscene2"
		};
		description="MBG Vietnam";
		worldName="\CA\MBG_Nam\MBG_Nam.wrp";
		pictureShot="\MBG_Nam_C\MBG_pic_ca.paa";
		icon="";
		pictureMap="";
		plateFormat="$$$  ## - ##";
		plateLetters="0123456789";
		longitude=106;
		latitude=10;
		startTime="9:30";
		startDate="09/02/1969";
		startWeather=0.1;
		startFog=0;
		forecastWeather=0.25;
		forecastFog=0;
		centerPosition[]={2000,575.54901};
		seagullPos[]={2560,150,2560};
		clutterGrid=1;
		clutterDist=65;
		noDetailDist=40;
		fullDetailDist=15;
		midDetailTexture="ca\chernarus\data\cr_trava1_mco.paa";
		minTreesInForestSquare=2;
		minRocksInRockSquare=3;
		ilsPosition[]={0,0};
		ilsDirection[]={0,0,0};
		ilsTaxiIn[]={};
		ilsTaxiOff[]={};
		drawTaxiway=0;

		class SecondaryAirports
		{
		};
		class Grid: Grid
		{
			offsetX=0;
			offsetY=-25000;
			class Zoom1
			{
				zoomMax=0.5;
				format="XY";
				formatX="000";
				formatY="000";
				stepX=100;
				stepY=100;
			};
			class Zoom2
			{
				zoomMax="1e+030.0";
				format="XY";
				formatX="00";
				formatY="00";
				stepX=1000;
				stepY=1000;
			};
		};
		class OutsideTerrain
		{
			satellite="MBG_Nam_C\MBG_OutsideTerrain_CO.paa";
			enableTerrainSynth=1;
			class Layers
			{
				class Layer0
				{
					nopx="ca\MBG_nam\data\trava1_detail_nopx.paa";
					texture="ca\MBG_nam\data\gras_detail_co.paa";
				};
			};
		};
		class Lighting: DefaultLighting
		{
			groundReflection[]={0.059999999,0.059999999,0.029999999};
		};
		class DayLightingBrightAlmost: DayLightingBrightAlmost
		{
			deepNight[]=
			{
				-15,
				{0.050000001,0.050000001,0.059999999},
				{0.001,0.001,0.0020000001},
				{0.02,0.02,0.050000001},
				{0.003,0.003,0.003},
				{9.9999997e-005,9.9999997e-005,0.00019999999},
				{9.9999997e-005,9.9999997e-005,0.00019999999},
				0
			};
			fullNight[]=
			{
				-5,
				{0.050000001,0.050000001,0.050000001},
				{0.02,0.02,0.02},
				{0.039999999,0.039999999,0.039999999},
				{0.039999999,0.039999999,0.039999999},
				{0.0099999998,0.0099999998,0.02},
				{0.079999998,0.059999999,0.059999999},
				0
			};
			sunMoon[]=
			{
				-3.75,
				{0.045000002,0.039999999,0.039999999},
				{0.039999999,0.039999999,0.039999999},
				{0.045000002,0.039999999,0.039999999},
				{0.039999999,0.039999999,0.039999999},
				{0.039999999,0.035,0.039999999},
				{0.1,0.079999998,0.090000004},
				0.5
			};
			earlySun[]=
			{
				-2.5,
				{0.12,0.1,0.1},
				{0.079999998,0.059999999,0.07},
				{0.12,0.1,0.1},
				{0.079999998,0.059999999,0.07},
				{0.079999998,0.07,0.079999998},
				{0.1,0.1,0.12},
				1
			};
			sunrise[]=
			{
				0,

				{
					{0.69999999,0.44999999,0.44999999},
					"5.16+(-4)"
				},

				{
					{0.07,0.090000004,0.12},
					"4.0+(-4)"
				},

				{
					{0.60000002,0.47,0.25},
					"4.66+(-4)"
				},

				{
					{0.1,0.090000004,0.1},
					"4.3+(-4)"
				},

				{
					{0.5,0.40000001,0.40000001},
					"6.49+(-4)"
				},

				{
					{0.88,0.50999999,0.23999999},
					"8.39+(-4)"
				},
				1
			};
			earlyMorning[]=
			{
				3,

				{
					{0.64999998,0.55000001,0.55000001},
					"6.04+(-4)"
				},

				{
					{0.079999998,0.090000004,0.11},
					"4.5+(-4)"
				},

				{
					{0.55000001,0.47,0.25},
					"5.54+(-4)"
				},

				{
					{0.1,0.090000004,0.1},
					"5.02+(-4)"
				},

				{
					{0.5,0.40000001,0.40000001},
					"7.05+(-4)"
				},

				{
					{0.88,0.50999999,0.23999999},
					"8.88+(-4)"
				},
				1
			};
			midMorning[]=
			{
				8,

				{
					{0.98000002,0.85000002,0.80000001},
					"8.37+(-4)"
				},

				{
					{0.079999998,0.090000004,0.11},
					"6.42+(-4)"
				},

				{
					{0.87,0.47,0.25},
					"7.87+(-4)"
				},

				{
					{0.090000004,0.090000004,0.1},
					"6.89+(-4)"
				},

				{
					{0.5,0.40000001,0.40000001},
					"8.9+(-4)"
				},

				{
					{0.88,0.50999999,0.23999999},
					"10.88+(-4)"
				},
				1
			};
			morning[]=
			{
				16,

				{
					{1,1,0.89999998},
					"13.17+(-4)"
				},

				{
					{0.17,0.18000001,0.19},
					"10.26+(-4)"
				},

				{
					{1,1,0.89999998},
					"12.67+(-4)"
				},

				{
					{0.17,0.18000001,0.19},
					"11.71+(-4)"
				},

				{
					{0.15000001,0.15000001,0.15000001},
					"12.42+(-4)"
				},

				{
					{0.17,0.17,0.15000001},
					"14.42+(-4)"
				},
				1
			};
			noon[]=
			{
				45,

				{
					{1,1,1},
					"17+(-4)"
				},

				{
					{1,1.3,1.55},
					"13.5+(-4)"
				},

				{
					{1,1,1},
					"15+(-4)"
				},

				{
					{0.36000001,0.37,0.38},
					"13.5+(-4)"
				},

				{
					{1,1,1},
					"16+(-4)"
				},

				{
					{1,1,1},
					"17+(-4)"
				},
				1
			};
		};
		class DayLightingRainy: DayLightingRainy
		{
			deepNight[]=
			{
				-15,
				{0.0034,0.0034,0.0040000002},
				{0.003,0.003,0.003},
				{0.0034,0.0034,0.0040000002},
				{0.003,0.003,0.003},
				{0.001,0.001,0.0020000001},
				{0.001,0.001,0.0020000001},
				0
			};
			fullNight[]=
			{
				-5,
				{0.023,0.023,0.023},
				{0.02,0.02,0.02},
				{0.023,0.023,0.023},
				{0.02,0.02,0.02},
				{0.0099999998,0.0099999998,0.02},
				{0.079999998,0.059999999,0.059999999},
				0
			};
			sunMoon[]=
			{
				-3.75,
				{0.039999999,0.039999999,0.050000001},
				{0.039999999,0.039999999,0.050000001},
				{0.039999999,0.039999999,0.050000001},
				{0.039999999,0.039999999,0.050000001},
				{0.039999999,0.035,0.039999999},
				{0.11,0.079999998,0.090000004},
				0.5
			};
			earlySun[]=
			{
				-2.5,
				{0.068899997,0.068899997,0.080399998},
				{0.059999999,0.059999999,0.07},
				{0.068899997,0.068899997,0.080399998},
				{0.059999999,0.059999999,0.07},
				{0.079999998,0.07,0.079999998},
				{0.14,0.1,0.12},
				0.5
			};
			earlyMorning[]=
			{
				0,

				{
					{1,1,1},
					"(-4)+3.95"
				},

				{
					{1,1,1},
					"(-4)+3.0"
				},

				{
					{1,1,1},
					"(-4)+3.95"
				},

				{
					{1,1,1},
					"(-4)+3.0"
				},

				{
					{1,1,1},
					"(-4)+4"
				},

				{
					{1,1,1},
					"(-4)+5.5"
				},
				1
			};
			morning[]=
			{
				5,

				{
					{1,1,1},
					"(-4)+5.7"
				},

				{
					{1,1,1},
					"(-4)+4.5"
				},

				{
					{1,1,1},
					"(-4)+5.7"
				},

				{
					{1,1,1},
					"(-4)+4.5"
				},

				{
					{1,1,1},
					"(-4)+7"
				},

				{
					{1,1,1},
					"(-4)+8"
				},
				1
			};
			lateMorning[]=
			{
				25,

				{
					{1,1,1},
					"(-4)+10.45"
				},

				{
					{1,1,1},
					"(-4)+9.75"
				},

				{
					{1,1,1},
					"(-4)+10.45"
				},

				{
					{1,1,1},
					"(-4)+9.75"
				},

				{
					{1,1,1},
					"(-4)+12"
				},

				{
					{1,1,1},
					"(-4)+12.75"
				},
				1
			};
			noon[]=
			{
				70,

				{
					{1,1,1},
					"(-4)+12.5"
				},

				{
					{1,1,1},
					"(-4)+11"
				},

				{
					{1,1,1},
					"(-4)+12"
				},

				{
					{1,1,1},
					"(-4)+11"
				},

				{
					{1,1,1},
					"(-4)+13.5"
				},

				{
					{1,1,1},
					"(-4)+14"
				},
				1
			};
		};
		class Weather: Weather
		{
			class Lighting: Lighting
			{
				class BrightAlmost: DayLightingBrightAlmost
				{
					overcast=0;
				};
				class Rainy: DayLightingRainy
				{
					overcast=1;
				};
			};
		};
		class Clutter
		{
			class MBG_NamJungleGrass: DefaultClutter
			{
				model="brg_africa\brg_jungle_groundcover_2.p3d";
				affectedByWind=0.1;
				swLighting="true";
				scaleMin=0.2;
				scaleMax=0.30000001;
			};
			class MBG_NamPlantSingle: DefaultClutter
			{
				model="MBG_NAM_C\clutter\PlantSingle.p3d";
				affectedByWind=0.1;
				scaleMin=0.80000001;
				scaleMax=1.1;
			};
			class MBG_NamPlantGroup: DefaultClutter
			{
				model="MBG_NAM_C\clutter\PlantGroup.p3d";
				affectedByWind=0.1;
				scaleMin=0.69999999;
				scaleMax=1;
			};
			class MBG_NamDeadstuff: DefaultClutter
			{
				model="brg_africa\brg_deadstuff1.p3d";
				affectedByWind=0;
				swLighting="true";
				scaleMin=0.2;
				scaleMax=0.40000001;
			};
			class MBG_NamRiceGrass: DefaultClutter
			{
				model="MBG_NAM_C\clutter\RiceGrass.p3d";
				affectedByWind=0.40000001;
				scaleMin=0.69999999;
				scaleMax=0.80000001;
			};
			class MBG_NamFern: DefaultClutter
			{
				model="MBG_NAM_C\clutter\Fern.p3d";
				affectedByWind=0.2;
				scaleMin=1;
				scaleMax=2;
			};
			class MBG_NamJungleGrass2: DefaultClutter
			{
				model="MBG_NAM_C\clutter\Grass.p3d";
				affectedByWind=0.2;
				scaleMin=0.60000002;
				scaleMax=1;
			};
			class MBG_NAM_TK_GrassGreenLong: DefaultClutter
			{
				model="ca\plants_E\Clutter\c_GrassGreen_EP1.p3d";
				affectedByWind=0.80000001;
				swLighting=1;
				scaleMin=1.25;
				scaleMax=1.8;
			};
			class MBG_NAM_TK_GrassGreenLong_BIG: DefaultClutter
			{
				model="ca\plants_E\Clutter\c_GrassGreen_EP1.p3d";
				affectedByWind=0.80000001;
				swLighting=1;
				scaleMin=1.9;
				scaleMax=2.2;
			};
		};
		class Names
		{
			class MBG_NAM_DUM_DUM_PHUC_RIVER
			{
				name="Sum Dum Phuc River";
				position[]={3006.05,2203.0901};
				type="nameMarine";
				radiusA=100;
				radiusB=100;
			};
			class MBG_NAM_LZ_FIONA
			{
				name="LZ Fiona";
				position[]={1339.6801,4127.7402};
				type="NameLocal";
				radiusA=100;
				radiusB=100;
			};
			class MBG_NAM_nui_sac_xanh
			{
				name="Nui Sac Xanh";
				position[]={2926.5901,1272.15};
				type="Hill";
				radiusA=100;
				radiusB=100;
			};
			class MBG_NAM_Cao_Dong
			{
				name="Cao Dong";
				position[]={4872.71,3328.1101};
				type="Hill";
				radiusA=100;
				radiusB=100;
			};
			class MBG_NAM_Nui_Tay_Cao
			{
				name="Tây Cao";
				position[]={785.72803,2968.4199};
				type="Hill";
				radiusA=100;
				radiusB=100;
			};
			class MBG_NAM_Tay_vinh
			{
				name="Tây Vinh";
				position[]={481.34601,2619.79};
				type="NameVillage";
				radiusA=100;
				radiusB=100;
			};
			class MBG_NAM_mau_nau_nam
			{
				name="Mau Nau Nam";
				position[]={1635.34,2173.0601};
				type="NameVillage";
				radiusA=100;
				radiusB=100;
			};
			class MBG_NAM_Vang_Vung
			{
				name="Vang Vung";
				position[]={1727.1,3188.1001};
				type="NameVillage";
				radiusA=100;
				radiusB=100;
			};
			class MBG_NAM_Ha_Tinh
			{
				name="Ha Tinh";
				position[]={3324.3101,3658.1201};
				type="NameVillage";
				radiusA=100;
				radiusB=100;
			};
			class MBG_Nam_nhur_chu_giang
			{
				name="Nhur Chu Giang";
				position[]={4004.9199,2639.9399};
				type="NameVillage";
				radiusA=100;
				radiusB=100;
			};
			class MBG_NAM_HA_xuijin
			{
				name="Ha Xuijin";
				position[]={1633.51,1142.2};
				type="NameVillage";
				radiusA=100;
				radiusB=100;
			};
			class MBG_NAM_Nui_Do_Tia
			{
				name="Nui Do Tia";
				position[]={2927.3501,560.49103};
				type="NameVillage";
				radiusA=100;
				radiusB=100;
			};
			class MBG_NAM_HA_NAM
			{
				name="Ha Nam";
				position[]={3939.54,1133.5};
				type="NameVillage";
				radiusA=100;
				radiusB=100;
			};
			class MBG_NAM_Bac_Hoang
			{
				name="Bac Hoang";
				position[]={2814.52,4273.79};
				type="NameVillage";
				radiusA=100;
				radiusB=100;
			};
			class MBG_NAM_Hoa_Xa
			{
				name="Hoa Xa";
				position[]={4465.8501,4079.6499};
				type="NameVillage";
				radiusA=100;
				radiusB=100;
			};
			class MBG_NAM_Van_Mieu
			{
				name="Van Mieu";
				position[]={3322.1799,2434.3};
				type="NameLocal";
				radiusA=100;
				radiusB=100;
			};
			class MBG_NAM_Tim_Lat
			{
				name="Tim Lat";
				position[]={2830.28,2404.99};
				type="NameVillage";
				radiusA=100;
				radiusB=100;
			};
		};
		class Ambient
		{
			class Mammals
			{
				radius=200;
				cost="(1 + forest + trees) * (0.5 + (0.5 * night)) * (1 - sea) * (1 - houses)";
				class Species
				{
					class Rabbit
					{
						probability=0.2;
						cost=1;
					};
				};
			};
			class BigBirds
			{
				radius=300;
				cost="((8 + forest + trees) - ((1 * rain)) - houses) * (1 - night) * (1 - sea)";
				class Species
				{
					class Hawk
					{
						probability=1;
						cost=1;
					};
				};
			};
			class BigInsects
			{
				radius=20;
				cost="(5 - (2 * houses)) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
					class DragonFly
					{
						probability="0.6 - (meadow * 0.5) + (forest * 0.4)";
						cost=1;
					};
					class ButterFly
					{
						probability="0.6 + (meadow * 0.4) - (forest * 0.4)";
						cost=1;
					};
				};
			};
			class BigInsectsAquatic
			{
				radius=20;
				cost="(3 * sea) * (1 - night) * (1 - rain) * (1 - windy)";
				class Species
				{
					class DragonFly
					{
						probability=1;
						cost=1;
					};
				};
			};
			class SmallInsects
			{
				radius=3;
				cost="(12 - 8 * hills) * (1 - night) * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
					class HouseFly
					{
						probability="deadBody + (1 - deadBody) * (0.5 - forest * 0.1 - meadow * 0.2)";
						cost=1;
					};
					class HoneyBee
					{
						probability="(1 - deadBody) * (0.8 - forest * 0.1 + meadow * 0.2)";
						cost=1;
					};
					class Mosquito
					{
						probability="(1 - deadBody) * (forest)";
						cost=1;
					};
				};
			};
			class NightInsects
			{
				radius=3;
				cost="(9 - 8 * hills) * night * (1 - rain) * (1 - sea) * (1 - windy)";
				class Species
				{
					class Mosquito
					{
						probability=1;
						cost=1;
					};
				};
			};
			class WindClutter
			{
				radius=10;
				cost="((20 - 5 * rain) * (3 * (windy factor [0.2, 0.5]))) * (1 - sea)";
				class Species
				{
					class FxWindGrass1
					{
						probability="0.6 + 0.2 * hills - 0.2 * trees";
						cost=1;
					};
					class FxWindGrass2
					{
						probability="0.6 + 0.2 * hills - 0.2 * trees";
						cost=1;
					};
					class FxWindRock1
					{
						probability="0.4 * hills";
						cost=1;
					};
				};
			};
			class NoWindClutter
			{
				radius=15;
				cost=8;
				class Species
				{
					class FxWindPollen1
					{
						probability=1;
						cost=1;
					};
				};
			};
		};
		class Armory
		{
			positionAdmin[]={3500,3500};
			positionStartWater[]={7584.1099,1206.6801};
			positionsViewer[]=
			{
				{3500,3500}
			};
		};
		class Subdivision
		{
			class Fractal
			{
				rougness=5;
				maxRoad=0.02;
				maxTrack=0.5;
				maxSlopeFactor=0.050000001;
			};
			class WhiteNoise
			{
				rougness=2;
				maxRoad=0.0099999998;
				maxTrack=0.050000001;
				maxSlopeFactor=0.0024999999;
			};
			minY=-0;
			minSlope=0.02;
		};
		class ReplaceObjects
		{
		};
		class Sounds
		{
			sounds[]={};
		};
		class Animation
		{
			vehicles[]={};
		};
	};
};
class CfgMissions
{
	class Cutscenes
	{
		class MBG_NAM_Cutscene1
		{
			directory="MBG_NAM_C\Cutscenes\Intro1.MBG_Nam";
		};
		class MBG_NAM_Cutscene2
		{
			directory="MBG_NAM_C\Cutscenes\Intro2.MBG_Nam";
		};
	};
};
class CfgWorldList
{
	class MBG_nam
	{
	};
};
class CfgSurfaces
{
	class Default
	{
	};
	class MBG_NamGrassClutter: Default
	{
		files="gras_*";
		rough=0.2;
		dust=0.0099999998;
		soundHit="soft_ground";
		soundEnviron="forest";
		character="MBG_NamGrass";
	};
	class MBG_NamGravelClutter: Default
	{
		files="kies_*";
		rough=0.079999998;
		dust=0.15000001;
		soundHit="soft_ground";
		soundEnviron="gravel2";
		character="empty";
	};
	class MBG_NamMudClutter: Default
	{
		files="mud_*";
		rough=0.5;
		dust=0;
		soundHit="soft_ground";
		soundEnviron="sand";
		character="MBG_NamRice";
	};
	class MBG_NamRedsoilClutter: Default
	{
		files="redsoil_*";
		rough=0.07;
		dust=0.059999999;
		soundHit="soft_ground";
		soundEnviron="dirt";
		character="empty";
	};
	class MBG_NamMeadowClutter: Default
	{
		files="meadow_*";
		rough=0.07;
		dust=0.059999999;
		soundHit="soft_ground";
		soundEnviron="grass";
		character="MBG_Meadow";
	};
};
class CfgSurfaceCharacters
{
	class MBG_Meadow
	{
		probability[]={0.80000001,0.02};
		names[]=
		{
			"MBG_NAM_TK_GrassGreenLong_BIG",
			"MBG_NamPlantSingle"
		};
	};
	class MBG_NamGrass
	{
		probability[]={0.0099999998,0.0099999998,0.1,0.18000001,0.2,0.1,0.2};
		names[]=
		{
			"MBG_NamJungleGrass",
			"MBG_NamDeadstuff",
			"MBG_NamPlantGroup",
			"MBG_NamPlantSingle",
			"MBG_NamFern",
			"MBG_NamJungleGrass2",
			"MBG_NAM_TK_GrassGreenLong"
		};
	};
	class MBG_NamRice
	{
		probability[]={0.75999999};
		names[]=
		{
			"MBG_NamRiceGrass"
		};
	};
};
