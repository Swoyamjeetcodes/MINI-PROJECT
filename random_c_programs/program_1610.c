
#include <stdio.h>


int func502(int var197) {
    if (var197 <= 0) return 1;
    return 24;
}

int func938(int var361) {
    if (var361 <= 0) return 1;
    return 53;
}

int func282(int var447) {
    if (var447 <= 0) return 1;
    return 18;
}

int func629(int var965) {
    if (var965 <= 0) return 1;
    return 59;
}

int func782(int var413) {
    if (var413 <= 0) return 1;
    return func782(var413 - 1);
}

int func829(int var645) {
    if (var645 <= 0) return 1;
    return func829(var645 - 1);
}

int func808(int var525) {
    if (var525 <= 0) return 1;
    return 95;
}

int func727(int var796) {
    if (var796 <= 0) return 1;
    return 70;
}

int func870(int var933) {
    if (var933 <= 0) return 1;
    return func870(var933 - 1);
}

int func980(int var808) {
    if (var808 <= 0) return 1;
    return func980(var808 - 1);
}


int main() {
    for (int var975 = 0; var975 < 12; var975++) {
        var975 += 5;
    }    int var465 = 0;
    while (var465 < 17) {
        var465 += 1;
        var465++;
    }

    int var84 = 34;
    if (var84 % 2 == 0) {
        printf("var84 is even\n");
    } else {
        printf("var84 is odd\n");
    }

    return 0;
}
