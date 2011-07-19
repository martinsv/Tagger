//
//  TabLibOC.h
//  VGTagger
//
//  Created by Bilal Syed Hussain on 06/07/2011.
//  Copyright 2011 St. Andrews KY16 9XW. All rights reserved.
//

#import <Foundation/Foundation.h>

struct FileData;

/// Tags allows reading and writing of tags of audio files
@interface Tags : NSObject {
	@protected
	struct FileData* data;  /// The tag data
}

/// @name Initializing an Tags Object


 /**  
  * Creates and finds the tags of the specifed file
  * should be used on one of the subclass e.g MP4Tag
  *
  * @param filename The filepath to the file.
  *
  * @return A new Tags.
  */
-(id) initWithFilename:(NSString *)filename;


 /**  
  *  Gives value to the fields class should call this method in subclasses initWithFilename.
  */
-(void) initFields;

/// @name Finding metadata.

/// The title of the file
@property (assign) NSString *title; 
/// The artist of the file
@property (assign) NSString *artist; 
/// The album of the file
@property (assign) NSString *album; 
/// The comment of the file
@property (assign) NSString *comment;
/// The genre of the file
@property (assign) NSString *genre;
/// The year of the file
@property (assign) NSNumber *year;
/// The track of the file
@property (assign) NSNumber *track; 

@end