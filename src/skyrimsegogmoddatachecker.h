#ifndef SKYRIMSEGOG_MODATACHECKER_H
#define SKYRIMSEGOG_MODATACHECKER_H

#include <gamebryomoddatachecker.h>

class SkyrimSEGOGModDataChecker : public GamebryoModDataChecker
{
public:
  using GamebryoModDataChecker::GamebryoModDataChecker;

protected:
  virtual const FileNameSet& possibleFolderNames() const override {
    static FileNameSet result{
      "fonts", "interface", "menus", "meshes", "music", "scripts", "shaders",
      "sound", "strings", "textures", "trees", "video", "facegen", "materials",
      "skse", "distantlod", "asi", "Tools", "MCM", "distantland", "mits",
      "dllplugins", "CalienteTools", "NetScriptFramework", "shadersfx",
      "Nemesis_Engine", "Platform", "grass"
    };
    return result;
  }
  virtual const FileNameSet& possibleFileExtensions() const override {
    static FileNameSet result{
      "esp", "esm", "esl", "bsa", "modgroups", "ini"
    };
    return result;
  }
};

#endif // SKYRIMSEGOG_MODATACHECKER_H
