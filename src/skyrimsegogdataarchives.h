#ifndef _SKYRIMSEGOGDATAARCHIVES_H
#define _SKYRIMSEGOGDATAARCHIVES_H

#include "gamebryodataarchives.h"
#include <QStringList>
#include <QDir>

namespace MOBase { class IProfile; }


class SkyrimSEGOGDataArchives : public GamebryoDataArchives
{

public:

  SkyrimSEGOGDataArchives(const QDir &myGamesDir);

public:

  virtual QStringList vanillaArchives() const override;
  virtual QStringList archives(const MOBase::IProfile *profile) const override;

private:

  virtual void writeArchiveList(MOBase::IProfile *profile, const QStringList &before) override;

};

#endif // _SKYRIMSEGOGDATAARCHIVES_H
