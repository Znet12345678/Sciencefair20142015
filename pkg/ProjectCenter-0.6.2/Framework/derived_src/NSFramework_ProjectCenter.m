#include <Foundation/NSString.h>
@interface NSFramework_ProjectCenter : NSObject
+ (NSString *)frameworkEnv;
+ (NSString *)frameworkPath;
+ (NSString *)frameworkVersion;
+ (NSString *const*)frameworkClasses;
@end
@implementation NSFramework_ProjectCenter
+ (NSString *)frameworkEnv { return nil; }
+ (NSString *)frameworkPath { return @"/usr/GNUstep/Local/Library/Frameworks"; }
+ (NSString *)frameworkVersion { return @"0.6.2"; }
static NSString *allClasses[] = {@"PCBundleManager", @"PCEditorManager", @"PCMakefileFactory", @"PCFileManager", @"PCAddFilesPanel", @"PCFileCreator", @"PCSaveModified", @"PCProjectManager", @"PCProject", @"PCProjectWindow", @"PCProjectInspector", @"PCProjectBuilder", @"PCProjectBuilderOptions", @"PCProjectBuilderPanel", @"PCProjectLauncher", @"PCProjectLauncherPanel", @"PCProjectEditor", @"PCProjectBrowser", @"PCProjectLoadedFiles", @"PCProjectLoadedFilesPanel", @"PCButton", @"PCFileNameField", @"PCFileNameIcon", @"PCLogController", @"PCAuxiliaryWindow", NULL};
+ (NSString *const*)frameworkClasses { return allClasses; }
@end
