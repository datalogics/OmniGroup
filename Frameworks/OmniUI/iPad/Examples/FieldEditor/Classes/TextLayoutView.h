// Copyright 2010 Omni Development, Inc.  All rights reserved.
//
// This software may only be used and reproduced according to the
// terms in the file OmniSourceLicense.html, which should be
// distributed with this project and can also be found at
// <http://www.omnigroup.com/developer/sourcecode/sourcelicense/>.
//
// $Id$

#import <OmniFoundation/OFObject.h>

@class OUITextLayout;

@interface TextLayoutView : UIView
{
@private
    NSAttributedString *_text;
    OUITextLayout *_textLayout;
}

@property(copy,nonatomic) NSAttributedString *text;

@end
