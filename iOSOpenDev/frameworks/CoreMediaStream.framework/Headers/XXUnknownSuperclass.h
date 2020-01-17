/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <CoreMediaStream/XXUnknownSuperclass.h>
#import <CoreMediaStream/CoreMediaStream-Structs.h>

// iOSOpenDev: wrapped with define check (since occurs in other dumped files)
#ifndef __XXUnknownSuperclass__
#define __XXUnknownSuperclass__ 1
@interface XXUnknownSuperclass : NSObject
@end
#endif

@interface XXUnknownSuperclass (MSErrorUtilities)
+ (id)MSErrorWithDomain:(id)domain code:(int)code description:(id)description underlyingError:(id)error;	// 0xe34d
+ (id)MSErrorWithDomain:(id)domain code:(int)code description:(id)description suggestion:(id)suggestion;	// 0xe2c9
+ (id)MSErrorWithDomain:(id)domain code:(int)code description:(id)description;	// 0xe2a5
- (id)MSMMCSRetryAfterDate;	// 0xef59
- (BOOL)MSIsQuotaError;	// 0xef15
- (BOOL)MSContainsErrorWithDomain:(id)domain code:(int)code;	// 0xee6d
- (BOOL)MSIsBadTokenError;	// 0xed6d
- (BOOL)MSIsAuthError;	// 0xec61
- (BOOL)MSIsFatal;	// 0xeb91
- (BOOL)MSIsCounted;	// 0xea8d
- (BOOL)MSNeedsBackoff;	// 0xe979
- (BOOL)MSCanBeIgnored;	// 0xe951
- (BOOL)MSIsTemporaryNetworkError;	// 0xe831
- (id)MSFindErrorWithDomain:(id)domain;	// 0xe7a5
- (id)MSFindPrimaryError;	// 0xe6bd
- (id)MSMakePrimaryError;	// 0xe5e5
- (id)MSVerboseDescription;	// 0xe5d1
- (id)_MSVerboseDescriptionRecursionCount:(int)count;	// 0xe415
@end

@interface XXUnknownSuperclass (MCDictionaryUtilities)
- (id)MSDeepCopy;	// 0xf35d
- (id)MSDeepCopyWithZone:(NSZone *)zone;	// 0xf34d
- (id)MSMutableDeepCopy;	// 0xf339
- (id)MSMutableDeepCopyWithZone:(NSZone *)zone;	// 0xf0d9
@end

@interface XXUnknownSuperclass (MSArrayUtilities)
- (id)MSDeepCopy;	// 0xf5ad
- (id)MSDeepCopyWithZone:(NSZone *)zone;	// 0xf59d
- (id)MSMutableDeepCopy;	// 0xf589
- (id)MSMutableDeepCopyWithZone:(NSZone *)zone;	// 0xf371
@end

@interface XXUnknownSuperclass (MSArrayUtilities)
- (void)MSRemoveOneObjectByPointerComparison:(id)comparison;	// 0xf631
- (void)MSRemoveOneObject:(id)object;	// 0xf5bd
@end

@interface XXUnknownSuperclass (MSStringUtilities)
+ (id)MSTempFilePath;	// 0xf6d1
+ (id)MSMakeUUID;	// 0xf691
- (unsigned long long)MSUniqueID;	// 0xf845
- (id)MSHexData;	// 0xf749
@end

@interface XXUnknownSuperclass (MSDataUtilities)
- (id)MSHexString;	// 0xfc65
- (id)MSBase64Encoding;	// 0xfa89
- (id)MSInitWithBase64Encoding:(id)base64Encoding;	// 0xf8a5
@end