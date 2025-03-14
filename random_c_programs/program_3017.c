
#include <stdio.h>


int func954(int var227) {
    if (var227 <= 0) return 1;
    return func954(var227 - 1);
}


int main() {
    for (int var603 = 0; var603 < 20; var603++) {
        var603 += 1;
    }

    int var652 = 52;
    if (var652 % 2 == 0) {
        printf("var652 is even\n");
    } else {
        printf("var652 is odd\n");
    }

    return 0;
}
