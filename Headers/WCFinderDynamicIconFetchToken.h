//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMImageLoaderObserver-Protocol.h"

@class NSString, UIColor, UIImage;
@protocol WCFinderDynamicFetchIconDelegate;

@interface WCFinderDynamicIconFetchToken : NSObject <MMImageLoaderObserver>
{
    _Bool _useDefaultIconAsPlaceholder;
    _Bool _dyeingImageWithColor;
    long long _type;
    SEL _iconIdentify;
    id <WCFinderDynamicFetchIconDelegate> _delegate;
    void *_context;
    UIColor *_iconColor;
    UIImage *_image;
    UIImage *_darkImage;
    UIImage *_lightImage;
    NSString *_lightImageUrl;
    NSString *_darkImageUrl;
    struct CGSize _iconSize;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *darkImageUrl; // @synthesize darkImageUrl=_darkImageUrl;
@property(copy, nonatomic) NSString *lightImageUrl; // @synthesize lightImageUrl=_lightImageUrl;
@property(retain, nonatomic) UIImage *lightImage; // @synthesize lightImage=_lightImage;
@property(retain, nonatomic) UIImage *darkImage; // @synthesize darkImage=_darkImage;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(nonatomic) _Bool dyeingImageWithColor; // @synthesize dyeingImageWithColor=_dyeingImageWithColor;
@property(nonatomic) _Bool useDefaultIconAsPlaceholder; // @synthesize useDefaultIconAsPlaceholder=_useDefaultIconAsPlaceholder;
@property(retain, nonatomic) UIColor *iconColor; // @synthesize iconColor=_iconColor;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) void *context; // @synthesize context=_context;
@property(nonatomic) __weak id <WCFinderDynamicFetchIconDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) SEL iconIdentify; // @synthesize iconIdentify=_iconIdentify;
@property(nonatomic) long long type; // @synthesize type=_type;
- (id)suitableLightDarkImage;
- (id)init;
- (void)ImageDidFail:(id)arg1;
- (id)imageWithColor:(id)arg1 color:(id)arg2;
- (id)tryDyeingImage:(id)arg1 color:(id)arg2;
- (void)ImageDidLoadWithData:(id)arg1 Url:(id)arg2;
- (void)notifyImageChanged;
- (_Bool)ensureDynamicImage;
- (_Bool)setupLightImage:(id)arg1;
- (_Bool)setupDarkImage:(id)arg1;
- (void)setupDynamicImage:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

