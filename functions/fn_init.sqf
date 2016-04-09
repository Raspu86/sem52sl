/*
 	Name: TFAR_fnc_TaskForceArrowheadRadioInit
 	
 	Author(s):
		NKey
		L-H
 	
 	Description:
		Initialises TFAR, server and client.
 	
 	Parameters: 
		Nothing
 	
 	Returns:
		Nothing
 	
 	Example:
		Called by ArmA via functions library.
*/

if (hasInterface) then {
	[] spawn TFW_fnc_ClientInit;
};