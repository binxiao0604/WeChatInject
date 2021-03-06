//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPUImageTwoInputFilter.h"

@class GPUImagePicture, NSString;

@interface GPUImageMosaicFilter : GPUImageTwoInputFilter
{
    int inputTileSizeUniform;
    int numTilesUniform;
    int displayTileSizeUniform;
    int colorOnUniform;
    GPUImagePicture *pic;
    _Bool _colorOn;
    float _numTiles;
    NSString *_tileSet;
    struct CGSize _inputTileSize;
    struct CGSize _displayTileSize;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *tileSet; // @synthesize tileSet=_tileSet;
@property(nonatomic) _Bool colorOn; // @synthesize colorOn=_colorOn;
@property(nonatomic) struct CGSize displayTileSize; // @synthesize displayTileSize=_displayTileSize;
@property(nonatomic) float numTiles; // @synthesize numTiles=_numTiles;
@property(nonatomic) struct CGSize inputTileSize; // @synthesize inputTileSize=_inputTileSize;
- (id)init;

@end

