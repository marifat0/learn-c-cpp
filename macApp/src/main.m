#import <string.h>
#import <stdio.h>
#import "Foundation/Foundation.h"
#import "XYZPerson.h"
#import "XYZShoutingPerson.h"

int main(int argc, const char * argv[]) {

    @autoreleasepool { // ARC
        XYZShoutingPerson *someShoutingPerson = [[XYZShoutingPerson alloc] init];
        [someShoutingPerson sayHello];
        getchar();
    }
    return 0;
}
