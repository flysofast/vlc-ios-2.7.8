/*****************************************************************************
 * VLCAppDelegate.h
 * VLC for iOS
 *****************************************************************************
 * Copyright (c) 2013-2015 VideoLAN. All rights reserved.
 * $Id$
 *
 * Authors: Felix Paul Kühne <fkuehne # videolan.org>
 *          Gleb Pinigin <gpinigin # gmail.com>
 *          Jean-Romain Prévost <jr # 3on.fr>
 *          Carola Nitz <nitz.carola # googlemail.com>
 *          Tamas Timar <ttimar.vlc # gmail.com>
 *
 * Refer to the COPYING file of the official project for license.
 *****************************************************************************/

#import "VLCMenuTableViewController.h"
#import "VLCDownloadViewController.h"
#import "VLCWatchCommunication.h"

@class VLCLibraryViewController;

extern NSString *const VLCDropboxSessionWasAuthorized;

@interface VLCAppDelegate : UIResponder <UIApplicationDelegate>

@property (nonatomic, readonly) VLCLibraryViewController *libraryViewController;

@property (nonatomic, readonly) VLCWatchCommunication *watchCommunication;

@property (nonatomic, strong) UIWindow *window;

@property (nonatomic, readonly) BOOL passcodeValidated;

@end