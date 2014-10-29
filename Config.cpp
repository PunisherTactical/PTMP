/*extern*/ class DefaultEventhandlers;

class CfgPatches
{
	class ebu_PMC_ArmoredSUV
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Soft_F"};
	};
};

class CfgVehicleClasses {

	class PMC_SUV {
		displayName = "Armed SUV";
	};
};

/*extern*/ class WeaponFireGun;
/*extern*/ class WeaponCloudsGun;
/*extern*/ class WeaponFireMGun;
/*extern*/ class WeaponCloudsMGun;

class CfgMovesBasic
{
	class DefaultDie;
	class ManActions
	{
		SUV_Cargo_EP1="SUV_Cargo_EP1";
		SUV_Cargo01_EP1="SUV_Cargo01_EP1";
		SUV_Cargo02_EP1="SUV_Cargo02_EP1";
		SUV_Driver_EP1="SUV_Driver_EP1";
		ArmoredSUV_Gunner_PMC = "ArmoredSUV_Gunner_PMC";
		ArmoredSUV_GunnerIn_PMC = "ArmoredSUV_GunnerIn_PMC";
	};
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class SUV_Cargo_EP1: Crew
		{
			file="\ebu_armorsuv\data\Anim\SUV_Cargo";
			interpolateTo[]=
			{
				"SUV_KIA_Cargo_EP1",
				1
			};
			speed=1e+010;
		};
		class SUV_KIA_Cargo_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\ebu_armorsuv\data\Anim\SUV_KIA_Cargo";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class SUV_Cargo01_EP1: Crew
		{
			file="\ebu_armorsuv\data\Anim\SUV_Cargo01";
			interpolateTo[]=
			{
				"SUV_KIA_Cargo01_EP1",
				1
			};
			speed=1e+010;
		};
		class SUV_KIA_Cargo01_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\ebu_armorsuv\data\Anim\SUV_KIA_Cargo01";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class SUV_Cargo02_EP1: Crew
		{
			file="\ebu_armorsuv\data\Anim\SUV_Cargo02";
			interpolateTo[]=
			{
				"SUV_KIA_Cargo02_EP1",
				1
			};
			speed=1e+010;
		};
		class SUV_KIA_Cargo02_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\ebu_armorsuv\data\Anim\SUV_KIA_Cargo02";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class SUV_Driver_EP1: Crew
		{
			file="\ebu_armorsuv\data\Anim\SUV_Driver";
			interpolateTo[]=
			{
				"SUV_KIA_Driver_EP1",
				1
			};
			speed=1e+010;
		};
		class SUV_KIA_Driver_EP1: DefaultDie
		{
			actions="DeadActions";
			file="\ebu_armorsuv\data\Anim\SUV_KIA_Driver";
			speed=1e+010;
			terminal=1;
			soundEnabled=0;
			looped=0;
			connectTo[]=
			{
				"DeadState",
				0.1
			};
		};
		class ArmoredSUV_Gunner_PMC: Crew
		{
			file = "\ebu_armorsuv\data\Anim\SUVmatildaTurnOutPose.rtm";
			interpolateTo[] =
			{
				ArmoredSUV_KIA_Gunner_PMC, 1
			};
			speed = 1e+010;
		};
		class ArmoredSUV_GunnerIn_PMC: ArmoredSUV_Gunner_PMC
		{
			file = "\ebu_armorsuv\data\Anim\SUVmatildaTurnInPose.rtm";
		};		
		class ArmoredSUV_KIA_Gunner_PMC: DefaultDie
		{
			actions = DeadActions;
			file = "\ebu_armorsuv\data\Anim\SUVmatildaDeath.rtm";
			speed = 1e+010;
			terminal = 1;
			soundEnabled = 0;
			looped = 0;
			connectTo[] =
			{
				DeadState, 0.1
			};
		};
		class ArmoredSUV_GunnerTurnIn_PMC: Crew
		{
			file = "\ebu_armorsuv\data\Anim\SUVmatildaTurnIn.rtm";
			interpolateTo[] =
			{
				ArmoredSUV_KIA_Gunner_PMC, 1
			};			
			connectTo[] =
			{
				ArmoredSUV_GunnerIn_PMC, 0.1
			};
			speed = 0.5;
			looped = 0;
		};
		class ArmoredSUV_GunnerTurnOut_PMC: Crew
		{
			file = "\Cebu_armorsuv\data\Anim\SUVmatildaTurnOut.rtm";
			interpolateTo[] =
			{
				ArmoredSUV_KIA_Gunner_PMC, 1
			};			
			connectTo[] =
			{
				ArmoredSUV_Gunner_PMC, 0.1
			};
			speed = 0.5;
			looped = 0;
		};			
	};
};

