
#import <Foundation/Foundation.h>

@class DMDSDefaultUIOptions;

/*!
 @abstract Settings class with all possible options to control the document scanning session.
 */
@interface DMDSOptions : NSObject <NSCopying>

/*!
 License key for unlocking the scanning library.
 */
@property (nonnull, nonatomic, strong) NSString *licenseKey;

/*!
 Specify which type(s) of documents should be recognized during the scanning process.
 
 For example, to recognize Passports and UK Drivers Licenses: [NSMutableSet setWithObjects:kPassport, kUkdl, nil];
 
 To use edge detection only (without recognizing a specific document, to just receive a cropped and dewarped document and face (if faceDetection is enabled without extracting any text), set this to kEdgeDetection only. kEdgeDetection should never be set at the same time as other document types.
 For example: [NSMutableSet setWithObjects:kEdgeDetection, nil];
 
 Default: [NSMutableSet setWithObjects: kPassport, kEudl, kUsdl, nil];
 @see DMDSDocumentTypes.h DMDSDocumentTypes
 */
@property (nonnull, nonatomic, strong) NSMutableSet<NSString *> *documentTypes;

/*!
 Lock/unlock support for additional screen orientations. To allow for changes in orientation, your application will also need to support these orientations.
 
 Set it to YES if you want camera view controller to autorotate.
 
 Default: NO.
 */
@property (nonatomic, assign) BOOL lockScanningAspect;

/*!
 Scanning duration in seconds.
 
 This only relates to the document recognition scanning duration if you are using fallback
 edge detection (where fallbackToEdgeDetection is set to true).
 
 Default: 60.
 */
@property (nonatomic, assign) int scanningDuration;

/*!
 Enable/disable face detection.
 
 If enabled, the document scanning will only be successful when the face image is found and
 the global face quality score is greater than or equal to faceQualityScoreThreshold.
 The face image will be returned in the DMDSResult object along with the quality score and quality measures.
 
 Default: YES.
 */
@property (nonatomic, assign) BOOL faceDetection;

/*!
 Set the minimum global face quality score for the face image on the document.
 
 This should be set between 0 and 1, where 0 is the lowest quality score.
 
 If faceDetection is enabled, the document scanning will only be successful when the face image is found and
 the global face quality score is greater than or equal to this value.
 
 Default: 0.4.
 */
@property (nonatomic, assign) float faceQualityScoreThreshold;

/*!
 Enable/disable edge detection as a fallback method to extract the cropped and deskewed
 document image when the document is not recognised within the duration set by 'scanningDuration'.
 
 When using the default scanning method, this should be a seamless transition from document recognition to edge detection
 where there is no change in the UI.
 
 Default: YES.
 */
@property (nonatomic, assign) BOOL fallbackToEdgeDetection;

/*!
 Set the duration in seconds for the fallback edge detection duration after the scanningDuration.
 
 For example, if 'fallbackToEdgeDetectionDuration' is set to 60 and 'scanningDuration' is set to 120, then
 the first 120 seconds will use document recognition, followed by the next 60 seconds of edge detection.
 
 Default: 60.
 */
@property (nonatomic, assign) int fallbackToEdgeDetectionDuration;

/*!
 Settings for the Default UI.
 
 This is only used when initialising a scanning session with the Default UI.
 */
@property (nonnull, nonatomic, strong) DMDSDefaultUIOptions *defaultUIOptions;


/*!
 Settings for the Default UI.
 
 This is only used when initialising a scanning session with the Default UI.
 */
@property (nonnull, nonatomic, strong) NSString *southAfricaGreenBookEdgeDetectionType;

/*!
 Initialises DMDSOptions with default values.
 
 See individual properties for default values.
 
 @return Initialised DMDSOptions object.
 */
- (nonnull instancetype)init;

/*!
 @abstract Return the description of the relevant properties of this object at runtime for debugging purposes.
 */
- (NSString * _Nullable)description;



@end
