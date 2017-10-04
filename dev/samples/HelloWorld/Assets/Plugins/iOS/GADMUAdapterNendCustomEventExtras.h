//
//  GADMUAdapterNendCustomEventExtras.h
//  
//  Created by F@N on 2017/10/02.
//

#import <Foundation/Foundation.h>
#import <GoogleMobileAds/GoogleMobileAds.h>

@interface GADMUAdapterNendCustomEventExtras : NSObject

- (id<GADAdNetworkExtras>)adNetworkExtrasWithDictionary:(NSDictionary<NSString *, NSString *> *)extras;

@end
