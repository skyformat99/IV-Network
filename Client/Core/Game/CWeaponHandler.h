//========== IV:Multiplayer - https://github.com/IVMultiplayer/IVMultiplayer ==========
//
// File: CWeaponHandler.h
// Project: Client.Core
// Author: FRi <FRi.developing@gmail.com>
// License: See LICENSE in root directory
//
//==============================================================================

#ifndef CWeaponHandler_h
#define CWeaponHandler_h

class CWeaponHandler {

private:

public:
					CWeaponHandler() { };
					~CWeaponHandler() { };

	static void		InstallAimSyncHooks();
};

#endif // CWeaponHandler_h