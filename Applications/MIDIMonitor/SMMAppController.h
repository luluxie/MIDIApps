#import <Cocoa/Cocoa.h>
#import <SnoizeMIDISpy/SnoizeMIDISpy.h>


@interface SMMAppController : NSObject
{
    BOOL shouldOpenUntitledDocument;
    MIDISpyClientRef midiSpyClient;
}

- (IBAction)showPreferences:(id)sender;
- (IBAction)showAboutBox:(id)sender;
- (IBAction)showHelp:(id)sender;

- (IBAction)restartMIDI:(id)sender;

- (MIDISpyClientRef)midiSpyClient;

@end

// Preference keys
extern NSString *SMMOpenWindowsForNewSourcesPreferenceKey;
