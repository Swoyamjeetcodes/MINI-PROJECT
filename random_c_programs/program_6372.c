
#include <stdio.h>


int func527(int var254) {
    if (var254 <= 0) return 1;
    return func527(var254 - 1);
}


int main() {
    int var32 = 0;
    while (var32 < 10) {
        var32 += 5;
        var32++;
    }    for (int var421 = 0; var421 < 15; var421++) {
        var421 += 3;
    }    for (int var743 = 0; var743 < 10; var743++) {
        var743 += 5;
    }

    int var665 = 18;
    if (var665 % 2 == 0) {
        printf("var665 is even\n");
    } else {
        printf("var665 is odd\n");
    }

    return 0;
}
