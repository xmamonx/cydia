/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
 */

#import <iTunesStoreUI/SUScriptViewController.h>

@class NSString, NSArray;

@interface SUScriptMediaPickerController : SUScriptViewController {
}
@property(retain) NSString *prompt;	// G=0x7d091; S=0x7d169; 
@property(readonly, assign) NSArray *mediaTypes;	// G=0x7d03d; 
@property(assign) BOOL allowsPickingMultipleItems;	// G=0x7d009; S=0x7d0e5; 
+ (void)initialize;	// 0x7d4b9
+ (id)webScriptNameForKey:(const char *)key;	// 0x7d3a5
- (id)scriptAttributeKeys;	// 0x7d459
- (id)attributeKeys;	// 0x7d449
- (void)_setMediaTypes:(id)types;	// 0x7d321
- (void)_setPrompt:(id)prompt;	// 0x7d2f5
- (void)_setAllowsPickingMultipleItems:(BOOL)items;	// 0x7d2c9
- (id)_copyPrompt;	// 0x7d291
- (id)_copyMediaTypes;	// 0x7d249
- (BOOL)_allowsPickingMultipleItems;	// 0x7d221
// declared property setter: - (void)setPrompt:(id)prompt;	// 0x7d169
- (void)setMediaTypes:(id)types;	// 0x7d111
// declared property setter: - (void)setAllowsPickingMultipleItems:(BOOL)items;	// 0x7d0e5
// declared property getter: - (id)prompt;	// 0x7d091
// declared property getter: - (id)mediaTypes;	// 0x7d03d
- (id)_className;	// 0x7d031
// declared property getter: - (BOOL)allowsPickingMultipleItems;	// 0x7d009
- (void)setNativeViewController:(id)controller;	// 0x7cfa5
- (id)newNativeViewController;	// 0x7cf69
- (id)initWithMediaTypes:(id)mediaTypes;	// 0x7cd2d
@end