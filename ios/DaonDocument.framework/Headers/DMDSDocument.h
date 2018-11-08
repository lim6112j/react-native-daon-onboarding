
#import <UIKit/UIKit.h>

@class DMDSQuadrangle;

/*!
 @abstarct Represents a scanned document.
 */
@interface DMDSDocument : NSObject

/*!
 @abstract The information extracted from the document via OCR. The data is keyed by the name of the extracted element.
 */
@property (nonatomic, strong) NSDictionary* textExtracted;
/*!
 @abstract The quality score associated with the captured processed document image.
 */
@property (nonatomic, assign) double qualityScore;
/*!
 @abstract The captured document image after processing has been applied - i.e. the document has been cropped and de-skewed.
 */
@property (nonatomic, strong) UIImage* processedImage;

/*!
 @abstract The captured document image before any image processing has been applied (aside for it being rotated to the correct orientation).
 */
@property (nonatomic, strong) UIImage* unprocessedImage;

/*!
 @abstract The location of the processed image within the unprocessed image.
 
 Contains 4 points of detected document's corners. Measurements are in pixels, and are based on the distance from the top left corner of the 'unprocessedImage' image.
 */
@property (nonatomic, strong) DMDSQuadrangle* processedDocumentCoordinates;

/*!
 @brief The type of document that has been captured, or 'kEdgeDetection' if it was captured through edge detection.
 */
@property (nonatomic, strong) NSString* documentType;

/*!
 @internal
 @abstract  Initialise a DMDSDocument object.
 @return    A new DMDSDocument object.
 @discussion This is primarily for internal framework usage.
 */
- (id)initWithText:(NSDictionary*)textExtracted
      qualityScore:(double)qualityScore
    processedImage:(UIImage*)processedImage
  unprocessedImage:(UIImage*)unprocessedImage
documentCoordinates:(DMDSQuadrangle*)documentCoordinates
      documentType:(NSString*)documentType;

/*!
 @abstract Return the description of the relevant properties of this object at runtime for debugging purposes.
 */
- (NSString*)description;

@end
