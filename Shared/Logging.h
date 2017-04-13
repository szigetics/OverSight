//
//  Logging.h
//  OverSight
//
//  Created by Patrick Wardle on 7/7/16.
//  Copyright (c) 2016 Objective-See. All rights reserved.
//
#import <syslog.h>
#import <Foundation/Foundation.h>

//log a msg to syslog
// ->also disk, if error
void logMsg(int level, NSString* msg);

//prep/open log file
BOOL initLogging();

//get path to log file
NSString* logFilePath();

//de-init logging
void deinitLogging();

//log to file
void log2File(NSString* msg);


