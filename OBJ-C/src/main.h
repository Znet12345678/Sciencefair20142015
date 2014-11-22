#import <Foundation/Foundation.h>
//#import <Foundation/NSObject>
#import <AppKit/NSWindow.h>
#import <AppKit/NSApplication.h>
#ifndef MAIN_H
#define MAIN_H
//int main();
@class NSWindow;
NSApplication *cal;
@interface controler :NSObject
{
	NSWindow *window;
}
- (void) applicationWillFinishLaunching: (NSNotification *) not;
- (void)applicationDidFinishLaunching:(NSNotification *) not;
- (void) onef : (id)sender;

@end
#endif
