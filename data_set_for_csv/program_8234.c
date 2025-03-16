
#include <stdio.h>


int func847(int var579) {
    if (var579 <= 0) return 1;
    return func847(var579 - 1);
}

int func702(int var283) {
    if (var283 <= 0) return 1;
    return func702(var283 - 1);
}

int func594(int var309) {
    if (var309 <= 0) return 1;
    return 3;
}

int func584(int var965) {
    if (var965 <= 0) return 1;
    return 55;
}

int func401(int var645) {
    if (var645 <= 0) return 1;
    return func401(var645 - 1);
}


int main() {
    for (int var819 = 0; var819 < 7; var819++) {
        var819 += 2;
    }

    int var225 = 10;
    if (var225 % 2 == 0) {
        printf("var225 is even\n");
    } else {
        printf("var225 is odd\n");
    }

    return 0;
}
