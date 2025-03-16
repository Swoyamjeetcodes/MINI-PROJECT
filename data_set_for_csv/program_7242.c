
#include <stdio.h>


int func476(int var648) {
    if (var648 <= 0) return 1;
    return func476(var648 - 1);
}


int main() {
    int var994 = 0;
    while (var994 < 7) {
        var994 += 4;
        var994++;
    }    int var343 = 0;
    while (var343 < 10) {
        var343 += 5;
        var343++;
    }

    int var608 = 24;
    if (var608 % 2 == 0) {
        printf("var608 is even\n");
    } else {
        printf("var608 is odd\n");
    }

    int var82 = 33;
    if (var82 % 2 == 0) {
        printf("var82 is even\n");
    } else {
        printf("var82 is odd\n");
    }

    int var359 = 60;
    if (var359 % 2 == 0) {
        printf("var359 is even\n");
    } else {
        printf("var359 is odd\n");
    }

    return 0;
}
