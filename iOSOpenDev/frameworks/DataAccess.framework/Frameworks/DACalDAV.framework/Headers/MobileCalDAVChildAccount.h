/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DACalDAV.framework/DACalDAV
 */

#import <DACalDAV/MobileCalDAVAccount.h>

@class BasicAccount;

@interface MobileCalDAVChildAccount : MobileCalDAVAccount {
	BasicAccount *_parent;	// 136 = 0x88
}
@property(readonly, assign, nonatomic) BasicAccount *parent;	// G=0x1a421; @synthesize=_parent
+ (id)supportedDataclasses;	// 0x1a391
+ (Class)clientClass;	// 0x1a375
+ (Class)accountClass;	// 0x1a365
// declared property getter: - (id)parent;	// 0x1a421
- (id)scheduleIdentifier;	// 0x1a401
- (id)persistentUUID;	// 0x1a3f1
- (BOOL)isDisabled;	// 0x1a3ed
- (BOOL)supportsDADataclass:(int)dataclass;	// 0x1a3dd
- (void)dealloc;	// 0x1a319
- (id)accountPropertyForKey:(id)key;	// 0x1a2a9
- (void)removeAccountPropertyForKey:(id)key;	// 0x1a25d
- (void)setAccountProperty:(id)property forKey:(id)key;	// 0x1a149
- (BOOL)isEnabledForDataclass:(id)dataclass;	// 0x1a125
- (void)saveAccountProperties;	// 0x1a0b5
- (void)saveChildAccountSettingsWithAccountsManager:(id)accountsManager;	// 0x19fb5
- (BOOL)childKeyIsSharedForWriting:(id)writing;	// 0x19ec5
- (BOOL)childKeyIsSharedForReading:(id)reading;	// 0x19db1
- (void)setPassword:(id)password withAccessibility:(int)accessibility;	// 0x19dad
- (void)renewAccountCredentialsWithHandler:(id)handler;	// 0x19d49
- (id)accountCredentialsHandler;	// 0x19d39
- (id)password;	// 0x19d19
- (BOOL)isChildAccount;	// 0x19d15
- (id)initWithParent:(id)parent childProperties:(id)properties;	// 0x19cbd
@end