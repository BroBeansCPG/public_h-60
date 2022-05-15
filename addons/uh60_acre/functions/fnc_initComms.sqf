/*
 * vtx_uh60_acre_fnc_initComms
 *
 * initializes acre comms systems once BUS is on
 *
 * 
 */
params ["_vehicle"];

private _monitorPos = [_vehicle, acre_player, 0, "monitorKnob"] call acre_sys_intercom_fnc_getStationConfiguration;

if(!(_monitorPos == 7)) then {
    [_vehicle, acre_player, 0, "monitorKnob", 7] call acre_sys_intercom_fnc_setStationConfiguration;
};

for "_i" from 1 to 4 do {
    _value = _vehicle animationSourcePhase format ["COMM%1_ROT", _i]; 
    _value = _value * (1/0.75);
    _racks = [_vehicle] call acre_sys_rack_fnc_getVehicleRacks;
    _radio = [_racks # (_i - 1)] call acre_sys_rack_fnc_getMountedRadio;
    [_radio, _value] call acre_sys_radio_fnc_setRadioVolume;
};