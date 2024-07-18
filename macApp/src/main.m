#import "Foundation/Foundation.h"
#include <string.h>
#include <stdio.h>
#import "headers/XYZPerson.h"

int myGetchar() {
    char c;
    while ((c = getchar()) != '\n' && c != EOF);
    return 0;
}
int main(int argc, const char * argv[]) {

    @autoreleasepool { // ARC

        NSLog(@"Calling sayHello method on XYZPerson instance...");
        XYZPerson *person = [[XYZPerson alloc] init];

        [person sayHello];

        char greeting[100];
        printf("Enter a greeting: ");
        fgets(greeting, 100, stdin);
        size_t length = strlen(greeting);
        if (length > 0 && greeting[length - 1] == '\n') {
            greeting[length - 1] = '\0';
        }

        printf("You entered: %s\n", greeting);

        [person saySomething:[NSString stringWithUTF8String:greeting]];

        printf("person %p\n", person);
        NSLog(@"Press any key to exit...");
        myGetchar();
        getchar();
    }
    return 0;
}
