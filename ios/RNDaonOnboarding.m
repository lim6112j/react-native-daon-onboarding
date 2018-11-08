#import "RNDaonOnboarding.h"

@implementation RNDaonOnboarding

RCT_EXPORT_MODULE()

- (dispatch_queue_t)methodQueue
{
    return dispatch_get_main_queue();
}

RCT_EXPORT_METHOD(sampleMethod:(NSString *)stringArgument numberParameter:(nonnull NSNumber *)numberArgument callback:(RCTResponseSenderBlock)callback)
{
    // TODO: Implement
    NSString* someString = @"some string made by ben lim";
    callback(@[someString]);
}

@end
