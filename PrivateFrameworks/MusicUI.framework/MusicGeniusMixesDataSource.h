/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MusicUI.framework/MusicUI
 */

@class NSMutableArray;

@interface MusicGeniusMixesDataSource : MusicQueryDataSource {
    NSMutableArray *_mixes;
}

- (void).cxx_destruct;
- (BOOL)_updateQueryPredicatesAndOrdering;
- (BOOL)canSelectEntityAtIndex:(unsigned int)arg1;
- (id)dataSourceFromEntityAtIndex:(unsigned int)arg1;
- (void)deleteEntityAtIndex:(unsigned int)arg1;
- (int)editingTypeForEntityAtIndex:(unsigned int)arg1;
- (id)entities;
- (BOOL)entityIsNowPlayingAtIndex:(unsigned int)arg1;
- (unsigned int)indexOfEntity:(id)arg1;
- (void)invalidateWithInsertedObjects:(id)arg1 updatedObjects:(id)arg2 deletedObjects:(id)arg3;
- (BOOL)isEmpty;
- (id)playbackContextForIndex:(unsigned int)arg1;
- (BOOL)showsIndexBar;

@end