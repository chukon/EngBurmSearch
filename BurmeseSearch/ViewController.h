//
//  ViewController.h
//  BurmeseSearch
//
//  Created by Charles Konkol on 11/14/14.
//  Copyright (c) 2014 Rock Valley College. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UIWebViewDelegate>

@property (weak, nonatomic) IBOutlet UITextField *txtSearch;
- (IBAction)txtSearch:(id)sender;
@property (weak, nonatomic) IBOutlet UIWebView *webview;
- (IBAction)btnSearch:(id)sender;
-(IBAction) doneEditing:(id) sender;
@end

