

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface wyURLProtocol : NSURLProtocol<NSURLSessionDataDelegate>

@property (nonatomic, strong) NSMutableData *data;
@property (nonatomic, strong) NSURLSessionDataTask *task;
@end

NS_ASSUME_NONNULL_END
