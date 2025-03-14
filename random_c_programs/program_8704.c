
#include <stdio.h>


int func576(int var336) {
    if (var336 <= 0) return 1;
    return func576(var336 - 1);
}


int main() {
    int var227 = 0;
    while (var227 < 17) {
        var227 += 2;
        var227++;
    }

    int var635 = 75;
    if (var635 % 2 == 0) {
        printf("var635 is even\n");
    } else {
        printf("var635 is odd\n");
    }

    return 0;
}
