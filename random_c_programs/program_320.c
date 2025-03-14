
#include <stdio.h>


int func395(int var995) {
    if (var995 <= 0) return 1;
    return 1;
}

int func366(int var186) {
    if (var186 <= 0) return 1;
    return 35;
}

int func564(int var289) {
    if (var289 <= 0) return 1;
    return 82;
}

int func840(int var925) {
    if (var925 <= 0) return 1;
    return func840(var925 - 1);
}

int func733(int var665) {
    if (var665 <= 0) return 1;
    return func733(var665 - 1);
}


int main() {
    int var818 = 0;
    while (var818 < 15) {
        var818 += 3;
        var818++;
    }

    int var230 = 28;
    if (var230 % 2 == 0) {
        printf("var230 is even\n");
    } else {
        printf("var230 is odd\n");
    }

    return 0;
}
