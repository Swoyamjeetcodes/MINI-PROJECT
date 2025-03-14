
#include <stdio.h>


int func923(int var447) {
    if (var447 <= 0) return 1;
    return func923(var447 - 1);
}


int main() {
    int var336 = 0;
    while (var336 < 11) {
        var336 += 3;
        var336++;
    }

    int var833 = 5;
    if (var833 % 2 == 0) {
        printf("var833 is even\n");
    } else {
        printf("var833 is odd\n");
    }

    return 0;
}
