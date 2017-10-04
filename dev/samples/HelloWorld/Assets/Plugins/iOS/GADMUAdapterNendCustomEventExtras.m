//
//  GADMUAdapterNendCustomEventExtras.m
//
//  Created by F@N on 2017/10/02.
//

#import "GADMUAdapterNendCustomEventExtras.h"
#import <NendMediationCustomEventAdapter/NendMediationCustomEventAdapter.h>

@implementation GADMUAdapterNendCustomEventExtras

- (id<GADAdNetworkExtras>)adNetworkExtrasWithDictionary:(NSDictionary<NSString *, NSString *> *)extras {
    
    GADMAdapterNendExtras *nendExtras = [[GADMAdapterNendExtras alloc] init];
    
    NSString *userId = extras[@"nend_rewarded_video_ad_user_id"];
    if (userId.length > 0) {
        nendExtras.userId = userId;
    }
    
    return nendExtras;
}
@end
