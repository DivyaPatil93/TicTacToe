//
//  ViewController.h
//  DPTicTacToe
//
//  Created by Divya on 26/09/16.
//  Copyright © 2016 Felix ITs. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    int numberOfTurns,currentPlayer;
    BOOL isGameFinished;
    
    NSArray *winningCombination;
    NSMutableArray *currentState;
}
- (IBAction)buttonAction:(id)sender;



@end

