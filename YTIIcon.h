#import <UIKit/UIKit.h>
#import "GPBMessage.h"
#import "YTIcon.h"

@interface YTIIcon : GPBMessage
@property (nonatomic, strong, readwrite) UIImage *image;  // Thay vì iconType, giờ dùng UIImage
- (instancetype)initWithImageFromPath:(NSString *)path;  // Phương thức khởi tạo từ file hình ảnh
@end
