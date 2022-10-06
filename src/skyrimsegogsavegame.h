#ifndef _SKYRIMSEGOGSAVEGAME_H
#define _SKYRIMSEGOGSAVEGAME_H

#include "gamebryosavegame.h"
#include "gameskyrimsegog.h"

namespace MOBase { class IPluginGame; }

class SkyrimSEGOGSaveGame : public GamebryoSaveGame
{
public:
  SkyrimSEGOGSaveGame(QString const &fileName, GameSkyrimSE const *game);

protected:

  // Fetch easy-to-access information.
  void fetchInformationFields(FileWrapper& wrapper,
    unsigned long& version,
    QString& playerName,
    unsigned short& playerLevel,
    QString& playerLocation,
    unsigned long& saveNumber,
    FILETIME& creationTime) const;

  std::unique_ptr<DataFields> fetchDataFields() const override;

};

#endif // _SKYRIMSEGOGSAVEGAME_H
