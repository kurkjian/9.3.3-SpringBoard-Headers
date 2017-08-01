//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SBFFileCache;

@interface SBComposedWallpaperBuilder : NSObject
{
    SBFFileCache *_fileCache;
}

@property(readonly, nonatomic) SBFFileCache *fileCache; // @synthesize fileCache=_fileCache;
- (void).cxx_destruct;
- (id)drawImageLayer:(id)arg1 inBounds:(struct CGRect)arg2 assets:(id)arg3;
- (id)drawColorLayer:(id)arg1 inBounds:(struct CGRect)arg2;
- (void)buildWallpaperOfSize:(struct CGSize)arg1 fromSpecification:(id)arg2 assets:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)buildWallpaperOfSize:(struct CGSize)arg1 fromSpecification:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)buildWallpaperFromSpecification:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithAssetCache:(id)arg1;

@end

