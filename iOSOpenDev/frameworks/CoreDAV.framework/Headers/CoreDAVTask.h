/**
 * This header is generated by class-dump-z 0.2b.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <CoreDAV/CoreDAV-Structs.h>
#import <CoreDAV/XXUnknownSuperclass.h>

@class NSURLRequest, NSDate, NSURL, NSMutableArray, NSMutableDictionary, NSError, CoreDAVRequestLogger, NSHTTPURLResponse, NSDictionary, NSURLConnection;
@protocol CoreDAVTaskDelegate, CoreDAVAccountInfoProvider, CoreDAVResponseBodyParser, CoreDAVTaskManager;

@interface CoreDAVTask : XXUnknownSuperclass {
	id<CoreDAVTaskManager> _taskManager;	// 4 = 0x4
	id<CoreDAVAccountInfoProvider> _accountInfoProvider;	// 8 = 0x8
	int _numDownloadedElements;	// 12 = 0xc
	int _depth;	// 16 = 0x10
@private
	NSHTTPURLResponse *_response;	// 20 = 0x14
	NSURLConnection *_connection;	// 24 = 0x18
	NSURLRequest *_request;	// 28 = 0x1c
	double _timeoutInterval;	// 32 = 0x20
	int _responseStatusCode;	// 40 = 0x28
	NSDate *_dateConnectionWentOut;	// 44 = 0x2c
	BOOL _didSendRequest;	// 48 = 0x30
	BOOL _didFailWithError;	// 49 = 0x31
	BOOL _didCancel;	// 50 = 0x32
	BOOL _didReceiveResponse;	// 51 = 0x33
	BOOL _didReceiveData;	// 52 = 0x34
	BOOL _didFinishLoading;	// 53 = 0x35
	BOOL _finished;	// 54 = 0x36
	void *_context;	// 56 = 0x38
	BOOL _receivedBadPasswordResponse;	// 60 = 0x3c
	BOOL _justTriedTokenAuth;	// 61 = 0x3d
	BOOL _everTriedTokenAuth;	// 62 = 0x3e
	BOOL _requestIsCompressed;	// 63 = 0x3f
	BOOL _compressedRequestFailed;	// 64 = 0x40
	NSError *_passwordNotificationError;	// 68 = 0x44
	id<CoreDAVResponseBodyParser> _responseBodyParser;	// 72 = 0x48
	CoreDAVRequestLogger *_logger;	// 76 = 0x4c
	NSURL *_url;	// 80 = 0x50
	BOOL _allowAutomaticRedirects;	// 84 = 0x54
	id<CoreDAVTaskDelegate> _delegate;	// 88 = 0x58
	id _requestProgressBlock;	// 92 = 0x5c
	id _responseProgressBlock;	// 96 = 0x60
	id _completionBlock;	// 100 = 0x64
	NSError *_error;	// 104 = 0x68
	unsigned _totalBytesReceived;	// 108 = 0x6c
	NSMutableDictionary *_overriddenHeaders;	// 112 = 0x70
	NSMutableArray *_redirectHistory;	// 116 = 0x74
}
@property(assign, nonatomic) unsigned totalBytesReceived;	// G=0x1b799; S=0x1b7a9; @synthesize=_totalBytesReceived
@property(readonly, assign) NSURL *url;	// G=0x1b5d5; @synthesize=_url
@property(assign, nonatomic) int responseStatusCode;	// G=0x1b6a9; S=0x1b6b9; @synthesize=_responseStatusCode
@property(readonly, assign) NSDictionary *responseHeaders;	// G=0x1b245; 
@property(retain) id<CoreDAVResponseBodyParser> responseBodyParser;	// G=0x1b671; S=0x1b685; @synthesize=_responseBodyParser
@property(assign, nonatomic) BOOL allowAutomaticRedirects;	// G=0x1b7b9; S=0x1b7c9; @synthesize=_allowAutomaticRedirects
@property(assign) double timeoutInterval;	// G=0x1b609; S=0x1b63d; @synthesize=_timeoutInterval
@property(assign) int depth;	// G=0x1b5e9; S=0x1b5f9; @synthesize=_depth
@property(assign, nonatomic) void *context;	// G=0x1b5b5; S=0x1b5c5; @synthesize=_context
@property(assign, nonatomic) id<CoreDAVTaskDelegate> delegate;	// G=0x1b595; S=0x1b5a5; @synthesize=_delegate
@property(assign, nonatomic) id<CoreDAVAccountInfoProvider> accountInfoProvider;	// G=0x1b575; S=0x1b585; @synthesize=_accountInfoProvider
@property(assign, nonatomic) id<CoreDAVTaskManager> taskManager;	// G=0x1b555; S=0x1b565; @synthesize=_taskManager
@property(readonly, assign, getter=isFinished) BOOL finished;	// G=0x1920d; 
@property(retain, nonatomic) NSError *error;	// G=0x1b765; S=0x1b775; @synthesize=_error
@property(copy, nonatomic) id completionBlock;	// G=0x1b731; S=0x1b741; @synthesize=_completionBlock
@property(copy, nonatomic) id responseProgressBlock;	// G=0x1b6fd; S=0x1b70d; @synthesize=_responseProgressBlock
@property(copy, nonatomic) id requestProgressBlock;	// G=0x1b6c9; S=0x1b6d9; @synthesize=_requestProgressBlock
@property(readonly, assign) int numDownloadedElements;	// G=0x1b361; converted property
+ (unsigned)uniqueQueryID;	// 0x171f5
// declared property setter: - (void)setAllowAutomaticRedirects:(BOOL)redirects;	// 0x1b7c9
// declared property getter: - (BOOL)allowAutomaticRedirects;	// 0x1b7b9
// declared property setter: - (void)setTotalBytesReceived:(unsigned)received;	// 0x1b7a9
// declared property getter: - (unsigned)totalBytesReceived;	// 0x1b799
// declared property setter: - (void)setError:(id)error;	// 0x1b775
// declared property getter: - (id)error;	// 0x1b765
// declared property setter: - (void)setCompletionBlock:(id)block;	// 0x1b741
// declared property getter: - (id)completionBlock;	// 0x1b731
// declared property setter: - (void)setResponseProgressBlock:(id)block;	// 0x1b70d
// declared property getter: - (id)responseProgressBlock;	// 0x1b6fd
// declared property setter: - (void)setRequestProgressBlock:(id)block;	// 0x1b6d9
// declared property getter: - (id)requestProgressBlock;	// 0x1b6c9
// declared property setter: - (void)setResponseStatusCode:(int)code;	// 0x1b6b9
// declared property getter: - (int)responseStatusCode;	// 0x1b6a9
// declared property setter: - (void)setResponseBodyParser:(id)parser;	// 0x1b685
// declared property getter: - (id)responseBodyParser;	// 0x1b671
// declared property setter: - (void)setTimeoutInterval:(double)interval;	// 0x1b63d
// declared property getter: - (double)timeoutInterval;	// 0x1b609
// declared property setter: - (void)setDepth:(int)depth;	// 0x1b5f9
// declared property getter: - (int)depth;	// 0x1b5e9
// declared property getter: - (id)url;	// 0x1b5d5
// declared property setter: - (void)setContext:(void *)context;	// 0x1b5c5
// declared property getter: - (void *)context;	// 0x1b5b5
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x1b5a5
// declared property getter: - (id)delegate;	// 0x1b595
// declared property setter: - (void)setAccountInfoProvider:(id)provider;	// 0x1b585
// declared property getter: - (id)accountInfoProvider;	// 0x1b575
// declared property setter: - (void)setTaskManager:(id)manager;	// 0x1b565
// declared property getter: - (id)taskManager;	// 0x1b555
- (void)reportStatusWithError:(id)error;	// 0x1b371
// converted property getter: - (int)numDownloadedElements;	// 0x1b361
- (void)reset;	// 0x1b275
- (void)startModal;	// 0x1b265
// declared property getter: - (id)responseHeaders;	// 0x1b245
- (void)connection:(id)connection didFailWithError:(id)error;	// 0x1adf9
- (void)connection:(id)connection didReceiveResponse:(id)response;	// 0x1ad15
- (void)connectionDidFinishLoading:(id)connection;	// 0x1a785
- (void)connection:(id)connection willSendRequestForAuthenticationChallenge:(id)authenticationChallenge;	// 0x1a48d
- (void)connection:(id)connection didReceiveAuthenticationChallenge:(id)challenge;	// 0x1a179
- (BOOL)connectionShouldUseCredentialStorage:(id)connection;	// 0x1a131
- (BOOL)connection:(id)connection canAuthenticateAgainstProtectionSpace:(id)space;	// 0x19fc9
- (id)connection:(id)connection willSendRequest:(id)request redirectResponse:(id)response;	// 0x19acd
- (id)lastRedirectURL;	// 0x19aad
- (id)connection:(id)connection needNewBodyStream:(id)stream;	// 0x19a71
- (void)connection:(id)connection didReceiveData:(id)data;	// 0x195b1
- (void)connection:(id)connection didSendBodyData:(int)data totalBytesWritten:(int)written totalBytesExpectedToWrite:(int)write;	// 0x19569
- (void)_handleBadPasswordResponse;	// 0x193f9
- (id)_applyStorageSession:(CFURLStorageSessionRef)session toRequest:(id)request;	// 0x1935d
- (id)_applyAuthenticationChain:(CFArrayRef)chain toRequest:(id)request;	// 0x19261
- (BOOL)markAsFinished;	// 0x19231
// declared property getter: - (BOOL)isFinished;	// 0x1920d
- (void)finishCoreDAVTaskWithError:(id)error;	// 0x18fc9
- (BOOL)validate:(id *)validate;	// 0x18fc5
- (void)performCoreDAVTask;	// 0x18759
- (unsigned)cachePolicy;	// 0x18755
- (void)overrideRequestHeader:(id)header withValue:(id)value;	// 0x186cd
- (id)additionalHeaderValues;	// 0x186c9
- (void)_failImmediately;	// 0x18635
- (id)_createBodyData;	// 0x18575
- (id)_compressBodyData:(id)data;	// 0x18409
- (void)tearDownResources;	// 0x18351
- (void)loadRequest:(id)request;	// 0x17bf1
- (BOOL)shouldLogResponseBody;	// 0x17bed
- (id)copyDefaultParserForContentType:(id)contentType;	// 0x17bb9
- (id)requestBody;	// 0x17b91
- (id)requestBodyStream;	// 0x17b8d
- (BOOL)_includeGeneralHeaders;	// 0x17b51
- (id)httpMethod;	// 0x17b45
- (id)appleClientInfoString;	// 0x177fd
- (id)description;	// 0x175d1
- (void)dealloc;	// 0x172e5
- (id)initWithURL:(id)url;	// 0x17209
@end