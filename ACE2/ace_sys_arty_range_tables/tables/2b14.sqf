// 82mm Shell Ballistics (TODO)
// HE: Max Range with full increments : 6200
// WP: Max Range (same ballistics as HE): 6200 (use same shell) [not much data found]
// ILLUM: Max Range: 2670

_tableData_tables = [
["HE","he",[
["charge 0","chg0",[[100,1494,9,1.3,14.1],[200,1384,20,1.4,13.8],[300,1260,36,1.5,13.3],[400,1105,67,1.8,12.5]]],
["charge 1","chg1",[[300,1488,4,0.9,23.9],[400,1450,5,0.9,23.7],[500,1410,7,0.9,23.6],[600,1369,8,0.9,23.4],[700,1327,10,0.9,23.1],[800,1282,13,1,22.8],[900,1234,16,1,22.5],[1000,1182,20,1.1,22],[1100,1123,26,1.2,21.4],[1200,1053,36,1.4,20.6],[1300,960,57,1.7,19.4]]],
["charge 2","chg2",[[500,1492,2,0.7,31.7],[600,1470,3,0.7,31.6],[700,1447,3,0.7,31.5],[800,1424,3,0.7,31.4],[900,1401,4,0.7,31.2],[1000,1377,5,0.7,31.1],[1100,1353,5,0.7,30.9],[1200,1328,6,0.7,30.7],[1300,1302,7,0.7,30.5],[1400,1275,8,0.8,30.3],[1500,1248,9,0.8,30],[1600,1218,10,0.8,29.7],[1700,1188,11,0.8,29.3],[1800,1155,13,0.9,28.9],[1900,1119,15,0.9,28.4],[2000,1080,19,1,27.8],[2100,1035,23,1.1,27.2],[2200,981,31,1.3,26.2],[2300,909,48,1.7,24.9]]],
["charge 3","chg3",[[600,1507,1,0.6,37.9],[700,1492,1,0.6,37.8],[800,1476,2,0.6,37.8],[900,1460,2,0.6,37.7],[1000,1444,2,0.6,37.6],[1100,1427,2,0.6,37.5],[1200,1411,3,0.6,37.4],[1300,1394,3,0.6,37.3],[1400,1377,3,0.6,37.1],[1500,1359,4,0.6,37],[1600,1341,4,0.6,36.8],[1700,1323,4,0.6,36.7],[1800,1305,5,0.6,36.5],[1900,1286,5,0.6,36.3],[2000,1266,6,0.7,36],[2100,1246,6,0.7,35.8],[2200,1225,7,0.7,35.5],[2300,1203,7,0.7,35.2],[2400,1180,8,0.7,34.9],[2500,1157,9,0.8,34.5],[2600,1131,10,0.8,34.1],[2700,1105,12,0.8,33.7],[2800,1075,14,0.9,33.2],[2900,1044,16,0.9,32.6],[3000,1008,19,1,31.9],[3100,966,24,1.2,31.1],[3200,913,34,1.4,29.9],[3300,822,69,2.4,27.7]]],
["charge 4","chg4",[[800,1501,1,0.5,42.7],[900,1488,1,0.5,42.7],[1000,1476,1,0.5,42.6],[1100,1463,1,0.5,42.5],[1200,1450,2,0.5,42.5],[1300,1437,2,0.5,42.4],[1400,1424,2,0.5,42.3],[1500,1410,2,0.5,42.2],[1600,1397,2,0.5,42.1],[1700,1383,2,0.5,42],[1800,1369,3,0.6,41.8],[1900,1355,3,0.5,41.7],[2000,1341,3,0.5,41.6],[2100,1326,3,0.6,41.4],[2200,1312,4,0.6,41.2],[2300,1296,4,0.6,41],[2400,1281,4,0.6,40.9],[2500,1265,4,0.6,40.7],[2600,1249,5,0.6,40.4],[2700,1232,5,0.6,40.2],[2800,1215,5,0.6,39.9],[2900,1197,6,0.6,39.7],[3000,1179,6,0.7,39.4],[3100,1160,7,0.7,39.1],[3200,1140,7,0.7,38.7],[3300,1119,8,0.7,38.3],[3400,1096,9,0.7,37.9],[3500,1073,11,0.8,37.4],[3600,1048,12,0.8,36.9],[3700,1020,14,0.9,36.3],[3800,989,16,1,35.6],[3900,954,20,1.1,34.8],[4000,910,27,1.3,33.7],[4100,847,44,1.8,32]]],
["charge 5","chg5",[[900,1507,1,0.5,47.2],[1000,1497,1,0.5,47.1],[1100,1486,1,0.5,47.1],[1200,1475,1,0.5,47],[1300,1465,1,0.5,47],[1400,1454,1,0.5,46.9],[1500,1443,1,0.5,46.8],[1600,1432,1,0.5,46.8],[1700,1421,2,0.5,46.7],[1800,1410,2,0.5,46.6],[1900,1398,2,0.5,46.5],[2000,1387,2,0.5,46.4],[2100,1375,2,0.5,46.3],[2200,1364,2,0.5,46.1],[2300,1352,2,0.5,46],[2400,1340,2,0.5,45.9],[2500,1328,3,0.5,45.7],[2600,1315,3,0.5,45.6],[2700,1302,3,0.5,45.4],[2800,1290,3,0.5,45.2],[2900,1276,3,0.5,45.1],[3000,1263,3,0.5,44.9],[3100,1249,4,0.6,44.7],[3200,1236,4,0.6,44.4],[3300,1221,4,0.6,44.2],[3400,1206,5,0.6,44],[3500,1191,5,0.6,43.7],[3600,1176,5,0.6,43.4],[3700,1160,6,0.6,43.1],[3800,1143,6,0.6,42.8],[3900,1126,6,0.6,42.5],[4000,1108,7,0.7,42.1],[4100,1089,8,0.7,41.7],[4200,1069,9,0.7,41.2],[4300,1047,9,0.7,40.8],[4400,1024,11,0.8,40.2],[4500,999,13,0.9,39.6],[4600,972,15,0.9,38.9],[4700,940,18,1.1,38.1],[4800,903,23,1.2,37.1],[4900,852,34,1.6,35.6]]],
["charge 6","chg6",[[1000,1510,1,0.4,50.9],[1100,1500,1,0.4,50.8],[1200,1491,1,0.5,50.8],[1300,1482,1,0.5,50.7],[1400,1473,1,0.5,50.6],[1500,1463,1,0.5,50.6],[1600,1454,1,0.5,50.5],[1700,1444,1,0.5,50.5],[1800,1435,1,0.5,50.4],[1900,1425,1,0.5,50.3],[2000,1415,1,0.5,50.2],[2100,1405,1,0.5,50.1],[2200,1395,2,0.5,50],[2300,1385,2,0.5,49.9],[2400,1375,2,0.5,49.8],[2500,1365,2,0.5,49.7],[2600,1354,2,0.5,49.6],[2700,1344,2,0.5,49.5],[2800,1333,2,0.5,49.3],[2900,1322,2,0.5,49.2],[3000,1311,2,0.5,49],[3100,1300,3,0.5,48.9],[3200,1289,3,0.5,48.7],[3300,1277,3,0.5,48.6],[3400,1265,3,0.5,48.4],[3500,1254,3,0.5,48.2],[3600,1241,3,0.5,48],[3700,1229,3,0.5,47.8],[3800,1216,4,0.5,47.5],[3900,1203,4,0.5,47.3],[4000,1190,4,0.6,47.1],[4100,1176,4,0.6,46.8],[4200,1162,5,0.6,46.5],[4300,1148,5,0.6,46.2],[4400,1133,5,0.6,45.9],[4500,1117,6,0.6,45.6],[4600,1101,6,0.6,45.2],[4700,1084,7,0.6,44.8],[4800,1066,7,0.7,44.4],[4900,1047,8,0.7,43.9],[5000,1028,9,0.7,43.4],[5100,1006,10,0.8,42.9],[5200,983,12,0.9,42.3],[5300,958,13,0.9,41.6],[5400,929,16,1,40.7],[5500,894,20,1.1,39.7],[5600,849,30,1.5,38.3]]]
]],
["WP","wp",[
["charge 0","chg0",[[100,1494,9,1.3,14.1],[200,1384,20,1.4,13.8],[300,1260,36,1.5,13.3],[400,1105,67,1.8,12.5]]],
["charge 1","chg1",[[300,1488,4,0.9,23.9],[400,1450,5,0.9,23.7],[500,1410,7,0.9,23.6],[600,1369,8,0.9,23.4],[700,1327,10,0.9,23.1],[800,1282,13,1,22.8],[900,1234,16,1,22.5],[1000,1182,20,1.1,22],[1100,1123,26,1.2,21.4],[1200,1053,36,1.4,20.6],[1300,960,57,1.7,19.4]]],
["charge 2","chg2",[[500,1492,2,0.7,31.7],[600,1470,3,0.7,31.6],[700,1447,3,0.7,31.5],[800,1424,3,0.7,31.4],[900,1401,4,0.7,31.2],[1000,1377,5,0.7,31.1],[1100,1353,5,0.7,30.9],[1200,1328,6,0.7,30.7],[1300,1302,7,0.7,30.5],[1400,1275,8,0.8,30.3],[1500,1248,9,0.8,30],[1600,1218,10,0.8,29.7],[1700,1188,11,0.8,29.3],[1800,1155,13,0.9,28.9],[1900,1119,15,0.9,28.4],[2000,1080,19,1,27.8],[2100,1035,23,1.1,27.2],[2200,981,31,1.3,26.2],[2300,909,48,1.7,24.9]]],
["charge 3","chg3",[[600,1507,1,0.6,37.9],[700,1492,1,0.6,37.8],[800,1476,2,0.6,37.8],[900,1460,2,0.6,37.7],[1000,1444,2,0.6,37.6],[1100,1427,2,0.6,37.5],[1200,1411,3,0.6,37.4],[1300,1394,3,0.6,37.3],[1400,1377,3,0.6,37.1],[1500,1359,4,0.6,37],[1600,1341,4,0.6,36.8],[1700,1323,4,0.6,36.7],[1800,1305,5,0.6,36.5],[1900,1286,5,0.6,36.3],[2000,1266,6,0.7,36],[2100,1246,6,0.7,35.8],[2200,1225,7,0.7,35.5],[2300,1203,7,0.7,35.2],[2400,1180,8,0.7,34.9],[2500,1157,9,0.8,34.5],[2600,1131,10,0.8,34.1],[2700,1105,12,0.8,33.7],[2800,1075,14,0.9,33.2],[2900,1044,16,0.9,32.6],[3000,1008,19,1,31.9],[3100,966,24,1.2,31.1],[3200,913,34,1.4,29.9],[3300,822,69,2.4,27.7]]],
["charge 4","chg4",[[800,1501,1,0.5,42.7],[900,1488,1,0.5,42.7],[1000,1476,1,0.5,42.6],[1100,1463,1,0.5,42.5],[1200,1450,2,0.5,42.5],[1300,1437,2,0.5,42.4],[1400,1424,2,0.5,42.3],[1500,1410,2,0.5,42.2],[1600,1397,2,0.5,42.1],[1700,1383,2,0.5,42],[1800,1369,3,0.6,41.8],[1900,1355,3,0.5,41.7],[2000,1341,3,0.5,41.6],[2100,1326,3,0.6,41.4],[2200,1312,4,0.6,41.2],[2300,1296,4,0.6,41],[2400,1281,4,0.6,40.9],[2500,1265,4,0.6,40.7],[2600,1249,5,0.6,40.4],[2700,1232,5,0.6,40.2],[2800,1215,5,0.6,39.9],[2900,1197,6,0.6,39.7],[3000,1179,6,0.7,39.4],[3100,1160,7,0.7,39.1],[3200,1140,7,0.7,38.7],[3300,1119,8,0.7,38.3],[3400,1096,9,0.7,37.9],[3500,1073,11,0.8,37.4],[3600,1048,12,0.8,36.9],[3700,1020,14,0.9,36.3],[3800,989,16,1,35.6],[3900,954,20,1.1,34.8],[4000,910,27,1.3,33.7],[4100,847,44,1.8,32]]],
["charge 5","chg5",[[900,1507,1,0.5,47.2],[1000,1497,1,0.5,47.1],[1100,1486,1,0.5,47.1],[1200,1475,1,0.5,47],[1300,1465,1,0.5,47],[1400,1454,1,0.5,46.9],[1500,1443,1,0.5,46.8],[1600,1432,1,0.5,46.8],[1700,1421,2,0.5,46.7],[1800,1410,2,0.5,46.6],[1900,1398,2,0.5,46.5],[2000,1387,2,0.5,46.4],[2100,1375,2,0.5,46.3],[2200,1364,2,0.5,46.1],[2300,1352,2,0.5,46],[2400,1340,2,0.5,45.9],[2500,1328,3,0.5,45.7],[2600,1315,3,0.5,45.6],[2700,1302,3,0.5,45.4],[2800,1290,3,0.5,45.2],[2900,1276,3,0.5,45.1],[3000,1263,3,0.5,44.9],[3100,1249,4,0.6,44.7],[3200,1236,4,0.6,44.4],[3300,1221,4,0.6,44.2],[3400,1206,5,0.6,44],[3500,1191,5,0.6,43.7],[3600,1176,5,0.6,43.4],[3700,1160,6,0.6,43.1],[3800,1143,6,0.6,42.8],[3900,1126,6,0.6,42.5],[4000,1108,7,0.7,42.1],[4100,1089,8,0.7,41.7],[4200,1069,9,0.7,41.2],[4300,1047,9,0.7,40.8],[4400,1024,11,0.8,40.2],[4500,999,13,0.9,39.6],[4600,972,15,0.9,38.9],[4700,940,18,1.1,38.1],[4800,903,23,1.2,37.1],[4900,852,34,1.6,35.6]]],
["charge 6","chg6",[[1000,1510,1,0.4,50.9],[1100,1500,1,0.4,50.8],[1200,1491,1,0.5,50.8],[1300,1482,1,0.5,50.7],[1400,1473,1,0.5,50.6],[1500,1463,1,0.5,50.6],[1600,1454,1,0.5,50.5],[1700,1444,1,0.5,50.5],[1800,1435,1,0.5,50.4],[1900,1425,1,0.5,50.3],[2000,1415,1,0.5,50.2],[2100,1405,1,0.5,50.1],[2200,1395,2,0.5,50],[2300,1385,2,0.5,49.9],[2400,1375,2,0.5,49.8],[2500,1365,2,0.5,49.7],[2600,1354,2,0.5,49.6],[2700,1344,2,0.5,49.5],[2800,1333,2,0.5,49.3],[2900,1322,2,0.5,49.2],[3000,1311,2,0.5,49],[3100,1300,3,0.5,48.9],[3200,1289,3,0.5,48.7],[3300,1277,3,0.5,48.6],[3400,1265,3,0.5,48.4],[3500,1254,3,0.5,48.2],[3600,1241,3,0.5,48],[3700,1229,3,0.5,47.8],[3800,1216,4,0.5,47.5],[3900,1203,4,0.5,47.3],[4000,1190,4,0.6,47.1],[4100,1176,4,0.6,46.8],[4200,1162,5,0.6,46.5],[4300,1148,5,0.6,46.2],[4400,1133,5,0.6,45.9],[4500,1117,6,0.6,45.6],[4600,1101,6,0.6,45.2],[4700,1084,7,0.6,44.8],[4800,1066,7,0.7,44.4],[4900,1047,8,0.7,43.9],[5000,1028,9,0.7,43.4],[5100,1006,10,0.8,42.9],[5200,983,12,0.9,42.3],[5300,958,13,0.9,41.6],[5400,929,16,1,40.7],[5500,894,20,1.1,39.7],[5600,849,30,1.5,38.3]]]
]],
["ILLUM","illum",[
["charge 0","chg0",[[100,1474,13,1.5,12.8],[200,1338,29,1.6,12.5],[300,1178,57,1.8,11.8],[400,893,177,2.9,9.9]]],
["charge 1","chg1",[[300,1495,3,0.8,24.6],[400,1458,4,0.8,24.5],[500,1422,6,0.9,24.4],[600,1384,7,0.9,24.2],[700,1344,9,0.9,24],[800,1303,11,0.9,23.7],[900,1259,13,1,23.4],[1000,1212,16,1,23],[1100,1161,21,1.1,22.5],[1200,1103,27,1.2,21.9],[1300,1033,37,1.4,21],[1400,935,63,1.9,19.7]]],
["charge 2","chg2",[[500,1493,2,0.7,31.8],[600,1471,2,0.7,31.8],[700,1449,3,0.7,31.7],[800,1426,3,0.7,31.6],[900,1403,4,0.7,31.4],[1000,1380,4,0.7,31.3],[1100,1356,5,0.7,31.1],[1200,1331,6,0.7,30.9],[1300,1306,7,0.7,30.7],[1400,1279,7,0.8,30.5],[1500,1252,8,0.8,30.2],[1600,1223,10,0.8,29.9],[1700,1193,11,0.8,29.5],[1800,1161,13,0.9,29.1],[1900,1126,15,0.9,28.7],[2000,1088,18,1,28.1],[2100,1046,22,1.1,27.5],[2200,995,28,1.2,26.6],[2300,929,42,1.5,25.4]]],
["charge 3","chg3",[[600,1507,1,0.6,37.7],[700,1491,1,0.6,37.7],[800,1475,2,0.6,37.6],[900,1459,2,0.6,37.5],[1000,1442,2,0.6,37.4],[1100,1426,2,0.6,37.3],[1200,1409,3,0.6,37.2],[1300,1392,3,0.6,37.1],[1400,1375,3,0.6,37],[1500,1357,4,0.6,36.8],[1600,1339,4,0.6,36.7],[1700,1321,4,0.6,36.5],[1800,1302,5,0.6,36.3],[1900,1283,5,0.6,36.1],[2000,1263,6,0.7,35.8],[2100,1242,6,0.7,35.6],[2200,1221,7,0.7,35.3],[2300,1199,8,0.7,35],[2400,1176,8,0.7,34.7],[2500,1152,9,0.8,34.3],[2600,1126,11,0.8,33.9],[2700,1098,12,0.8,33.5],[2800,1068,14,0.9,32.9],[2900,1036,16,1,32.3],[3000,999,20,1.1,31.6],[3100,954,27,1.3,30.7],[3200,896,38,1.6,29.4]]]
]]
];
_tableData_mags = ["HE", "WP", "Illum"];
_tableData_charges = ["charge 0", "charge 1", "charge 2", "charge 3", "charge 4"];
//return
[_tableData_tables, _tableData_mags, _tableData_charges]