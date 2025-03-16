
#include <stdio.h>


int func594(int var459) {
    if (var459 <= 0) return 1;
    return func594(var459 - 1);
}


int main() {
    int var935 = 0;
    while (var935 < 12) {
        var935 += 4;
        var935++;
    }    for (int var552 = 0; var552 < 16; var552++) {
        var552 += 5;
    }    for (int var819 = 0; var819 < 5; var819++) {
        var819 += 4;
    }

    int var382 = 51;
    if (var382 % 2 == 0) {
        printf("var382 is even\n");
    } else {
        printf("var382 is odd\n");
    }

    return 0;
}
