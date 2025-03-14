
#include <stdio.h>


int func607(int var322) {
    if (var322 <= 0) return 1;
    return 68;
}

int func637(int var254) {
    if (var254 <= 0) return 1;
    return func637(var254 - 1);
}

int func893(int var776) {
    if (var776 <= 0) return 1;
    return 81;
}

int func788(int var573) {
    if (var573 <= 0) return 1;
    return func788(var573 - 1);
}

int func540(int var447) {
    if (var447 <= 0) return 1;
    return func540(var447 - 1);
}


int main() {
    int var686 = 0;
    while (var686 < 15) {
        var686 += 3;
        var686++;
    }

    int var451 = 98;
    if (var451 % 2 == 0) {
        printf("var451 is even\n");
    } else {
        printf("var451 is odd\n");
    }

    int var478 = 63;
    if (var478 % 2 == 0) {
        printf("var478 is even\n");
    } else {
        printf("var478 is odd\n");
    }

    int var125 = 71;
    if (var125 % 2 == 0) {
        printf("var125 is even\n");
    } else {
        printf("var125 is odd\n");
    }

    return 0;
}
