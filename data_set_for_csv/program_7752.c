
#include <stdio.h>


int func342(int var417) {
    if (var417 <= 0) return 1;
    return func342(var417 - 1);
}

int func575(int var774) {
    if (var774 <= 0) return 1;
    return 17;
}

int func537(int var954) {
    if (var954 <= 0) return 1;
    return func537(var954 - 1);
}

int func232(int var178) {
    if (var178 <= 0) return 1;
    return 11;
}

int func923(int var789) {
    if (var789 <= 0) return 1;
    return func923(var789 - 1);
}


int main() {
    for (int var622 = 0; var622 < 20; var622++) {
        var622 += 2;
    }    int var236 = 0;
    while (var236 < 7) {
        var236 += 1;
        var236++;
    }

    int var293 = 75;
    if (var293 % 2 == 0) {
        printf("var293 is even\n");
    } else {
        printf("var293 is odd\n");
    }

    int var107 = 86;
    if (var107 % 2 == 0) {
        printf("var107 is even\n");
    } else {
        printf("var107 is odd\n");
    }

    int var901 = 77;
    if (var901 % 2 == 0) {
        printf("var901 is even\n");
    } else {
        printf("var901 is odd\n");
    }

    int var698 = 74;
    if (var698 % 2 == 0) {
        printf("var698 is even\n");
    } else {
        printf("var698 is odd\n");
    }

    return 0;
}
