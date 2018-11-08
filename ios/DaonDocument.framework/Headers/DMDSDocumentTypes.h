
#import <Foundation/Foundation.h>

/*!
 @unsorted
 @abstract Contains all possible document types that may be used when initialising the scaning options (see documentTypes in @link DMDSOptions.h DMDSOptions @/link).
 */
@interface DMDSDocumentTypes : NSObject

/*!
 Edge Detection (this will capture any document by searching for a rectangle's edges). No OCR will be performed.
 
 Note - this should not be used with any other document type.
 */
extern NSString * const kEdgeDetection;

extern NSString * const kEdgeDetection_A4;

extern NSString * const kEdgeDetection_A4_Landscape;

extern NSString * const kEdgeDetection_A4_Portrait;

/*! Passport */
extern NSString * const kPassport;

/*! South African Green Book */
extern NSString * const kGreenBook;

/*! EU Drivers License */
extern NSString * const kEudl;

/*! US Drivers License */
extern NSString * const kUsdl;

/*! Australian Drivers Licence */
extern NSString * const kAustralianDL;

/*! Serbian Identity Card - Front */
extern NSString * const kSerbianFrontID;
/*! Serbian Identity Card - Back */
extern NSString * const kSerbianBackID;

/*! German Identity Card - Front */
extern NSString * const kGermanFrontID;
/*! German Identity Card - Back */
extern NSString * const kGermanBackID;
/*! German Identity Card - Old */
extern NSString * const kGermanOldID;

/*! Austrian Identity Card - Front */
extern NSString * const kAustrianFrontID;
/*! Austrian Identity Card - Back */
extern NSString * const kAustrianBackID;

/*! Slovak Identity Card - Front */
extern NSString * const kSlovakFrontID;
/*! Slovak Identity Card - Back */
extern NSString * const kSlovakBackID;

/*! Slovenian Identity Card - Front */
extern NSString * const kSlovenianFrontID;
/*! Slovenian Identity Card - Back */
extern NSString * const kSlovenianBackID;

/*! Czech Identity Card - Front */
extern NSString * const kCzechFrontID;
/*! Czech Identity Card - Back */
extern NSString * const kCzechBackID;

/*! Croatian Identity Card - Front */
extern NSString * const kCroatianFrontID;
/*! Croatian Identity Card - Back */
extern NSString * const kCroatianBackID;

/*! Singapore Identity Card - Front */
extern NSString * const kSingaporeFrontID;
/*! Singapore Identity Card - Back */
extern NSString * const kSingaporeBackID;

/*! Malaysian Identity Card - Front */
extern NSString * const kMalaysianFrontID;

/*! Polish Identity Card - Front */
extern NSString * const kPolishFrontID;
/*! Polish Identity Card - Back */
extern NSString * const kPolishBackID;

/*! South African Green Identity Book */
extern NSString * const kSouthAfricanGreenBookID;


@end
