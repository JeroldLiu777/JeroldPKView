

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface PKView : UIView
- (instancetype)initWithLeftRate:(float)leftRate frame:(CGRect)frame;
- (void)updateAnimation;//动画更新
@end

NS_ASSUME_NONNULL_END
