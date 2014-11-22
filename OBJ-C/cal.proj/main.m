#include <stdio.h>
#include <Foundation/Foundation.h>
#include <AppKit/NSApplication.h>
#include <AppKit/NSWindow.h>
#include <AppKit/NSButton.h>
@interface delegate : NSObject
{
  NSWindow *calwin;
}
- (void) win;
- (void) applicationWillFinishLaunching: (NSNotification *)not;
- (void) applicationDidFinishLaunching: (NSNotification *)not;
- (void) onef: (id)sender;
@end

@implementation delegate
- (void) win
{
NSButton *one;
NSButton *two;
NSButton *three;
NSButton *four;
NSButton *five;
NSButton *six;
NSButton *seven;
NSButton *eight;
NSButton *nine;
NSButton *zero;

one = AUTORELEASE ([NSButton new]);

[one setTitle: @"1"];
[one setTarget: one];
[one setAction: @selector (onef:)];

	NSSize size;
	size = [one frame].size;
	NSRect bsize = NSMakeRect(50,50,size.width,size.height);
        NSRect rect = NSMakeRect (500, 500, 500, 500);

        calwin = [NSWindow alloc];
        unsigned int styleMask = NSTitledWindowMask
                         | NSMiniaturizableWindowMask;
        unsigned int windowMask = NSTitledWindowMask
                          | NSClosableWindowMask
                          | NSMiniaturizableWindowMask;
	calwin = [calwin initWithContentRect: rect
                     styleMask: windowMask
                     backing: NSBackingStoreBuffered
                     defer: NO];
        [calwin setTitle:@"calculator"];
	[calwin setContentView:one];
}
- (void) onef : (id)sender
{
	printf("1");
}
- (void) applicationWillFinishLaunching: (NSNotification *)not
{
  [self win];
}

- (void) applicationDidFinishLaunching: (NSNotification *)not;
{
  [calwin makeKeyAndOrderFront: nil];
}
@end
int main(int argv,char argc)
{

	[NSApplication sharedApplication];
	[NSApp setDelegate: [delegate new]];
	
	return NSApplicationMain (argc, argv);
//	printf("\n");
}
