#import <UIKit/UIKit.h>
#import "GPBMessage.h"
#import "YTIcon.h"

@interface YTIIcon : GPBMessage
@property (nonatomic, strong, readwrite) UIImage *image;  // Thay vì iconType, giờ dùng UIImage
- (instancetype)initWithImageFromPath:(NSString *)path;  // Phương thức khởi tạo từ file hình ảnh
@end

@implementation YTIIcon

// Phương thức khởi tạo từ file hình ảnh
- (instancetype)initWithImageFromPath:(NSString *)path {
    self = [super init];
    if (self) {
        _image = [UIImage imageWithContentsOfFile:path];
        if (!_image) {
            NSLog(@"Không thể tải hình ảnh từ đường dẫn: %@", path);
        }
    }
    return self;
}

@end
