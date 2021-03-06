/*****************************************************************************
 * VLCLocalNetworkListViewController
 * VLC for iOS
 *****************************************************************************
 * Copyright (c) 2015 VideoLAN. All rights reserved.
 * $Id$
 *
 * Author: Felix Paul Kühne <fkuehne # videolan.org>
 *
 * Refer to the COPYING file of the official project for license.
 *****************************************************************************/

@class VLCNetworkListCell;

extern NSString *VLCNetworkListCellIdentifier;

@interface VLCNetworkListViewController : UIViewController

@property (nonatomic, strong) UITableView *tableView;

- (IBAction)playAllAction:(id)sender;
- (void)tableView:(UITableView *)tableView willDisplayCell:(VLCNetworkListCell *)cell forRowAtIndexPath:(NSIndexPath *)indexPath;

@end
