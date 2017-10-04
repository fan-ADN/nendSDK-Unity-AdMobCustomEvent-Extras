//
//  GADMAdapterNendRewardedVideo.h
//
//  Copyright © 2017年 F@N Communications, Inc. All rights reserved.
//

@import GoogleMobileAds;

@interface GADMAdapterNendRewardedVideo : NSObject <GADMRewardBasedVideoAdNetworkAdapter>

@end

@interface GADMAdapterNendCustomEventExtras : NSObject <GADAdNetworkExtras>

@property (nonatomic, copy) NSString *userId;

@end
