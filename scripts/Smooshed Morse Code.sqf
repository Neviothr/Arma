// https://www.reddit.com/r/dailyprogrammer/comments/cmd1hb/20190805_challenge_380_easy_smooshed_morse_code_1/?utm_source=share&utm_medium=web2x
private _inputString = "bits";
private _expectReturn = "-.....-...";

private _morseArray = [
	["A", ".-"],
	["B", "-..."],
	["C", "-.-."],
	["D", "-.."],
	["E", "."],
	["F", "..-."],
	["G", "--."],
	["H", "...."],
	["I", ".."],
	["J", ".---"],
	["K", "-.-"],
	["L", ".-.."],
	["M", "--"],
	["N", "-."],
	["O", "---"],
	["P", ".--."],
	["Q", "--.-"],
	["R", ".-."],
	["S", "..."],
	["T", "-"],
	["U", "..-"],
	["V", "...-"],
	["W", ".--"],
	["X", "-..-"],
	["Y", "-.--"],
	["Z", "--.."]
];

private _returnString = "";
private _splitString = _inputString splitString "";

{
	private _letterIndex = (toArray toUpper _x select 0) - 65;

	_returnString = _returnString + (_morseArray select _letterIndex select 1);
} forEach _splitString;

hint format ["%1 \n %2", _returnString, _returnString == _expectReturn];
