#import "Foundation/Foundation.h"
#import "../XYZPerson.h"

@implementation XYZPerson
- (void)sayHello {
    NSLog(@"This is a test message from XYZPerson class");
}

- (void)saySomething:(NSString *)greeting {
    NSLog(@"%@", greeting);
}

@end

