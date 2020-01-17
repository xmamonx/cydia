/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/iPodUI.framework/iPodUI
 */

#import <iPodUI/XXUnknownSuperclass.h>
#import <iPodUI/iPodUI-Structs.h>

@class IUStoreSocialActionOperation, NSNumber, NSMutableDictionary;

@interface IUStoreSocialHistory : XXUnknownSuperclass {
	NSNumber *_accountIdentifier;	// 4 = 0x4
	dispatch_queue_s *_dispatchQueue;	// 8 = 0x8
	dispatch_source_s *_expirationTimer;	// 12 = 0xc
	NSMutableDictionary *_performedActions;	// 16 = 0x10
	IUStoreSocialActionOperation *_reloadOperation;	// 20 = 0x14
}
- (void)_setHistoryFromResponseDictionary:(id)responseDictionary;	// 0x64491
- (void)_setAccountIdentifier:(id)identifier;	// 0x6444d
- (void)_scheduleExpirationTimerForURLResponse:(id)urlresponse;	// 0x64299
- (void)_removePerformedActionType:(id)type forItemIdentifier:(unsigned long long)itemIdentifier;	// 0x64215
- (void)_removeOperationFromLocalChanges:(id)localChanges;	// 0x64161
- (void)_reloadFromServerIfExpired;	// 0x63fc1
- (void)_postSocialHistoryChanged;	// 0x63f1d
- (void)_performAutomaticReloadFromServer;	// 0x63e41
- (void)_cancelExpirationTimer;	// 0x63e11
- (void)_addPerformedActionType:(id)type forItemIdentifier:(unsigned long long)itemIdentifier;	// 0x63d45
- (void)_addOperationToLocalChanges:(id)localChanges;	// 0x63c91
- (void)_urlBagDidLoadNotification:(id)_urlBag;	// 0x63c51
- (void)_networkTypeDidChangeNotification:(id)_networkType;	// 0x63c11
- (void)_applicationDidBecomeActiveNotification:(id)_application;	// 0x63bd1
- (void)_accountStoreChangedNotification:(id)notification;	// 0x63889
- (void)reloadFromServer;	// 0x634fd
- (BOOL)hasPerformedActionWithActionType:(id)actionType itemIdentifier:(unsigned long long)identifier;	// 0x63399
- (void)addChangeOperation:(id)operation;	// 0x63121
- (void)dealloc;	// 0x62fe5
- (id)init;	// 0x62e8d
@end