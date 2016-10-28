/*
	Activtion: Gamelogic, repeatedly, present
	Condition: True
*/

fun = 		   // Zone name
	[
		"fun", // Same as above
		[
			1, // Zone ID
			0, // Keep as 0
			0  // Keep as 0
		],
		[      // Infantry
			x, // How many groups
			x, // Size of groups
			x, // Total number of waypoints
			x  // Number of waypoints per group
		],
		[	   // Wheeled vehicles
			x, // How many groups
			x, // Size of groups
			x, // Total number of waypoints
			x  // Number of waypoints per group
		],
		[	   // Tracked vehicles
			x, // How many groups
			x, // Size of groups
			x, // Total number of waypoints
			x  // Number of waypoints per group
		],
		[	   // Helicopters
			x, // How many groups
			0, // Size of groups (if cargo is used)
			x  // Number of waypoints per group
		],
		[
			1, // 0 = East, 1 = West, 2 = IND, 3 = CIV
			1, // Same as above
			1, // Same as above
			0  // Keep as 0
		]
	] spawn DAC_Zone
