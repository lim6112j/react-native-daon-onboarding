#import "RNDaonOnboarding.h"

@implementation RNDaonOnboarding

RCT_EXPORT_MODULE()

- (dispatch_queue_t)methodQueue
{
    return dispatch_get_main_queue();
}

RCT_EXPORT_METHOD(sampleMethod:(RCTResponseSenderBlock)callback)
{
    // TODO: Implement
    NSString* someString = DaonDocument.version;
    callback(@[someString]);
}

@end