class CfgVehicles
{
	/*extern*/ class LandVehicle;
	
	class Car: LandVehicle{
		/*extern*/ class NewTurret;
	};
	
	class Car_F: Car{
		/*extern*/ class AnimationSources;
		
		class Turrets{
		
			class Mainturret: NewTurret {
			};	
			/*extern*/ class ViewOptics;
		};
		
		class HitPoints{
			/*extern*/ class HitLFWheel;
			/*extern*/ class HitLBWheel;
			/*extern*/ class HitRFWheel;
			/*extern*/ class HitRBWheel;

			/*extern*/ class HitFuel;
			/*extern*/ class HitEngine;

			/*extern*/ class HitGlass1;
			/*extern*/ class HitGlass2;
			/*extern*/ class HitGlass3; 
			/*extern*/ class HitGlass4;		
		};
	};
	
	class ArmoredSUV_Base_PMC: car_F{
	//------------TFAR Intergration------------//
		tf_RadioType_api = "tf_rt1523g";
		tf_hasLRradio_api = 1;
		tf_isolatedAmount_api = 0.500000;
	//------------TFAR Intergration------------//
		displayName = "Armed SUV";
		vehicleClass = "PMC_SUV";
		model = "\ebu_armorsuv\armoredSUV_PMC.p3d";
    icon = "\ebu_armorsuv\data\ui\Icon_suv_minigun_PMC.paa";
    picture = "\ebu_armorsuv\data\ui\Picture_suv_minigun_PMC_ca.paa";
		mapSize = 7;    		
		transportSoldier = 3;
		precision = 10;
		brakeDistance = 50;
		turnCoef = 3.5;
		driverLeftHandAnimName = "drivewheel";
		driverRightHandAnimName = "drivewheel";
		thrustDelay = 0.5;
		brakeIdleSpeed = 1.78;
		maxSpeed = 162;
		fuelCapacity = 45;
		wheelCircumference = 2.805;
		antiRollbarForceCoef = 0;
		antiRollbarForceLimit = 10;
		antiRollbarSpeedMin = 3;
		antiRollbarSpeedMax = 100;
		idleRpm = 400;
		redRpm = 3500;
		class complexGearbox
		{
			GearboxRatios[] = {"R1",-2.575,"N",0,"D1",2.367,"D2",1.67,"D3",1.238,"D4",0.99,"D5",0.802,"D6",0.601};
			TransmissionRatios[] = {"High",6.0};
			gearBoxMode = "auto";
			moveOffGear = 1;
			driveString = "D";
			neutralString = "N";
			reverseString = "R";
			gearUpMaxCoef = 0.8;
			gearDownMaxCoef = 0.5;
			gearUpMinCoef = 0.45;
			gearDownMinCoef = 0.15;
			transmissionDelay = 2;
		};
		simulation = "car";
		dampersBumpCoef = 3.0;
		differentialType = "all_limited";
		frontRearSplit = 0.5;
		frontBias = 1.5;
		rearBias = 1.5;
		centreBias = 1.3;
		clutchStrength = 15.0;
		enginePower = 200;
		maxOmega = 370;
		peakTorque = 320;
		dampingRateFullThrottle = 0.08;
		dampingRateZeroThrottleClutchEngaged = 0.35;
		dampingRateZeroThrottleClutchDisengaged = 0.35;
		torqueCurve[] = {
			{ 0.0,0.0 },
			{ 0.25,0.65 },
			{ 0.3,0.8 },
			{ 0.5,0.95 },
			{ 0.7,1.0 },
			{ 0.8,0.9 },
			{ 0.9,0.8 },
			{ 1.0,0.5 }};
		changeGearMinEffectivity[] = {0.95,0.15,0.95,0.95,0.95,0.95,0.95,0.95};
		switchTime = 0.31;
		latency = 1.5;
		driverAction = "SUV_Driver_EP1";
		cargoAction[] = {"SUV_Cargo_EP1", "SUV_Cargo02_EP1", "SUV_Cargo01_EP1"};
		cargoIsCoDriver[] = {1,0};
		getInAction = "GetInOffroad";
		getOutAction = "GetOutLow";
		cargoGetInAction[] = {"GetInLow"};
		cargoGetOutAction[] = {"GetOutLow"};
		driverCompartments = "Compartment1";
		cargoCompartments[] = {"Compartment1","Compartment2","Compartment2","Compartment2","Compartment2"};
		fireResistance = 5;
		wheelDestroyRadiusCoef = 0.75;
		
