#import "XYZShoutingPerson.h"
#include <Foundation/NSObjCRuntime.h>
#include <Foundation/Foundation.h>

@implementation XYZShoutingPerson

- (void)saySomething:(NSString *)greeting {
    NSString *uppercaseGreeting = [greeting uppercaseString];
    [super saySomething:uppercaseGreeting];
}
@end
