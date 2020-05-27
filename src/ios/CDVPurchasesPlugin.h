//
//  Created by RevenueCat.
//  Copyright © 2019 RevenueCat. All rights reserved.
//

#import <Purchases/RCPurchases.h>
#import <PurchasesHybridCommon/PurchasesHybridCommon.h>
#import <Cordova/CDVPlugin.h>

@interface CDVPurchasesPlugin : CDVPlugin
{
}

- (void)setupPurchases:(CDVInvokedUrlCommand *)command;
- (void)setAllowSharingStoreAccount:(CDVInvokedUrlCommand *)command;
- (void)addAttributionData:(CDVInvokedUrlCommand *)command;
- (void)getOfferings:(CDVInvokedUrlCommand *)command;
- (void)getProductInfo:(CDVInvokedUrlCommand *)command;
- (void)purchaseProduct:(CDVInvokedUrlCommand *)command;
- (void)purchasePackage:(CDVInvokedUrlCommand *)command;
- (void)restoreTransactions:(CDVInvokedUrlCommand *)command;
- (void)getAppUserID:(CDVInvokedUrlCommand *)command;
- (void)createAlias:(CDVInvokedUrlCommand *)command;
- (void)identify:(CDVInvokedUrlCommand *)command;
- (void)reset:(CDVInvokedUrlCommand *)command;
- (void)setupShouldPurchasePromoProductCallback:(CDVInvokedUrlCommand *)command;
- (void)setDebugLogsEnabled:(CDVInvokedUrlCommand *)command;
- (void)getPurchaserInfo:(CDVInvokedUrlCommand *)command;
- (void)syncPurchases:(CDVInvokedUrlCommand *)command;
- (void)setAutomaticAppleSearchAdsAttributionCollection:(CDVInvokedUrlCommand *)command;
- (void)isAnonymous:(CDVInvokedUrlCommand *)command;
- (void)checkTrialOrIntroductoryPriceEligibility:(CDVInvokedUrlCommand *)command;
- (void)invalidatePurchaserInfoCache:(CDVInvokedUrlCommand *)command;
- (void)setAttributes:(NSDictionary<NSString *, NSString *> *)attributes;
- (void)setEmail:(nullable NSString *)email;
- (void)setPhoneNumber:(nullable NSString *)phoneNumber;
- (void)setDisplayName:(nullable NSString *)displayName;
- (void)setPushToken:(nullable NSData *)pushToken;

@end
