//
//  ViewController.h
//  GoogleContacts
//
//  Created by Dipin Krishna on 08/09/13.
//  Copyright (c) 2013 Dipin Krishna. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GDataFeedContact.h"
#import "GDataContacts.h"

@interface ViewController : UIViewController {
    NSMutableArray *googleContacts;
    
    GDataServiceTicket *mContactFetchTicket;
    NSError *mContactFetchError;
}
@property (weak, nonatomic) IBOutlet UITextField *usernameTxt;
@property (weak, nonatomic) IBOutlet UITextField *passwordTxt;

- (IBAction)getContacts:(id)sender;
@end
