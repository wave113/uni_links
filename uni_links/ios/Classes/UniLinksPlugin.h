#import <Flutter/Flutter.h>

NS_ASSUME_NONNULL_BEGIN

@interface UniLinksPlugin : NSObject <FlutterPlugin>
+ (instancetype)sharedInstance;
- (BOOL)application:(UIApplication *)application
    continueUserActivity:(NSUserActivity *)userActivity
      restorationHandler:(void (^)(NSArray *_Nullable))restorationHandler;
- (void)setLatestLink:(NSString *)latestLink;

@end

NS_ASSUME_NONNULL_END
