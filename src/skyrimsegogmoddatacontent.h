#ifndef SKYRIMSEGOG_MODDATACONTENT_H
#define SKYRIMSEGOG_MODDATACONTENT_H

#include <gamebryomoddatacontent.h>
#include <ifiletree.h>

class SkyrimSEGOGModDataContent : public GamebryoModDataContent {
public:

  /**
   *
   */
  SkyrimSEGOGModDataContent(GameGamebryo const* gamePlugin) : GamebryoModDataContent(gamePlugin) {
    // Just need to disable some contents:
    m_Enabled[CONTENT_SKYPROC] = false;
  }

};

#endif // SKYRIMSEGOG_MODDATACONTENT_H
