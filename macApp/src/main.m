#import "Foundation/Foundation.h"
#include <stdio.h>
#import "headers/XYZPerson.h"

int main(int argc, const char * argv[]) {

    @autoreleasepool { // ARC

        NSLog(@"Calling sayHello method on XYZPerson instance...");
        XYZPerson *person = [[XYZPerson alloc] init];

        [person sayHello];

        printf("person %p\n", person);
        NSLog(@"Press any key to exit...");
        getchar();
    }
    return 0;
}
