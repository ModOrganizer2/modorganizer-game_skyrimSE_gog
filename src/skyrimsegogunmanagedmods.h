#ifndef _SKYRIMSEGOGUNMANAGEDMODS_H
#define _SKYRIMSEGOGUNMANAGEDMODS_H


#include "gamebryounmanagedmods.h"
#include <gamegamebryo.h>


class SkyrimSEGOGUnmangedMods : public GamebryoUnmangedMods {
public:
  SkyrimSEGOGUnmangedMods(const GameGamebryo *game);
  ~SkyrimSEGOGUnmangedMods();

  virtual QStringList mods(bool onlyOfficial) const override;
};



#endif // _SKYRIMSEGOGUNMANAGEDMODS_H
