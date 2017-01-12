/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDParsecRemoteCollectionViewController : _UIRemoteViewController <DDParsecHostVCInterface> {
    <DDParsecHostVCInterface> * _hostSideDelegate;
    BOOL  _receivedInteractionDidFinish;
}

@property <DDParsecHostVCInterface> *hostSideDelegate;

+ (id)exportedInterface;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (BOOL)canBecomeFirstResponder;
- (void)getStatusBarHidden:(id /* block */)arg1;
- (id)hostSideDelegate;
- (void)interactionEnded;
- (void)interactionEndedWithPunchout:(BOOL)arg1;
- (void)openParsecURL:(id)arg1;
- (void)openTrailerPunchout:(id)arg1;
- (void)setHostSideDelegate:(id)arg1;
- (void)showingErrorView:(BOOL)arg1;
- (void)showingFTE:(BOOL)arg1;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end