		class Wheels{
			class LF
			{
				boneName = "wheel_1_1_damper";
				steering = 1;
				side = "left";
				center = "wheel_1_1_axis";
				boundary = "wheel_1_1_bound";
				width = "0.2";
				mass = 30;
				MOI = 2.8;
				dampingRate = 0.5;
				dampingRateDamaged = 5.0;
				dampingRateDestroyed = 5000.0;
				maxBrakeTorque = 2000;
				maxHandBrakeTorque = 0;
				suspTravelDirection[] = {0,-1,0};
				suspForceAppPointOffset = "wheel_1_1_axis";
				tireForceAppPointOffset = "wheel_1_1_axis";
				maxCompression = 0.05;
				mMaxDroop = 0.1;
				sprungMass = 400;
				springStrength = 14400;
				springDamperRate = 1920;
				longitudinalStiffnessPerUnitGravity = 10000;
				latStiffX = 25;
				latStiffY = 180;
				frictionVsSlipGraph[] = {
					{ 0,1 },
					{ 0.5,1 },
					{ 1,1 }};
			};
			class LR: LF
			{
				boneName = "wheel_1_2_damper";
				steering = 0;
				center = "wheel_1_2_axis";
				boundary = "wheel_1_2_bound";
				suspForceAppPointOffset = "wheel_1_2_axis";
				tireForceAppPointOffset = "wheel_1_2_axis";
				maxHandBrakeTorque = 3000;
			};
			class RF: LF
			{
				boneName = "wheel_2_1_damper";
				center = "wheel_2_1_axis";
				boundary = "wheel_2_1_bound";
				suspForceAppPointOffset = "wheel_2_1_axis";
				tireForceAppPointOffset = "wheel_2_1_axis";
				steering = 1;
				side = "right";
			};
			class RR: RF
			{
				boneName = "wheel_2_2_damper";
				steering = 0;
				center = "wheel_2_2_axis";
				boundary = "wheel_2_2_bound";
				suspForceAppPointOffset = "wheel_2_2_axis";
				tireForceAppPointOffset = "wheel_2_2_axis";
				maxHandBrakeTorque = 3000;
			};
		};
		attenuationEffectType = "OpenCarAttenuation";
		soundGetIn = {"A3\Sounds_F\vehicles\soft\Offroad_01\Offroad_01-int-openclose",0.4466836,1};
		soundGetOut = {"A3\Sounds_F\vehicles\soft\Offroad_01\Offroad_01-int-openclose",0.4466836,1,40};
		soundDammage = {"",0.56234133,1};
		soundEngineOnInt = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_start",0.31622776,1.0};
		soundEngineOnExt = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_start",0.39810717,1.0,200};
		soundEngineOffInt = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_stop",0.31622776,1.0};
		soundEngineOffExt = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_stop",0.39810717,1.0,200};
		buildCrash0 = {"A3\sounds_f\Vehicles\soft\noises\crash_building_01",1.0,1,150};
		buildCrash1 = {"A3\sounds_f\Vehicles\soft\noises\crash_building_02",1.0,1,150};
		buildCrash2 = {"A3\sounds_f\Vehicles\soft\noises\crash_building_03",1.0,1,150};
		buildCrash3 = {"A3\sounds_f\Vehicles\soft\noises\crash_building_04",1.0,1,150};
		soundBuildingCrash = {"buildCrash0",0.25,"buildCrash1",0.25,"buildCrash2",0.25,"buildCrash3",0.25};
		WoodCrash0 = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_01",1.0,1,100};
		WoodCrash1 = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_02",1.0,1,100};
		WoodCrash2 = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_03",1.0,1,100};
		WoodCrash3 = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_04",1.0,1,100};
		WoodCrash4 = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_05",1.0,1,100};
		WoodCrash5 = {"A3\sounds_f\Vehicles\soft\noises\crash_mix_wood_06",1.0,1,100};
		soundWoodCrash[] = {"woodCrash0",0.166,"woodCrash1",0.166,"woodCrash2",0.166,"woodCrash3",0.166,"woodCrash4",0.166,"woodCrash5",0.166};
		ArmorCrash0 = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_01",1.0,1,200};
		ArmorCrash1 = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_02",1.0,1,200};
		ArmorCrash2 = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_03",1.0,1,200};
		ArmorCrash3 = {"A3\sounds_f\Vehicles\soft\noises\crash_vehicle_04",1.0,1,200};
		soundArmorCrash = {"ArmorCrash0",0.25,"ArmorCrash1",0.25,"ArmorCrash2",0.25,"ArmorCrash3",0.25};
		class Sounds {
			class Idle_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_idle",0.31622776,1,100};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			class Engine
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm1",0.31622776,1,200};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			class Engine1_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm2",0.35481337,1,225};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			class Engine2_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm3",0.35481337,1,250};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			class Engine3_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm4",0.39810717,1,275};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			class Engine4_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm5",0.4466836,1,300};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			class Engine5_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm6",0.5011872,1,300};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*camPos*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			class Engine6_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_ext_rpm7",0.56234133,1,300};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*camPos*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			class IdleThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_idle",0.5011872,1,200};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			class EngineThrust
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm1",0.56234133,1,250};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			class Engine1_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm2",0.63095737,1,275};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			class Engine2_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm3",0.70794576,1,300};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			class Engine3_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm4",0.7943282,1,325};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			class Engine4_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm5",0.8912509,1,350};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			class Engine5_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm6",1.0,1,375};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			class Engine6_Thrust_ext
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_ext_rpm7",1.1220185,1,400};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*camPos*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			class Idle_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_idle",0.2238721,1};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			class Engine_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm1",0.25118864,1};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			class Engine1_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm2",0.17782794,1};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			class Engine2_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm3",0.31622776,1};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			class Engine3_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm4",0.35481337,1};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			class Engine4_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm5",0.39810717,1};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			class Engine5_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm6",0.39810717,1};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			class Engine6_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\engine_int_rpm7",0.4466836,1};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			class IdleThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_idle",0.31622776,1};
				frequency = "0.95	+	((rpm/	3500) factor[(200/	3500),(580/	3500)])*0.15";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(200/	3500),(350/	3500)])	*	((rpm/	3500) factor[(580/	3500),(400/	3500)]))";
			};
			class EngineThrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm1",0.35481337,1};
				frequency = "0.9	+	((rpm/	3500) factor[(380/	3500),(960/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(380/	3500),(580/	3500)])	*	((rpm/	3500) factor[(960/	3500),(700/	3500)]))";
			};
			class Engine1_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm2",0.39810717,1};
				frequency = "0.9	+	((rpm/	3500) factor[(700/	3500),(1400/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(700/	3500),(970/	3500)])	*	((rpm/	3500) factor[(1400/	3500),(1100/	3500)]))";
			};
			class Engine2_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm3",0.4466836,1};
				frequency = "0.9	+	((rpm/	3500) factor[(1100/	3500),(1860/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1100/	3500),(1430/	3500)])	*	((rpm/	3500) factor[(1860/	3500),(1570/	3500)]))";
			};
			class Engine3_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm4",0.5011872,1};
				frequency = "0.95	+	((rpm/	3500) factor[(1600/	3500),(2200/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(1600/	3500),(1860/	3500)])	*	((rpm/	3500) factor[(2200/	3500),(2050/	3500)]))";
			};
			class Engine4_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm5",0.56234133,1};
				frequency = "0.95	+	((rpm/	3500) factor[(2040/	3500),(2670/	3500)]) *0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2040/	3500),(2200/	3500)])	*	((rpm/	3500) factor[(2670/	3500),(2400/	3500)]))";
			};
			class Engine5_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm6",0.63095737,1};
				frequency = "0.95	+	((rpm/	3500) factor[(2400/	3500),(3050/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*(((rpm/	3500) factor[(2400/	3500),(2660/	3500)])	*	((rpm/	3500) factor[(3050/	3500),(2800/	3500)]))";
			};
			class Engine6_Thrust_int
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\Offroad_01\exhaust_int_rpm7",0.70794576,1};
				frequency = "0.95	+	((rpm/	3500) factor[(2700/	3500),(3500/	3500)])*0.2";
				volume = "engineOn*(1-camPos)*(0.4+(0.6*(thrust factor[0.1,1])))*((rpm/	3500) factor[(2700/	3500),(3200/	3500)])";
			};
			class TiresRockOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_1",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*rock*(speed factor[2, 20])";
			};
			class TiresSandOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-sand1",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*sand*(speed factor[2, 20])";
			};
			class TiresGrassOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_dirt_soft_2",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*grass*(speed factor[2, 20])";
			};
			class TiresMudOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext-tires-mud2",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*mud*(speed factor[2, 20])";
			};
			class TiresGravelOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_gravel_1",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\ext_tires_asfalt_2",0.70794576,1.0,60};
				frequency = "1";
				volume = "camPos*asphalt*(speed factor[2, 20])";
			};
			class NoiseOut
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_ext_car_3",0.56234133,1.0,90};
				frequency = "1";
				volume = "camPos*(damper0 max 0.02)*(speed factor[0, 8])";
			};
			class TiresRockIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*rock*(speed factor[2, 20])";
			};
			class TiresSandIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-sand2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*sand*(speed factor[2, 20])";
			};
			class TiresGrassIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_dirt_soft_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*grass*(speed factor[2, 20])";
			};
			class TiresMudIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int-tires-mud2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*mud*(speed factor[2, 20])";
			};
			class TiresGravelIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_gravel_1",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*gravel*(speed factor[2, 20])";
			};
			class TiresAsphaltIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\tires\int_tires_asfalt_2",0.70794576,1.0};
				frequency = "1";
				volume = "(1-camPos)*asphalt*(speed factor[2, 20])";
			};
			class NoiseIn
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\noise_int_car_3",0.15848932,1.0};
				frequency = "1";
				volume = "(damper0 max 0.1)*(speed factor[0, 8])*(1-camPos)";
			};
			class breaking_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class acceleration_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 2])";
			};
			class turn_left_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[2, 15])";
			};
			class turn_right_ext_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02",0.70794576,1,80};
				frequency = 1;
				volume = "engineOn*camPos*asphalt*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[2, 15])";
			};
			class breaking_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_ext_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt",0.70794576,1,60};
				frequency = 1;
				volume = "engineOn*camPos*(1-asphalt)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_04_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_int_road
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_loop_02_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*asphalt*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class breaking_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_14_dirt_breaking_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
			class acceleration_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_16_dirt_acceleration_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(LongSlipDrive Factor[0.1, 0.4])*(Speed Factor[15, 1])";
			};
			class turn_left_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[0.1, 0.4])*(Speed Factor[1, 15])";
			};
			class turn_right_int_dirt
			{
				sound[] = {"A3\Sounds_F\vehicles\soft\noises\slipping_tires_18_dirt_int",0.31622776,1};
				frequency = 1;
				volume = "engineOn*(1-asphalt)*(1-camPos)*(latSlipDrive Factor[-0.1, -0.4])*(Speed Factor[1, 15])";
			};
		};
		
		class Turrets: Turrets {

			class MainTurret: MainTurret {
				body = "mainTurret";
				gun = "mainGun";
				hasGunner = 1;
				weapons = {"M134_minigun"};
				magazines = {"5000Rnd_762x51_Belt","5000Rnd_762x51_Belt","5000Rnd_762x51_Belt","5000Rnd_762x51_Belt"};
				soundServo = {"A3\sounds_f\dummysound", 0.010000, 1.000000, 10};
				turretInfoType = "RscOptics_Offroad_01";
				discreteDistance = {100, 200, 300, 400, 500, 600, 700, 800, 900, 1000, 1100, 1200, 1300, 1400, 1500};
				discreteDistanceInitIndex = 2;
				minElev = -25;
				maxElev = 60;
				gunnerAction = "gunner_standup01";
				viewGunnerInExternal = "true";
				castGunnerShadow = 1;
				stabilizedInAxes = "StabilizedInAxesBoth";

				class ViewOptics: ViewOptics {
					initFov = 0.700000;
					minFov = 0.250000;
					maxFov = 1.100000;
				};

				class ViewGunner: ViewOptics {
				};
			};
		};
		
		class HitPoints: HitPoints {

			class HitGlass1: HitGlass1 {
				armor = 0.100000;
			};

			class HitGlass2: HitGlass2 {
				armor = 0.100000;
			};

			class HitGlass3: HitGlass3 {
				armor = 0.100000;
			};

			class HitGlass4: HitGlass4 {
				armor = 0.100000;
			};

			class HitLFWheel: HitLFWheel {
				armor = 0.800000;
			};

			class HitLBWheel: HitLF2Wheel {
				armor = 0.800000;
			};

			class HitRFWheel: HitRFWheel {
				armor = 0.800000;
			};

			class HitRBWheel: HitRF2Wheel {
				armor = 0.800000;
			};

			class HitFuel {
				armor = 1.400000;
				material = -1;
				name = "palivo";
				visual = "";
				passThrough = 1;
			};
		};
		
		class Damage {
			tex[] = {};
			mat[] =
			{
				"ebu_armorsuv\data\rvmat\SUV_body.rvmat",
				"ebu_armorsuv\data\rvmat\SUV_body_damage.rvmat",
				"ebu_armorsuv\data\rvmat\SUV_body_destruct.rvmat",
				
				"ebu_armorsuv\data\rvmat\SUV_chrom.rvmat",
				"ebu_armorsuv\data\rvmat\SUV_chrom_damage.rvmat",
				"ebu_armorsuv\data\rvmat\SUV_chrom_destruct.rvmat",
				
				"ebu_armorsuv\data\rvmat\SUV_glass.rvmat",
				"ebu_armorsuv\data\rvmat\SUV_glass_damage.rvmat",
				"ebu_armorsuv\data\rvmat\SUV_glass_destruct.rvmat",
				
				"ebu_armorsuv\data\rvmat\default.rvmat",
				"ebu_armorsuv\data\rvmat\default.rvmat",
				"ebu_armorsuv\data\rvmat\default_destruct.rvmat",
			};
		};
		
		class Library {
		libTextDesc = "Armed SUV";};
	};

	class ArmoredSUV_PMC: ArmoredSUV_Base_PMC{
	
		side = 1;
		scope = 2;
		faction = BLU_F;
		transportSoldier = 4;
		transportMaxBackpacks = 7;
		transportMaxWeapons = 5000;
		transportMaxMagazines = 20000;
		model = "\ebu_armorsuv\armoredSUV_PMC.p3d";
		displayName ="Armed SUV";
		armor = 32;
		cost = 50000;
		weapons[] = {"SportCarHorn"};
		class TransportItems
		{
			class _xx_FirstAidKit
			{
				name = "FirstAidKit";
				count = 6;
			};
		};
		simulation = "car";
		showNVGCargo[] = {0,1};
		soundAttenuationCargo[] = {1,0};
		damageResistance = 0.00581;
		threat[]={1, 0.3, 0.3};
		icon = "\ebu_armorsuv\data\ui\Icon_suv_minigun_PMC.paa";
    		picture = "\ebu_armorsuv\data\ui\Picture_suv_minigun_PMC_ca.paa";
		crew = "B_Soldier_F";
		typicalCargo[] = {"B_Soldier_F","B_Soldier_F","B_Soldier_F","B_Soldier_F","B_Soldier_F"};
		
				
		class AnimationSources: AnimationSources
		{
			class ReloadAnim
			{
				source = "reload";
				weapon = "M134_minigun";
			};
			class ReloadMagazine
			{
				source = "reloadmagazine";
				weapon = "M134_minigun";
			};
			class muzzle_rot_MG
			{
				source = "ammorandom";
				weapon = "M134_minigun";
			};
			class muzzle_hide_MG
			{
				source = "reload";
				weapon = "M134_minigun";
			};
			class Revolving {source="revolving"; weapon="M134_Minigun";};
			class HideGun_01 {source="user"; initPhase=0; animPeriod=1.2;};
			class HideGun_02: HideGun_01{};
			class HideGun_03: HideGun_01{};
			class HideGun_04: HideGun_01{};
			class CloseCover1 {source="user"; initPhase=0; animPeriod=0.7;};
			class CloseCover2: CloseCover1 {};
		};
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				body = "mainTurret";
				gun = "mainGun";
				animationSourceBody = "mainTurret";
				animationSourceGun = "mainGun";
				viewGunnerInExternal = 1;
				turretInfoType = "RscWeaponZeroing";
				discreteDistance[] = {100,200,300,400,500,600,800,1000,1200,1500};
				minElev = -10;
				maxElev = 40;
				initElev = 0;
				minTurn= -360;
				maxTurn= 360;
				initTurn= 0;
				discreteDistanceInitIndex = 2;
				gunnerForceOptics = 0;
				gunnerOutOpticsShowCursor = 0;
				soundServo[] = {"A3\sounds_f\dummysound",1e-006,1.0};
				animationSourceHatch = "";
				stabilizedInAxes = StabilizedInAxesNone;
				gunBeg = "muzzle_1";
				gunEnd = "chamber_1";
				maxHorizontalRotSpeed = 1.8;
				maxVerticalRotSpeed = 1.8;
				weapons[] = {"M134_minigun"};
				magazines[] = {"5000Rnd_762x51_Belt","5000Rnd_762x51_Belt","5000Rnd_762x51_Belt","5000Rnd_762x51_Belt"};
				gunnerAction = "ArmoredSUV_Gunner_PMC";
				gunnerCompartments = "Compartment1";
				ejectDeadGunner = 0;
				castGunnerShadow = 1;
				class GunFire: WeaponCloudsMGun
				{
					interval = 0.01;
				};
			};
		};
	};
	
	class ArmoredSUV_GunNotCommanding_PMC: ArmoredSUV_PMC{
		scope = 1;
		
		class Turrets: Turrets
		{
			class MainTurret: MainTurret
			{
				commanding = -2;				
			};
		};
	};
};

enum {
	 = 2,
	destructengine = 2,
	destructdefault = 6,
	destructwreck = 7,
	destructtree = 3,
	destructtent = 4,
	stabilizedinaxisx = 1,
	stabilizedinaxesxyz = 4,
	stabilizedinaxisy = 2,
	stabilizedinaxesboth = 3,
	destructno = 0,
	stabilizedinaxesnone = 0,
	destructman = 5,
	destructbuilding = 1
};
