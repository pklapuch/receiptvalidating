//
//  NSData+Hex.h
//  ReceiptValidating
//
//  Created by Pawel Klapuch on 11/24/20.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSData (Hex)

+ (NSData *)fromHexString:(NSString *)string;

- (NSString *)toHexString;

- (NSData *)reversed;

@end

NS_ASSUME_NONNULL_END
