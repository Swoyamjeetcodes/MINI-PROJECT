
#include <stdio.h>


int func14(int var125) {
    if (var125 <= 0) return 1;
    return func14(var125 - 1);
}


int main() {
    for (int var744 = 0; var744 < 5; var744++) {
        var744 += 4;
    }

    int var341 = 1;
    if (var341 % 2 == 0) {
        printf("var341 is even\n");
    } else {
        printf("var341 is odd\n");
    }

    return 0;
}
