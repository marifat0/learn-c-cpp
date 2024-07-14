#import "Foundation/Foundation.h"
#import "headers/XYZPerson.h"

int main(int argc, const char * argv[]) {

    @autoreleasepool { // ARC

        NSLog(@"Calling sayHello method on XYZPerson instance...");
        XYZPerson *person = [[XYZPerson alloc] init];

        [person sayHello];
        [person release];

        NSLog(@"Press any key to exit...");
        getchar();
    }
    return 0;
}
