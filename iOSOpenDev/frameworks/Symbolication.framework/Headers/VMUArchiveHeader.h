/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import <Symbolication/VMUHeader.h>

@class NSMutableArray, NSString;

@interface VMUArchiveHeader : VMUHeader {
	NSMutableArray *_headers;	// 4 = 0x4
	NSString *_path;	// 8 = 0x8
}
@property(readonly, retain) NSMutableArray *headers;	// G=0x1608; converted property
+ (id)archiveHeaderWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x16c0
- (id)initWithMemory:(id)memory path:(id)path timestamp:(id)timestamp;	// 0x1880
- (void)dealloc;	// 0x161c
- (BOOL)isArchive;	// 0x1600
// converted property getter: - (id)headers;	// 0x1608
- (id)architecture;	// 0x17a0
- (id)description;	// 0x1728
@end