#include "skyrimsegogscriptextender.h"

#include <QString>
#include <QStringList>

SkyrimSEGOGScriptExtender::SkyrimSEGOGScriptExtender(GameGamebryo const *game) :
  GamebryoScriptExtender(game)
{
}

QString SkyrimSEGOGScriptExtender::BinaryName() const
{
  return "skse64_loader.exe";
}

QString SkyrimSEGOGScriptExtender::PluginPath() const
{
  return "skse/plugins";
}
