/*
 * vtx_uh60_acre_fnc_setup
 *
 * sets up the acre module
 *
 * params (array)[(object) vehicle]
 */

params ["_vehicle"];
if (!(isClass (configFile >> "cfgPatches" >> "acre_main"))) exitWith {false};

//init no worky
//[_vehicle] call vtx_uh60_acre_fnc_setState;
true
