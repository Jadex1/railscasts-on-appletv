//
//  MovieCollectionViewCell.h
//  TVOSExample
//
//  Created by Christian Lysne on 13/09/15.
//  Copyright © 2015 Christian Lysne. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Movie.h"

@interface MovieCollectionViewCell : UICollectionViewCell

@property (assign, nonatomic) IBOutlet UIImageView *posterImageView;
@property (assign, nonatomic) IBOutlet UILabel *titleLabel;
@property (nonatomic, assign) NSIndexPath *indexPath;

- (void)updateCellForMovie:(Movie *)movie;

@end
