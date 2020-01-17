/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <OfficeImport/ODDPoint.h>
#import <OfficeImport/XXUnknownSuperclass.h>

@class ODDPointPropertySet, OADTextBody, OADShapeProperties;

__attribute__((visibility("hidden")))
@interface ODDPoint : XXUnknownSuperclass {
@private
	int mType;	// 4 = 0x4
	ODDPointPropertySet *mPropertySet;	// 8 = 0x8
	OADShapeProperties *mShapeProperties;	// 12 = 0xc
	OADTextBody *mText;	// 16 = 0x10
}
@property(assign) int type;	// G=0x1ca1c1; S=0x1c90d9; converted property
@property(retain) id text;	// G=0x1cdf7d; S=0x1c974d; converted property
- (id)init;	// 0x1c8fcd
- (void)dealloc;	// 0x1d0559
// converted property getter: - (int)type;	// 0x1ca1c1
// converted property setter: - (void)setType:(int)type;	// 0x1c90d9
- (id)propertySet;	// 0x1c9109
- (id)shapeProperties;	// 0x1c90f9
// converted property getter: - (id)text;	// 0x1cdf7d
// converted property setter: - (void)setText:(id)text;	// 0x1c974d
@end

@interface ODDPoint (Private)
+ (void)addConnectionToPoint:(id)point order:(unsigned long)order array:(id *)array;	// 0x1c9f99
@end