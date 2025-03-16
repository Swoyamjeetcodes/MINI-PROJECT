
#include <stdio.h>


int func903(int var42) {
    if (var42 <= 0) return 1;
    return 41;
}

int func302(int var368) {
    if (var368 <= 0) return 1;
    return func302(var368 - 1);
}

int func62(int var846) {
    if (var846 <= 0) return 1;
    return func62(var846 - 1);
}


int main() {
    for (int var101 = 0; var101 < 12; var101++) {
        var101 += 4;
    }    for (int var911 = 0; var911 < 5; var911++) {
        var911 += 5;
    }    int var930 = 0;
    while (var930 < 10) {
        var930 += 1;
        var930++;
    }

    int var417 = 48;
    if (var417 % 2 == 0) {
        printf("var417 is even\n");
    } else {
        printf("var417 is odd\n");
    }

    int var219 = 95;
    if (var219 % 2 == 0) {
        printf("var219 is even\n");
    } else {
        printf("var219 is odd\n");
    }

    return 0;
}
