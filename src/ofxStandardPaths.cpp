#include "ofxStandardPaths.h"
#include "ofFileUtils.h"
const string ofxStandardPaths::HomeLocation = ofFilePath::getUserHomeDir();

#ifdef TARGET_OSX
    const string ofxStandardPaths::DesktopLocation = ofFilePath::getUserHomeDir()+"/Desktop";
    const string ofxStandardPaths::DocumentsLocation = ofFilePath::getUserHomeDir()+"/Documents";
    const string ofxStandardPaths::FontsLocation = "/System/Library/Fonts";
    const string ofxStandardPaths::ApplicationsLocation = "/Applications";
    const string ofxStandardPaths::MusicLocation = ofFilePath::getUserHomeDir()+"/Music";
    const string ofxStandardPaths::MoviesLocation = ofFilePath::getUserHomeDir()+"/Movies";
    const string ofxStandardPaths::PicturesLocation = ofFilePath::getUserHomeDir()+"/Pictures";
    const string ofxStandardPaths::TempLocation = "";
    const string ofxStandardPaths::DataLocation = "";
    const string ofxStandardPaths::CacheLocation = "";
    const string ofxStandardPaths::GenericDataLocation = "/Library/Application\ Support";
    const string ofxStandardPaths::RuntimeDataLocation = ofFilePath::getUserHomeDir()+"/Library/Application\ Support";
    const string ofxStandardPaths::ConfigLocation = ofFilePath::getUserHomeDir()+"/Library/Preferences";
    const string ofxStandardPaths::GenericConfigLocation = ofFilePath::getUserHomeDir()+"/Library/Preferences";
    const string ofxStandardPaths::DownloadLocation = ofFilePath::getUserHomeDir()+"/Downloads";
    const string ofxStandardPaths::GenericCacheLocation = "/Library/Caches";
    const string ofxStandardPaths::AppDataLocation = "";
    const string ofxStandardPaths::AppLocalDataLocation = "";
    const string ofxStandardPaths::AppConfigLocation = "";
#elif defined(TARGET_LINUX)
    const string ofxStandardPaths::DesktopLocation = ofFilePath::getUserHomeDir()+"/Desktop";
    const string ofxStandardPaths::DocumentsLocation = ofFilePath::getUserHomeDir()+"/Documents";
    const string ofxStandardPaths::FontsLocation = ofFilePath::getUserHomeDir()+"/.fonts";
    const string ofxStandardPaths::ApplicationsLocation = "/usr/local/share/applications";
    const string ofxStandardPaths::MusicLocation = ofFilePath::getUserHomeDir()+"/Music";
    const string ofxStandardPaths::MoviesLocation = ofFilePath::getUserHomeDir()+"/Videos";
    const string ofxStandardPaths::PicturesLocation = ofFilePath::getUserHomeDir()+"/Pictures";
    const string ofxStandardPaths::TempLocation = "/tmp";
    const string ofxStandardPaths::DataLocation = "";
    const string ofxStandardPaths::CacheLocation = "";
    const string ofxStandardPaths::GenericDataLocation = "/usr/local/share";
    const string ofxStandardPaths::RuntimeDataLocation = "";
    const string ofxStandardPaths::ConfigLocation = ofFilePath::getUserHomeDir()+"/.config";
    const string ofxStandardPaths::GenericConfigLocation = ofFilePath::getUserHomeDir()+"/.config";
    const string ofxStandardPaths::DownloadLocation = ofFilePath::getUserHomeDir()+"/Downloads";
    const string ofxStandardPaths::GenericCacheLocation = ofFilePath::getUserHomeDir()+"/.cache";
    const string ofxStandardPaths::AppDataLocation = "";
    const string ofxStandardPaths::AppLocalDataLocation = "";
    const string ofxStandardPaths::AppConfigLocation = "";
#elif defined(TARGET_WIN32)
    const string ofxStandardPaths::DesktopLocation = ofFilePath::getUserHomeDir()+"/Desktop";
    const string ofxStandardPaths::DocumentsLocation = ofFilePath::getUserHomeDir()+"/Documents";
    const string ofxStandardPaths::FontsLocation = "";
    const string ofxStandardPaths::ApplicationsLocation = "";
    const string ofxStandardPaths::MusicLocation = ofFilePath::getUserHomeDir()+"/Music";;
    const string ofxStandardPaths::MoviesLocation = ofFilePath::getUserHomeDir()+"/Videos";
    const string ofxStandardPaths::PicturesLocation = ofFilePath::getUserHomeDir()+"/Pictures";
    const string ofxStandardPaths::TempLocation = ofFilePath::getUserHomeDir+"/AppData/Local/Temp";
    const string ofxStandardPaths::DataLocation = "";
    const string ofxStandardPaths::CacheLocation = "";
    const string ofxStandardPaths::GenericDataLocation = "";
    const string ofxStandardPaths::RuntimeDataLocation = "";
    const string ofxStandardPaths::ConfigLocation = "";
    const string ofxStandardPaths::GenericConfigLocation = "";
    const string ofxStandardPaths::DownloadLocation = ofFilePath::getUserHomeDir()+"/Downloads";
    const string ofxStandardPaths::GenericCacheLocation = "";
    const string ofxStandardPaths::AppDataLocation = "";
    const string ofxStandardPaths::AppLocalDataLocation = "";
    const string ofxStandardPaths::AppConfigLocation = "";
#elif defined(TARGET_ANDROID)
#elif defined(TARGET_IOS)
#endif
