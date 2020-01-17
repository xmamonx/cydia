/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Message/XXUnknownSuperclass.h>

@class NSMutableArray, MFWeakReferenceHolder, NSArray, NSNumber, MessageCriterion, NSMutableDictionary, MailAccount, NSString;

@interface MailboxUid : XXUnknownSuperclass {
	NSString *uniqueId;	// 4 = 0x4
	unsigned _mailboxID;	// 8 = 0x8
	MFWeakReferenceHolder *_account;	// 12 = 0xc
	NSString *_pathComponent;	// 16 = 0x10
	unsigned _attributes;	// 20 = 0x14
	MFWeakReferenceHolder *_parent;	// 24 = 0x18
	NSMutableArray *_children;	// 28 = 0x1c
	MailAccount *_representedAccount;	// 32 = 0x20
	MessageCriterion *_criterion;	// 36 = 0x24
	BOOL allCriteriaMustBeSatisfied;	// 40 = 0x28
	NSString *_realFullPath;	// 44 = 0x2c
	NSArray *_extraAttributes;	// 48 = 0x30
	NSNumber *_pendingLevel;	// 52 = 0x34
	int _type;	// 56 = 0x38
	NSMutableDictionary *_userInfo;	// 60 = 0x3c
	NSString *_permanentTag;	// 64 = 0x40
}
@property(retain, nonatomic) NSArray *extraAttributes;	// G=0xea1d; S=0x36985; @synthesize=_extraAttributes
@property(retain, nonatomic) NSString *permanentTag;	// G=0x9159; S=0x369ad; @synthesize=_permanentTag
@property(retain) id name;	// G=0x9169; S=0x35a8d; converted property
@property(assign) unsigned attributes;	// G=0x8d6d; S=0xe455; converted property
@property(retain) MFWeakReferenceHolder *parent;	// G=0x7c9d; S=0x35d35; converted property
@property(retain) MailAccount *representedAccount;	// G=0x11e05; S=0x35e09; converted property
@property(assign) int type;	// G=0x73a9; S=0x73b9; converted property
@property(retain) MessageCriterion *criterion;	// G=0x8be9; S=0x36691; converted property
@property(retain) id lastViewedMessageID;	// G=0x36725; S=0x3675d; converted property
@property(readonly, retain) NSString *uniqueId;	// G=0x35a01; converted property
@property(readonly, assign) unsigned mailboxID;	// G=0x10245; converted property
@property(readonly, retain) MFWeakReferenceHolder *account;	// G=0x7c05; converted property
@property(readonly, retain) NSMutableArray *children;	// G=0x35b61; converted property
@property(readonly, retain) NSString *realFullPath;	// G=0x35f7d; converted property
+ (id)specialNameForType:(int)type;	// 0xfd55
+ (BOOL)isOutgoingMailboxType:(int)type;	// 0xf851
+ (BOOL)isDraftsMailboxType:(int)type;	// 0xf9d1
- (void)dealloc;	// 0x367ed
- (id)init;	// 0x7321
- (id)initWithAccount:(id)account;	// 0x72b5
- (id)_initWithName:(id)name attributes:(unsigned)attributes forAccount:(id)account;	// 0x723d
- (id)initWithName:(id)name attributes:(unsigned)attributes forAccount:(id)account extraAttributes:(id)attributes4;	// 0x71f1
- (id)initWithName:(id)name attributes:(unsigned)attributes forAccount:(id)account permanentTag:(id)tag;	// 0x35a41
// converted property getter: - (id)uniqueId;	// 0x35a01
- (id)displayName;	// 0x16fed
// converted property getter: - (id)name;	// 0x9169
- (id)displayNameUsingSpecialNames;	// 0xfcd9
// converted property setter: - (void)setName:(id)name;	// 0x35a8d
// converted property getter: - (unsigned)attributes;	// 0x8d6d
// converted property setter: - (void)setAttributes:(unsigned)attributes;	// 0xe455
- (unsigned)unreadCount;	// 0xc10d
- (BOOL)setUnreadCount:(unsigned)count;	// 0x36c0d
- (unsigned)nonDeletedCount;	// 0xf3f1
// converted property getter: - (id)children;	// 0x35b61
- (id)_mutableChildren;	// 0x17225
- (BOOL)hasChildren;	// 0x170e5
- (id)childEnumerator;	// 0x1714d
- (id)childEnumeratorIncludingHiddenChildren:(BOOL)children;	// 0x17161
- (id)depthFirstEnumerator;	// 0x12021
- (unsigned)numberOfChildren;	// 0x35b71
- (id)childAtIndex:(unsigned)index;	// 0x35bbd
- (unsigned)indexOfChild:(id)child;	// 0x35c0d
- (id)childWithName:(id)name;	// 0x87f9
- (id)childWithExtraAttribute:(id)extraAttribute;	// 0xe9b9
- (id)childWithPermanentTag:(id)permanentTag;	// 0xea2d
- (id)descendantWithExtraAttribute:(id)extraAttribute;	// 0x11f75
- (id)descendantWithPermanentTag:(id)permanentTag;	// 0x367b5
- (id)mutableCopyOfChildren;	// 0x79a1
- (id)fullPathNonNil;	// 0xe621
- (BOOL)setChildren:(id)children;	// 0x7fdd
- (void)sortChildren;	// 0x35c5d
// converted property getter: - (id)parent;	// 0x7c9d
- (void)removeChild:(id)child;	// 0x35ce5
// converted property setter: - (void)setParent:(id)parent;	// 0x35d35
- (void)flushCriteria;	// 0x35db9
// converted property setter: - (void)setRepresentedAccount:(id)account;	// 0x35e09
// converted property getter: - (id)representedAccount;	// 0x11e05
- (id)topMailbox;	// 0x7c7d
- (id)rootMailbox;	// 0x7c51
// converted property getter: - (id)account;	// 0x7c05
- (BOOL)isValid;	// 0x8349
- (void)invalidate;	// 0x35e71
- (BOOL)isContainer;	// 0xe43d
- (BOOL)isStore;	// 0x35a11
- (BOOL)isSpecialMailboxUid;	// 0x8ab5
- (BOOL)isOutgoingMailboxUid;	// 0xf811
- (id)accountRelativePath;	// 0x8e3d
- (id)fullPath;	// 0x9c65
// converted property getter: - (id)realFullPath;	// 0x35f7d
- (id)tildeAbbreviatedPath;	// 0x36b6d
- (id)pathRelativeToMailbox:(id)mailbox;	// 0x36b2d
- (id)pathRelativeToMailboxForDisplay:(id)display;	// 0x36ae9
- (id)URL;	// 0x3602d
- (id)URLStringWithAccount:(id)account;	// 0x8d7d
- (id)oldURLString;	// 0x360c9
- (id)URLString;	// 0xbcf9
// converted property getter: - (unsigned)mailboxID;	// 0x10245
- (id)URLStringNonNil;	// 0xe5d5
- (int)compareWithMailboxUid:(id)mailboxUid;	// 0x36ac9
- (int)indexToInsertChildMailboxUid:(id)insertChildMailboxUid;	// 0x36a01
- (BOOL)isDescendantOfMailbox:(id)mailbox;	// 0x361cd
- (id)description;	// 0x36215
// converted property getter: - (int)type;	// 0x73a9
// converted property setter: - (void)setType:(int)type;	// 0x73b9
- (BOOL)isVisible;	// 0x36291
- (id)_loadUserInfo;	// 0x9bd5
- (id)userInfoObjectForKey:(id)key;	// 0x9b1d
- (void)setUserInfoObject:(id)object forKey:(id)key;	// 0x362b1
- (BOOL)userInfoBoolForKey:(id)key;	// 0x9af9
- (void)setUserInfoBool:(BOOL)aBool forKey:(id)key;	// 0x369d5
- (void)saveUserInfo;	// 0x363c1
- (id)userInfoDictionary;	// 0x36521
- (void)setUserInfoWithDictionary:(id)dictionary;	// 0x3657d
- (id)userInfoForSerialization;	// 0x36601
- (id)ancestralAccount;	// 0x8d19
// converted property getter: - (id)criterion;	// 0x8be9
// converted property setter: - (void)setCriterion:(id)criterion;	// 0x36691
- (id)store;	// 0xf7c1
- (id)copyWithZone:(id)zone;	// 0x11da5
- (BOOL)isSelectable;	// 0xf599
- (BOOL)shouldRestoreMessagesAfterFailedDelete;	// 0x366fd
- (BOOL)alwaysWriteFullMessageFile;	// 0x35a29
// converted property getter: - (id)lastViewedMessageID;	// 0x36725
- (id)lastViewedMessageDate;	// 0x36741
// converted property setter: - (void)setLastViewedMessageID:(id)anId;	// 0x3675d
- (void)addToPostOrderTraversal:(id)postOrderTraversal;	// 0x12131
// declared property getter: - (id)permanentTag;	// 0x9159
// declared property setter: - (void)setPermanentTag:(id)tag;	// 0x369ad
// declared property getter: - (id)extraAttributes;	// 0xea1d
// declared property setter: - (void)setExtraAttributes:(id)attributes;	// 0x36985
@end