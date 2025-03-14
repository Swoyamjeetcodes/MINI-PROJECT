
#include <stdio.h>


int func463(int var767) {
    if (var767 <= 0) return 1;
    return func463(var767 - 1);
}


int main() {
    for (int var152 = 0; var152 < 10; var152++) {
        var152 += 1;
    }    int var567 = 0;
    while (var567 < 5) {
        var567 += 1;
        var567++;
    }    for (int var60 = 0; var60 < 7; var60++) {
        var60 += 2;
    }    int var697 = 0;
    while (var697 < 20) {
        var697 += 4;
        var697++;
    }    for (int var319 = 0; var319 < 20; var319++) {
        var319 += 5;
    }

    int var241 = 27;
    if (var241 % 2 == 0) {
        printf("var241 is even\n");
    } else {
        printf("var241 is odd\n");
    }

    int var809 = 98;
    if (var809 % 2 == 0) {
        printf("var809 is even\n");
    } else {
        printf("var809 is odd\n");
    }

    return 0;
}
