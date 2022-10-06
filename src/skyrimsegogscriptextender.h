#ifndef _SKYRIMSEGOGSCRIPTEXTENDER_H
#define _SKYRIMSEGOGSCRIPTEXTENDER_H

#include "gamebryoscriptextender.h"

class GameGamebryo;

class SkyrimSEGOGScriptExtender : public GamebryoScriptExtender
{
public:
  SkyrimSEGOGScriptExtender(GameGamebryo const *game);

  virtual QString BinaryName() const override;
  virtual QString PluginPath() const override;

};

#endif // _SKYRIMSEGOGSCRIPTEXTENDER_H
