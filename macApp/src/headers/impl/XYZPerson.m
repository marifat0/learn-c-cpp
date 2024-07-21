#import "Foundation/Foundation.h"
#import "XYZPerson.h"

@implementation XYZPerson

- (void)sayHello {
    [self saySomething:@"Hello, World!"];
}

- (void)saySomething:(NSString *)greeting {
    NSLog(@"%@", greeting);
}

@end

