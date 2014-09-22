//
//  NoteViewController.h
//  CamBinder
//
//  Created by 松本拓真 on 2014/08/25.
//  Copyright (c) 2014年 MatsumotoTakuma. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface NoteViewController : UIViewController <UITableViewDataSource,UITableViewDelegate,UITextFieldDelegate,UIImagePickerControllerDelegate,UINavigationControllerDelegate>

//@property (weak, nonatomic) IBOutlet UIScrollView *scrollView;
@property (weak, nonatomic) IBOutlet UITableView *noteView;
@property (weak, nonatomic) IBOutlet UIToolbar *noteTabBar;
@property (weak, nonatomic) IBOutlet UITextField *addTextMemo;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *addMemo;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *addImage;
- (IBAction)tapAddImage:(UIBarButtonItem *)sender;
@property (weak, nonatomic) IBOutlet UIBarButtonItem *addLibrary;
- (IBAction)tapAddLibarary:(UIBarButtonItem *)sender;

@property (strong, nonatomic) NSMutableArray *object;

@end
