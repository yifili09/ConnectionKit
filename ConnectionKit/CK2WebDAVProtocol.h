//
//  CK2WebDAVProtocol.h
//
//  Created by Sam Deane on 19/11/2012.
//
//

#import "CK2Protocol.h"
#import <DAVKit/DAVKit.h>

typedef void (^CK2WebDAVCompletionHandler)(id result);
typedef void (^CK2WebDAVErrorHandler)(NSError* error);

@interface CK2WebDAVProtocol : CK2Protocol<DAVPutRequestDelegate, DAVSessionDelegate>
{
@private
    DAVSession*         _session;
    NSOperationQueue*   _queue;

    NSUInteger _attempts;
    NSUInteger _expectedLength;
    CK2WebDAVCompletionHandler _completionHandler;
    CK2WebDAVErrorHandler _errorHandler;
    CK2ProgressBlock _progressHandler;
}

@end
