
#import <UIKit/UIKit.h>

@class DMDSOptions;
@protocol DMDSCustomScanDelegate;
@protocol DMDSDefaultScanDelegate;

/*!
 @unsorted
 @abstract  This is the inner view controller that controls the document capture session, and includes methods to initialise and manage sessions.
 
            The methods provided by this class are primarily for internal framework usage. Use the @link DMDSCaptureManager.h DMDSCaptureManager @/link class to control the scanning sesson. 
 */
@interface DMDSCameraController : UIViewController

- (id)initWithDelegate:(id<DMDSDefaultScanDelegate>)delegate cameraOptions:(DMDSOptions *)cameraOptions error:(NSError**)error;
- (id)initWithOverlayViewController:(UIViewController<DMDSCustomScanDelegate> *)overlayViewController cameraOptions:(DMDSOptions *)cameraOptions error:(NSError**)error;

- (void)updateCameraOptions:(DMDSOptions*)cameraOptions;
- (void)stopScanning;
- (void)restartScanning;
- (void)setScanningRegion:(CGRect)rect;
- (NSString*)description;

@end
