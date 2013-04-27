//
//  FiveViewController.m
//  AppgoMallDemo
//
//  官方网站：http://www.appgo.cn
//  Copyright (c) 2012年 掌淘科技. All rights reserved.
//

#import "FiveViewController.h"
#import <AppgoMall/AppgoMall.h>
#import "TabBarController.h"
#import "AdViewController.h"

@implementation FiveViewController

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        self.title = NSLocalizedString(@"掌淘联盟Demo", @"掌淘联盟Demo");
        //self.tabBarItem.image = [UIImage imageNamed:@"more"];
        
        
        
    }
    return self;
}

- (void)loadView
{
    [super loadView];
    
    UITableView *tableView = [[UITableView alloc] initWithFrame:CGRectMake(0.0, 0.0, self.view.frame.size.width, self.view.frame.size.height) style:UITableViewStyleGrouped];
    
    tableView.autoresizingMask = UIViewAutoresizingFlexibleHeight | UIViewAutoresizingFlexibleWidth;
    tableView.delegate = self;
    tableView.dataSource = self;
    tableView.separatorStyle = UITableViewCellSeparatorStyleSingleLine;
    [self.view addSubview:tableView];
    [tableView release];
    
    listOfItems = [[NSMutableArray alloc] init];
	NSArray *freeAppArray = [NSArray arrayWithObjects:
							 //NSLocalizedString(@"Sales and Trends",nil),
							 NSLocalizedString(@"弹出模式(Modal Type)",nil),
							 NSLocalizedString(@"Push模式(Push Type)",nil),
                             NSLocalizedString(@"选项模式(Tab Type)",nil),
                             NSLocalizedString(@"幻灯片",nil),
							 nil];
	NSDictionary *freeAppDict = [NSDictionary dictionaryWithObject:freeAppArray forKey:@"Countries"];
	NSArray *verArray = [NSArray arrayWithObjects:
                         NSLocalizedString(@"官方网站", nil),
						 NSLocalizedString(@"版本 1.0",nil),
						 nil];
	NSDictionary *verDict = [NSDictionary dictionaryWithObject:verArray forKey:@"Countries"];
	[listOfItems addObject:freeAppDict];
	[listOfItems addObject:verDict];
    
}

- (void)viewWillAppear:(BOOL)animated
{
    [super viewWillAppear:animated];
    
    self.navigationController.navigationBar.barStyle = UIBarStyleBlackOpaque;
    self.navigationController.navigationBarHidden = NO;
}

#pragma mark -
#pragma mark Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView {
    // Return the number of sections.
    return [listOfItems count];
}
- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section {
    // Return the number of rows in the section.
	//Number of rows it should expect should be based on the section
	NSDictionary *dictionary = [listOfItems objectAtIndex:section];
	NSArray *array = [dictionary objectForKey:@"Countries"];
	return [array count];
}


- (NSString *)tableView:(UITableView *)tableView titleForHeaderInSection:(NSInteger)section {
	
	if (section == 0)
		return NSLocalizedString(@"商城",nil);
//	else if (section == 1)
//		return NSLocalizedString(@"关于",nil);
	else
		return NSLocalizedString(@"关于我们",nil);
}

// Customize the appearance of table view cells.
- (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath {
    
    static NSString *CellIdentifier = @"Cell";
    
    UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:CellIdentifier];
    if (cell == nil) {
        cell = [[[UITableViewCell alloc] initWithStyle:UITableViewCellStyleDefault reuseIdentifier:CellIdentifier] autorelease];
    }
    
	// Configure the cell...
	NSDictionary *dictionary = [listOfItems objectAtIndex:indexPath.section];
	NSArray *array = [dictionary objectForKey:@"Countries"];
	NSString *cellValue = [array objectAtIndex:indexPath.row];
	cell.textLabel.text = cellValue;
	cell.accessoryType = UITableViewCellAccessoryDisclosureIndicator;
	
    return cell;
}

#pragma mark -
#pragma mark Table view delegate

- (void)tableView:(UITableView *)tableView didSelectRowAtIndexPath:(NSIndexPath *)indexPath {
    NSUInteger row = indexPath.row;
	NSUInteger section=indexPath.section;
	switch (section) {
		case 0:
        {
            switch (row)
            {
                case 0:
                    [AppgoMall presendModalRecommendGoodsController:self
                                                              title:@"商城"
                                                              style:SKRecommendGoodsViewStyleListX2
                                                           pageSize:60
                                               allowUserChangeStyle:YES
                                                         showHeader:YES];
                    break;
                case 1:
                    [AppgoMall pushRecommendGoodsController:self.navigationController
                                                      title:@"商城"
                                                      style:SKRecommendGoodsViewStyleListX2
                                                   pageSize:60
                                       allowUserChangeStyle:YES
                                                 showHeader:YES];
                    break;
                case 2:
                    self.navigationController.navigationBarHidden = YES;
                    TabBarController *tabbarController = [[[TabBarController alloc] init] autorelease];
                    [self.navigationController pushViewController:tabbarController animated:NO];
                    break;
                case 3:
                {
                    AdViewController *viewController = [[[AdViewController alloc] initWithStyle:UITableViewStylePlain] autorelease];
                    viewController.navigationItem.leftBarButtonItem = [[[UIBarButtonItem alloc] initWithTitle:@"取消" style:UIBarButtonItemStyleBordered target:self action:@selector(cancelButtonClickHandler:)] autorelease];
                    
                    UINavigationController *navigationController = [[[UINavigationController alloc] initWithRootViewController:viewController] autorelease];
                    [self presentModalViewController:navigationController animated:YES];
                    break;
                }
                default:
                    break;
            }
			break;
        }
        case 1:
            if (row==0)
            {
                [[UIApplication sharedApplication] openURL:[NSURL URLWithString:@"http://www.appgo.cn"]];
                
            }
        default:
			break;
    }

	
}



- (void)cancelButtonClickHandler:(id)sender
{
    [self dismissModalViewControllerAnimated:YES];
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end

