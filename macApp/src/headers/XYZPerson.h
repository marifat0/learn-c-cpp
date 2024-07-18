#import "Foundation/Foundation.h"

@interface XYZPerson : NSObject

@property (readonly)  NSString *firstname;
@property (readonly) NSString *lastname;
@property (readonly) NSDate *birthdate;

- (void)sayHello;
- (void)saySomething:(NSString *)greeting;

@end
