#include "skyirmsegogunmanagedmods.h"


SkyrimSEGOGUnmangedMods::SkyrimSEGOGUnmangedMods(const GameGamebryo *game)
  : GamebryoUnmangedMods(game)
{}

SkyrimSEGOGUnmangedMods::~SkyrimSEGOGUnmangedMods()
{}

QStringList SkyrimSEGOGUnmangedMods::mods(bool onlyOfficial) const {
  QStringList result;

  QStringList pluginList = game()->primaryPlugins();
  QStringList otherPlugins = game()->DLCPlugins();
  otherPlugins.append(game()->CCPlugins());
  for (QString plugin : otherPlugins) {
    pluginList.removeAll(plugin);
  }
  QDir dataDir(game()->dataDirectory());
  for (const QString &fileName : dataDir.entryList({ "*.esp", "*.esl", "*.esm" })) {
    if (!pluginList.contains(fileName, Qt::CaseInsensitive)) {
      if (!onlyOfficial || pluginList.contains(fileName, Qt::CaseInsensitive)) {
        result.append(fileName.chopped(4)); // trims the extension off
      }
    }
  }

  return result;
}
