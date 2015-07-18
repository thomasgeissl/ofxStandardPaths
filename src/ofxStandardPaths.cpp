#include "ofxStandardPaths.h"

#ifdef TARGET_OSX
    const string ofxStandardPaths::DesktopLocation = "~/Desktop";
    const string ofxStandardPaths::DocumentsLocation = "~/Documents";
    const string ofxStandardPaths::FontsLocation = "/System/Library/Fonts";
    const string ofxStandardPaths::ApplicationsLocation = "/Applications";
    const string ofxStandardPaths::MusicLocation = "~/Music";
    const string ofxStandardPaths::MovieLocation = "~/Movies";
    const string ofxStandardPaths::PicturesLocation = "~/Pictures";
    const string ofxStandardPaths::TempLocation = "";
    const string ofxStandardPaths::HomeLocation = "~";
    const string ofxStandardPaths::DataLocation = "";
    const string ofxStandardPaths::CacheLocation = "";
    const string ofxStandardPaths::GenericDataLocation = "/Library/Application Support";
    const string ofxStandardPaths::RuntimeDataLocation = "~/Library/Application Support";
    const string ofxStandardPaths::ConfigLocation = "~/Library/Preferences";
    const string ofxStandardPaths::GenericConfigLocation = "~/Library/Preferences";
    const string ofxStandardPaths::DownloadLocation = "~/Downloads";
    const string ofxStandardPaths::GenericCacheLocation = "/Library/Caches";
    const string ofxStandardPaths::AppDataLocation = "";
    const string ofxStandardPaths::AppLocalDataLocation = "";
    const string ofxStandardPaths::AppConfigLocation = "";
#elif TARGET_LINUX
    const string ofxStandardPaths::DesktopLocation = "~/Desktop";
    const string ofxStandardPaths::DocumentsLocation = "~/Documents";
    const string ofxStandardPaths::FontsLocation = "~/.fonts";
    const string ofxStandardPaths::ApplicationsLocation = "/usr/local/share/applications";
    const string ofxStandardPaths::MusicLocation = "~/Music";
    const string ofxStandardPaths::MovieLocation = "~/Videos";
    const string ofxStandardPaths::PicturesLocation = "~/Pictures";
    const string ofxStandardPaths::TempLocation = "/tmp";
    const string ofxStandardPaths::HomeLocation = "~";
    const string ofxStandardPaths::DataLocation = "";
    const string ofxStandardPaths::CacheLocation = "";
    const string ofxStandardPaths::GenericDataLocation = "/usr/local/share";
    const string ofxStandardPaths::RuntimeDataLocation = "";
    const string ofxStandardPaths::ConfigLocation = "~/.config";
    const string ofxStandardPaths::GenericConfigLocation = "~/.config";
    const string ofxStandardPaths::DownloadLocation = "~/Downloads";
    const string ofxStandardPaths::GenericCacheLocation = "~/.cache";
    const string ofxStandardPaths::AppDataLocation = "";
    const string ofxStandardPaths::AppLocalDataLocation = "";
    const string ofxStandardPaths::AppConfigLocation = "";
#elif TARGET_WIN32
    const string ofxStandardPaths::DesktopLocation = "";
    const string ofxStandardPaths::DocumentsLocation = "";
    const string ofxStandardPaths::FontsLocation = "";
    const string ofxStandardPaths::ApplicationsLocation = "";
    const string ofxStandardPaths::MusicLocation = "";
    const string ofxStandardPaths::MovieLocation = "";
    const string ofxStandardPaths::PicturesLocation = "";
    const string ofxStandardPaths::TempLocation = "";
    const string ofxStandardPaths::HomeLocation = "";
    const string ofxStandardPaths::DataLocation = "";
    const string ofxStandardPaths::CacheLocation = "";
    const string ofxStandardPaths::GenericDataLocation = "";
    const string ofxStandardPaths::RuntimeDataLocation = "";
    const string ofxStandardPaths::ConfigLocation = "";
    const string ofxStandardPaths::GenericConfigLocation = "";
    const string ofxStandardPaths::DownloadLocation = "";
    const string ofxStandardPaths::GenericCacheLocation = "";
    const string ofxStandardPaths::AppDataLocation = "";
    const string ofxStandardPaths::AppLocalDataLocation = "";
    const string ofxStandardPaths::AppConfigLocation = "";
#elif TARGET_ANDROID
#elif TARGET_IOS
#endif
