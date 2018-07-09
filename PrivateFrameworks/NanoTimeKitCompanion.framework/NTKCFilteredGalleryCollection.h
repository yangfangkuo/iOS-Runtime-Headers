/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
 */

@interface NTKCFilteredGalleryCollection : NTKCFaceCollectionGalleryCollection {
    id /* block */  _filter;
}

@property (nonatomic, copy) id /* block */ filter;

- (void).cxx_destruct;
- (id)faceAtIndex:(unsigned long long)arg1;
- (id /* block */)filter;
- (unsigned long long)indexOfFace:(id)arg1;
- (unsigned long long)numberOfFaces;
- (void)setFilter:(id /* block */)arg1;

@end