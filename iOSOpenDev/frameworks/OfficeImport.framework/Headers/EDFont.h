/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/EDFont.h>
#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/NSCopying.h>
#import <OfficeImport/XXUnknownSuperclass.h>
#import <OfficeImport/EDImmutableObject.h>

@class EDColorReference, EDResources, NSString;

__attribute__((visibility("hidden")))
@interface EDFont : XXUnknownSuperclass <NSCopying, EDImmutableObject> {
@private
	EDResources *mResources;	// 4 = 0x4
	NSString *mName;	// 8 = 0x8
	EDColorReference *mColorReference;	// 12 = 0xc
	int mUnderline;	// 16 = 0x10
	int mScript;	// 20 = 0x14
	double mHeightInTwips;	// 24 = 0x18
	int mCharSet;	// 32 = 0x20
	int mFamily;	// 36 = 0x24
	unsigned mWeight;	// 40 = 0x28
	bool mBold;	// 44 = 0x2c
	bool mItalic;	// 45 = 0x2d
	bool mShadow;	// 46 = 0x2e
	bool mStrike;	// 47 = 0x2f
	bool mOutline;	// 48 = 0x30
	bool mUnderlineOverridden;	// 49 = 0x31
	bool mStrikeOverridden;	// 50 = 0x32
	bool mBoldOverridden;	// 51 = 0x33
	bool mWeightOverridden;	// 52 = 0x34
	bool mItalicOverridden;	// 53 = 0x35
	bool mHeightOverridden;	// 54 = 0x36
	bool mDoNotModify;	// 55 = 0x37
}
@property(assign) int script;	// G=0x24dd61; S=0xdc2bd; converted property
@property(assign) int underline;	// G=0xfbb15; S=0xdc305; converted property
@property(retain) id name;	// G=0xebbcd; S=0xdbe99; converted property
@property(retain) id color;	// G=0xfbb45; S=0x167ac1; converted property
@property(assign, getter=isBold) bool bold;	// G=0xebba5; S=0xdc1dd; converted property
@property(assign, getter=isItalic) bool italic;	// G=0xebb95; S=0xdc20d; converted property
@property(assign, getter=isShadow) bool shadow;	// G=0x24dd71; S=0xdc26d; converted property
@property(assign, getter=isOutline) bool outline;	// G=0x24dd81; S=0xdc28d; converted property
@property(assign, getter=isStrike) bool strike;	// G=0xfbaf5; S=0xdc23d; converted property
@property(assign) double height;	// G=0xebbb5; S=0xdbeed; converted property
@property(assign) int charSet;	// G=0x24dd91; S=0xdbf55; converted property
@property(assign) int family;	// G=0x24dda1; S=0xdbf75; converted property
@property(assign) unsigned weight;	// G=0x24ddb1; S=0xdbf25; converted property
+ (id)fontWithResources:(id)resources;	// 0x24de65
+ (id)filterFontName:(id)name;	// 0x24de11
+ (id)lassoNameForFontName:(id)fontName bold:(bool)bold italic:(bool)italic;	// 0x24ddd5
- (id)initWithResources:(id)resources;	// 0xdbaa9
- (void)dealloc;	// 0x111b1d
- (id)copyWithZone:(NSZone *)zone;	// 0x167a3d
- (BOOL)isEqualToFont:(id)font;	// 0x167d59
- (BOOL)isEqual:(id)equal;	// 0x167cfd
- (id)filteredName;	// 0x24df0d
- (id)lassoName;	// 0x24deb1
// converted property getter: - (int)script;	// 0x24dd61
// converted property setter: - (void)setScript:(int)script;	// 0xdc2bd
// converted property getter: - (int)underline;	// 0xfbb15
- (bool)isUnderlineOverridden;	// 0xfbb05
// converted property setter: - (void)setUnderline:(int)underline;	// 0xdc305
// converted property getter: - (id)name;	// 0xebbcd
// converted property setter: - (void)setName:(id)name;	// 0xdbe99
// converted property getter: - (id)color;	// 0xfbb45
// converted property setter: - (void)setColor:(id)color;	// 0x167ac1
// converted property getter: - (bool)isBold;	// 0xebba5
- (bool)isBoldOverridden;	// 0xfbac5
// converted property setter: - (void)setBold:(bool)bold;	// 0xdc1dd
// converted property getter: - (bool)isItalic;	// 0xebb95
- (bool)isItalicOverridden;	// 0xfbad5
// converted property setter: - (void)setItalic:(bool)italic;	// 0xdc20d
// converted property getter: - (bool)isShadow;	// 0x24dd71
// converted property setter: - (void)setShadow:(bool)shadow;	// 0xdc26d
// converted property getter: - (bool)isOutline;	// 0x24dd81
// converted property setter: - (void)setOutline:(bool)outline;	// 0xdc28d
// converted property getter: - (bool)isStrike;	// 0xfbaf5
- (bool)isStrikeOverridden;	// 0xfbae5
// converted property setter: - (void)setStrike:(bool)strike;	// 0xdc23d
// converted property getter: - (double)height;	// 0xebbb5
- (bool)isHeightOverridden;	// 0xfbc69
// converted property setter: - (void)setHeight:(double)height;	// 0xdbeed
// converted property getter: - (int)charSet;	// 0x24dd91
// converted property setter: - (void)setCharSet:(int)set;	// 0xdbf55
// converted property getter: - (int)family;	// 0x24dda1
// converted property setter: - (void)setFamily:(int)family;	// 0xdbf75
// converted property getter: - (unsigned)weight;	// 0x24ddb1
- (bool)isWeightOverridden;	// 0x24ddc1
// converted property setter: - (void)setWeight:(unsigned)weight;	// 0xdbf25
- (void)setDoNotModify:(bool)modify;	// 0xdc335
@end

@interface EDFont (Private)
+ (id)fontNameWithFamilyName:(id)familyName bold:(bool)bold italic:(bool)italic;	// 0x24ddd1
@end

@interface EDFont (EDInternal)
@property(retain) id colorReference;	// G=0x1fa781; S=0xdc189; converted property
// converted property getter: - (id)colorReference;	// 0x1fa781
// converted property setter: - (void)setColorReference:(id)reference;	// 0xdc189
@end