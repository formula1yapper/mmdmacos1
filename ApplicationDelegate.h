

#import <AppKit/AppKit.h>

namespace nanoem {
namespace macos {
class MainWindow;
} /* namespace macos */
} /* namespace nanoem */

@interface ApplicationDelegate : NSObject <NSApplicationDelegate> {
    nanoem::macos::MainWindow *m_window;
}

- (instancetype)init UNAVAILABLE_ATTRIBUTE;
- (instancetype)initWithWindow:(nanoem::macos::MainWindow *)window;

@end
