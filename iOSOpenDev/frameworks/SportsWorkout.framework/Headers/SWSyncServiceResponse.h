/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/SportsWorkout.framework/SportsWorkout
 */

#import <SportsWorkout/XXUnknownSuperclass.h>
#import <SportsWorkout/NSXMLParserDelegate.h>

@class NSError, NSMutableString, NSString;

@interface SWSyncServiceResponse : XXUnknownSuperclass <NSXMLParserDelegate> {
	BOOL _hasFoundRootElement;	// 4 = 0x4
	NSError *_validationError;	// 8 = 0x8
	NSMutableString *_status;	// 12 = 0xc
	NSMutableString *_pin;	// 16 = 0x10
	NSMutableString *_pinStatus;	// 20 = 0x14
	NSMutableString *_email;	// 24 = 0x18
	NSMutableString *_screenName;	// 28 = 0x1c
	NSMutableString *_token;	// 32 = 0x20
	NSMutableString *_serviceException;	// 36 = 0x24
	NSString *_errorCode;	// 40 = 0x28
	NSString *_currentLeafElement;	// 44 = 0x2c
}
@property(readonly, assign, nonatomic) NSString *errorCode;	// G=0x2b269; @synthesize=_errorCode
@property(readonly, assign, nonatomic) NSString *serviceException;	// G=0x2b259; @synthesize=_serviceException
@property(readonly, assign, nonatomic) NSString *token;	// G=0x2b249; @synthesize=_token
@property(readonly, assign, nonatomic) NSString *screenName;	// G=0x2b239; @synthesize=_screenName
@property(readonly, assign, nonatomic) NSString *email;	// G=0x2b229; @synthesize=_email
@property(readonly, assign, nonatomic) NSString *pinStatus;	// G=0x2b219; @synthesize=_pinStatus
@property(readonly, assign, nonatomic) NSString *pin;	// G=0x2b209; @synthesize=_pin
@property(readonly, assign, nonatomic) NSString *status;	// G=0x2b1f9; @synthesize=_status
// declared property getter: - (id)errorCode;	// 0x2b269
// declared property getter: - (id)serviceException;	// 0x2b259
// declared property getter: - (id)token;	// 0x2b249
// declared property getter: - (id)screenName;	// 0x2b239
// declared property getter: - (id)email;	// 0x2b229
// declared property getter: - (id)pinStatus;	// 0x2b219
// declared property getter: - (id)pin;	// 0x2b209
// declared property getter: - (id)status;	// 0x2b1f9
- (void)parser:(id)parser didEndElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name;	// 0x2b1ad
- (void)parser:(id)parser didStartElement:(id)element namespaceURI:(id)uri qualifiedName:(id)name attributes:(id)attributes;	// 0x2adcd
- (void)parser:(id)parser foundCharacters:(id)characters;	// 0x2ac3d
- (void)dealloc;	// 0x2ab51
- (id)initWithData:(id)data error:(id *)error;	// 0x2aa71
@end