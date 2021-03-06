static Object SpawnObject(string type, vector position, vector orientation)
{
    Object obj = GetGame().CreateObjectEx(type, position, ECE_SETUP | ECE_UPDATEPATHGRAPH | ECE_CREATEPHYSICS);
    if (!obj) {
        Error("Failed to create object " + type);
        return null;
    }

    obj.SetPosition(position);
    obj.SetOrientation(orientation);
    obj.SetOrientation(obj.GetOrientation());
    obj.SetFlags(EntityFlags.STATIC, false);
    obj.Update();
	obj.SetAffectPathgraph(true, false);
	if (obj.CanAffectPathgraph()) {
        GetGame().GetCallQueue(CALL_CATEGORY_SYSTEM).CallLater(GetGame().UpdatePathgraphRegionByObject, 100, false, obj);
    } 

    return obj;
}

// Paste anything below this line into the bottom of your 'void main()' function


// Created Objects
SpawnObject("bldr_rds_runway_poj_draha", "1266.520020 479.209991 14517.900391", "-63.999996 0.000000 0.000000");
SpawnObject("bldr_rds_runway_poj_draha", "1194.790039 479.209991 14552.900391", "-63.999996 0.000000 0.000000");
SpawnObject("bldr_rds_runway_poj_draha", "1122.935181 479.035034 14587.940430", "-63.999996 0.000000 0.000000");
SpawnObject("bldr_rds_runway_poj_draha", "1051.209106 479.011200 14622.917969", "-63.999996 0.000000 0.000000");
SpawnObject("bldr_rds_runway_poj_draha", "979.650146 478.811279 14657.815430", "-63.999996 0.000000 0.000000");
SpawnObject("bldr_rds_runway_poj_draha", "908.182495 479.775238 14692.643555", "-63.999996 0.000000 0.000000");
SpawnObject("Land_Mil_AircraftShelter", "1262.270020 455.200012 14474.000000", "-64.757698 0.000000 0.500000");
SpawnObject("Land_Mil_Airfield_HQ", "1436.310059 464.869995 14500.200195", "118.499992 0.000000 0.000000");
SpawnObject("Land_Mil_Barracks_Round", "1458.849976 462.200012 14443.000000", "-154.499969 1.000000 0.000000");
SpawnObject("Land_Mil_Barracks1", "1348.010010 457.100006 14508.700195", "-154.000000 0.000000 0.500000");
SpawnObject("Land_Mil_Barracks3", "1448.160034 461.899994 14470.799805", "27.499998 0.000000 0.000000");
SpawnObject("Land_Mil_Barracks2", "1336.359985 455.089996 14532.700195", "116.500000 0.000000 0.000000");
SpawnObject("Land_Mil_Barracks_Round", "1228.290039 455.600006 14480.200195", "-154.499969 0.000000 0.000000");
SpawnObject("Land_Mil_Barracks3", "1209.000000 456.750000 14493.700195", "-154.000000 0.000000 0.000000");
SpawnObject("Land_Mil_Barracks1", "1273.719971 456.600006 14565.299805", "115.500008 0.000000 0.300000");
SpawnObject("Land_Mil_Barracks3", "1236.300049 456.600006 14575.500000", "25.529099 0.000000 0.000000");
SpawnObject("Land_Wreck_Uaz", "1261.439941 455.140015 14565.799805", "0.000000 0.000000 0.000000");
SpawnObject("Land_Wreck_Uaz", "1208.479980 455.239990 14502.799805", "-152.999969 0.000000 0.000000");
SpawnObject("Land_Wreck_Uaz", "1237.359985 455.089996 14565.700195", "27.000000 0.000000 0.000000");
SpawnObject("Land_Wreck_Uaz", "1346.930054 455.040009 14522.099609", "72.000015 0.000000 0.000000");
SpawnObject("Land_Wreck_Uaz", "1421.839966 460.373993 14490.900391", "0.000000 0.000000 0.000000");
SpawnObject("Land_Mil_Tent_Big1_1", "1425.819946 459.799988 14456.200195", "117.322983 0.000000 0.000000");
SpawnObject("Land_Container_1Mo", "1434.859985 460.760010 14474.099609", "-152.999969 0.000000 0.000000");
SpawnObject("Land_Container_1Mo", "1323.709961 456.250000 14474.799805", "-151.524002 0.000000 0.000000");
SpawnObject("Land_Container_1Mo", "1326.180054 456.250000 14473.400391", "-151.524002 0.000000 0.000000");
SpawnObject("Land_Container_1Mo", "1279.410034 455.380005 14556.700195", "-152.523972 0.000000 0.000000");
SpawnObject("bldr_Garbage_Bin", "1445.310059 460.089996 14466.500000", "0.000000 0.000000 0.000000");
SpawnObject("bldr_Garbage_Container", "1426.170044 460.029999 14494.500000", "90.000000 -1.000000 -4.500000");
SpawnObject("bldr_Garbage_Bin", "1427.449951 459.714996 14494.500000", "0.000000 0.000000 0.000000");
SpawnObject("bldr_Garbage_Container_Glass", "1330.930054 454.540009 14525.700195", "85.931976 0.000000 0.000000");
SpawnObject("bldr_Garbage_Container", "1211.459961 455.200012 14497.900391", "-101.495003 0.000000 0.000000");
SpawnObject("bldr_Garbage_Container_Paper", "1233.930054 455.049988 14570.900391", "83.767685 0.000000 0.000000");
SpawnObject("Land_Mil_ATC_Big", "1379.689941 471.450012 14489.900391", "-154.499969 0.000000 0.000000");
SpawnObject("Land_Mil_Guardhouse1", "1495.199951 462.799988 14461.900391", "-129.673996 0.000000 0.000000");
SpawnObject("Land_Mil_Radar_Mobile1", "1350.616821 452.592499 14561.323242", "0.000000 -0.000000 -0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Small", "1398.069946 468.670013 14447.700195", "-153.500000 0.000000 0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Small", "1395.010010 466.450012 14497.400391", "-63.500000 0.000000 0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Big", "1438.000000 468.790009 14501.099609", "-61.499989 0.000000 0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Small", "1331.400024 455.850006 14491.299805", "116.000008 0.000000 0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Big", "1190.910034 455.299988 14507.200195", "116.000008 0.000000 0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Watchtower", "1210.390015 456.279999 14578.599609", "25.500000 0.000000 0.000000");
SpawnObject("Land_Mil_Tent_Big3", "1196.689941 455.299988 14591.400391", "-64.499992 0.000000 0.000000");
SpawnObject("Land_Wreck_Uaz", "1192.319946 455.049988 14586.400391", "-31.360794 0.000000 0.000000");
SpawnObject("Land_Mil_CamoNet_Roof_east", "1303.339966 455.899994 14537.599609", "-154.000000 0.000000 0.000000");
SpawnObject("Land_Roadblock_WoodenCrate", "1298.276001 454.270355 14539.135742", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_Misc_WoodenCrate_3x", "1301.292969 454.548798 14539.045898", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_Misc_WoodenCrate_5x", "1298.879517 454.915283 14537.253906", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_Misc_WoodenCrate_5x", "1303.254028 454.707092 14538.940430", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_Misc_WoodenCrate_5x", "1305.181763 454.613617 14538.746094", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_Misc_WoodenCrate_3x", "1307.086304 454.263794 14538.500977", "0.000000 -0.000000 -0.000000");
SpawnObject("bldr_Misc_WoodenCrate_3x", "1301.014160 454.615417 14536.698242", "0.000000 -0.000000 -0.000000");
SpawnObject("Land_Mil_CamoNet_Roof_east", "1320.897095 456.815338 14461.623047", "-61.186382 0.000000 0.000000");
SpawnObject("Land_Roadblock_WoodenCrate", "1323.311035 455.432373 14466.602539", "92.813370 -0.000000 -0.000000");
SpawnObject("bldr_Misc_WoodenCrate_3x", "1323.382813 455.856598 14463.893555", "92.813393 -0.000000 -0.000000");
SpawnObject("bldr_Misc_WoodenCrate_5x", "1321.205200 456.008575 14466.145508", "92.813370 -0.000000 -0.000000");
SpawnObject("bldr_Misc_WoodenCrate_5x", "1322.974365 456.136597 14461.684570", "92.813370 -0.000000 -0.000000");
SpawnObject("bldr_Misc_WoodenCrate_5x", "1322.839355 456.188721 14459.774414", "92.813370 -0.000000 -0.000000");
SpawnObject("bldr_Misc_WoodenCrate_3x", "1322.752197 456.155579 14458.035156", "92.813370 -0.000000 -0.000000");
SpawnObject("bldr_Misc_WoodenCrate_3x", "1320.730957 455.767365 14464.166992", "92.813370 -0.000000 -0.000000");
SpawnObject("bldr_hbarrier_6m", "1336.989990 455.281006 14505.799805", "-63.000000 0.000000 3.500000");
SpawnObject("bldr_hbarrier_6m", "1272.599976 454.799988 14554.000000", "-63.999996 0.000000 0.000000");
SpawnObject("bldr_hbarrier_6m", "1224.770020 454.799988 14570.000000", "-63.999996 0.000000 0.000000");
SpawnObject("bldr_hbarrier_6m", "1204.709961 454.899994 14503.000000", "-63.999996 0.000000 0.000000");
SpawnObject("bldr_hbarrier_6m", "1207.239990 454.899994 14508.299805", "-63.999996 0.000000 0.000000");
SpawnObject("bldr_hbarrier_6m", "1379.199951 456.049988 14469.700195", "27.000000 0.000000 0.000000");
SpawnObject("bldr_hbarrier_6m", "1489.829956 460.970001 14456.700195", "-39.999996 0.000000 0.000000");
SpawnObject("bldr_hbarrier_6m", "1457.280029 460.125000 14463.099609", "27.499998 0.000000 0.000000");
SpawnObject("Wreck_Mi8_Crashed", "1315.510010 456.815002 14491.700195", "27.000000 0.000000 0.000000");
SpawnObject("bldr_Decal_Heli_Army", "1314.530029 461.649994 14487.099609", "0.000000 0.000000 0.000000");
SpawnObject("bldr_mil_artillery_nest", "1474.849976 460.200012 14459.799805", "7.000050 0.000000 0.000000");
SpawnObject("bldr_mil_artillery_nest", "1506.329956 460.420013 14441.799805", "117.000000 0.000000 0.000000");
SpawnObject("bldr_mil_artillery_nest", "1426.989990 460.500000 14440.500000", "168.815964 0.000000 0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Big", "1386.000000 468.850006 14424.599609", "25.500000 0.000000 0.000000");
SpawnObject("Land_Airfield_Radar_Tall", "1010.049988 476.399994 14580.000000", "28.000000 0.000000 0.000000");
SpawnObject("Land_Repair_Center", "1042.709961 456.459991 14565.599609", "115.500008 0.000000 0.000000");
SpawnObject("Land_Mil_Tent_Big4", "1059.819946 455.220001 14570.000000", "-154.000000 0.000000 0.000000");
SpawnObject("bldr_mil_radar_mobile_generator", "1025.489990 455.420013 14571.599609", "28.000000 0.000000 0.000000");
SpawnObject("Land_Wreck_Uaz", "1026.319946 454.880005 14581.099609", "0.000000 0.000000 0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Small", "1081.020020 454.980011 14571.500000", "-63.999996 0.000000 0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Small", "1177.790039 455.010010 14592.099609", "115.500008 0.000000 0.000000");
SpawnObject("Land_Wreck_Uaz", "1046.050049 454.859985 14571.599609", "-152.999969 0.000000 0.000000");
SpawnObject("Land_Tank_Medium_Stairs", "1288.239990 455.600006 14548.700195", "115.500008 0.000000 0.000000");
SpawnObject("Land_Tank_Medium_Stairs", "1285.969971 455.600006 14549.799805", "115.500008 0.000000 0.000000");
SpawnObject("Land_Mil_Fortified_Nest_Watchtower", "1004.169983 456.109985 14604.799805", "116.000008 0.000000 0.000000");
SpawnObject("Land_Wreck_V3S", "999.382446 455.490356 14591.578125", "-98.999962 0.000000 -0.000000");
SpawnObject("Land_Misc_Well_Pump_Blue", "1381.329956 456.149994 14471.500000", "-117.000000 0.000000 0.000000");
SpawnObject("bldr_hbarrier_6m", "996.653992 454.600006 14614.599609", "-63.000000 0.000000 0.000000");
SpawnObject("bldr_hbarrier_6m", "994.046021 454.600006 14609.400391", "-63.000000 0.000000 0.000000");
SpawnObject("bldr_hbarrier_6m", "990.909973 454.600006 14594.500000", "92.929398 0.000000 0.000000");
SpawnObject("bldr_hbarrier_6m", "991.169983 454.600006 14600.400391", "92.929398 0.000000 0.000000");
SpawnObject("Land_Wreck_Uaz", "998.471985 454.850006 14597.500000", "-80.999977 0.000000 0.000000");
SpawnObject("bldr_rds_path_dirt_30", "1230.849976 454.247009 14505.299805", "-63.999996 0.000000 0.000000");
SpawnObject("bldr_rds_path_dirt_30", "1207.189941 454.226990 14517.099609", "-63.999996 0.000000 0.000000");
SpawnObject("bldr_rds_path_dirt_30", "1182.819946 454.299988 14529.200195", "-63.999996 0.000000 0.000000");
SpawnObject("bldr_rds_path_dirt_30", "1159.160034 454.350006 14541.000000", "-63.999996 0.000000 0.000000");
SpawnObject("bldr_rds_path_dirt_30", "1296.442383 454.231934 14528.533203", "-63.999996 0.000000 0.000000");
SpawnObject("bldr_rds_path_dirt_30", "1272.782349 454.211914 14540.333008", "-63.999996 0.000000 0.000000");
SpawnObject("bldr_rds_path_dirt_30", "1248.410767 454.221222 14552.403320", "-63.999996 0.000000 0.000000");
SpawnObject("bldr_rds_path_dirt_30", "1224.589722 454.218872 14564.133789", "-63.999996 0.000000 0.000000");


// Uncomment if you want to export loot from newly added buildings
// Position, Radius (increase if you have a larger map than Chernarus)
// GetCEApi().ExportProxyData(Vector(7500, GetGame().SurfaceY(7500, 7500), 7500), 20000);
