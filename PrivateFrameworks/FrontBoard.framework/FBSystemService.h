/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@class <FBSystemServiceDelegate>, FBApplicationLibrary, FBSystemServiceServer, NSObject<OS_dispatch_queue>;

@interface FBSystemService : NSObject {
    <FBSystemServiceDelegate> *_delegate;
    FBApplicationLibrary *_library;
    NSObject<OS_dispatch_queue> *_queue;
    FBSystemServiceServer *_server;
}

@property <FBSystemServiceDelegate> * delegate;
@property(retain) NSObject<OS_dispatch_queue> * queue;
@property(retain) FBSystemServiceServer * server;

+ (id)sharedInstance;

- (void)_activateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 withResult:(id)arg5;
- (void)_activateURL:(id)arg1 application:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(id)arg6;
- (bool)_isWhitelistedLaunchSuspendedApp:(id)arg1;
- (void)_performExitTasksForRelaunch:(bool)arg1;
- (void)_reallyActivateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 withResult:(id)arg5;
- (bool)_requiresOpenApplicationEntitlement:(id)arg1 options:(id)arg2 originalSource:(id)arg3;
- (void)_terminateProcess:(id)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4;
- (void)activateApplication:(id)arg1 options:(id)arg2 source:(id)arg3 originalSource:(id)arg4 withResult:(id)arg5;
- (void)activateURL:(id)arg1 application:(id)arg2 options:(id)arg3 source:(id)arg4 originalSource:(id)arg5 withResult:(id)arg6;
- (void)canActivateApplication:(id)arg1 withResult:(id)arg2;
- (void)dealloc;
- (id)delegate;
- (void)exitAndRelaunch:(bool)arg1 withOptions:(unsigned long long)arg2;
- (void)exitAndRelaunch:(bool)arg1;
- (void)handleActions:(id)arg1 source:(id)arg2 withResult:(id)arg3;
- (id)initWithQueue:(id)arg1;
- (int)pidForApplication:(id)arg1;
- (void)prepareForExitAndRelaunch:(bool)arg1;
- (id)queue;
- (id)server;
- (void)setDelegate:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setServer:(id)arg1;
- (void)shutdownAndReboot:(bool)arg1;
- (id)systemApplicationBundleIdentifier;
- (void)terminateApplication:(id)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 source:(id)arg5;
- (void)terminateApplicationGroup:(long long)arg1 forReason:(long long)arg2 andReport:(bool)arg3 withDescription:(id)arg4 source:(id)arg5;

@end