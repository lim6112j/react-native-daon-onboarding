
#import <UIKit/UIKit.h>

@class DMDSQuadrangle;
@class DMDSOptions;

/*!
 @abstract This is a utilities class that contains methods that may be of use to an application integrating with this framework.
 */
@interface DMDSUtilities : NSObject

/*!
 @abstract  Crop an image based on specific coordinates.
 @param     originalImage   Original image to crop. Ensure the image orientation matches the coordinates.
 @param     coordinates     Coordinates to crop the image. These must be in pixels, based on the top left corner of the original image.
 @return    Cropped image.
 */
+ (UIImage*)cropImage:(UIImage*)originalImage withCoordinates:(DMDSQuadrangle*)coordinates;

/*!
 @abstract  Add a 10x10 pixel border around an image.
            This is being used when returning the processed document image in order to work with the server-side processing.
 @param     image   The original image to add the padding to.
 @return    Padded image.
 */
+ (UIImage*)padImageForServerProcessing: (UIImage*)image forDocumentType:(NSString*)documentType;

/*!

 @abstract Validates if a number is a valid luhn number.
 @param luhnString The string to check
 @return true if string is valid huhn number
*/
+ (BOOL) isValidLuhn:(NSString*)luhnString;

+ (BOOL) containsEdgeDetection:(DMDSOptions*)options;

+ (NSString*)encodeBase64Jpeg:(UIImage*)image;

+ (NSString*)encodeBase64Jpeg:(UIImage*)image withDPI:(int)dpi;
    

@end
