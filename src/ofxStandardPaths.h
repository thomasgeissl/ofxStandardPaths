//http://doc.qt.io/qt-5/qstandardpaths.html
//https://github.com/pocoproject/poco/pull/561
#pragma once
#include <string>
class ofxStandardPaths
{
public:
    static const std::string DesktopLocation;
    static const std::string DocumentsLocation;
    static const std::string FontsLocation;
    static const std::string ApplicationsLocation;
    static const std::string MusicLocation;
    static const std::string MoviesLocation;
    static const std::string PicturesLocation;
    static const std::string TempLocation;
    static const std::string HomeLocation;
    static const std::string DataLocation;
    static const std::string CacheLocation;
    static const std::string GenericDataLocation;
    static const std::string RuntimeDataLocation;
    static const std::string ConfigLocation;
    static const std::string GenericConfigLocation;
    static const std::string DownloadLocation;
    static const std::string GenericCacheLocation;
    static const std::string AppDataLocation;
    static const std::string AppLocalDataLocation;
    static const std::string AppConfigLocation;
};
