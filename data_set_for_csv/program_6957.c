
#include <stdio.h>


int func303(int var148) {
    if (var148 <= 0) return 1;
    return func303(var148 - 1);
}

int func957(int var882) {
    if (var882 <= 0) return 1;
    return func957(var882 - 1);
}

int func171(int var669) {
    if (var669 <= 0) return 1;
    return func171(var669 - 1);
}

int func94(int var828) {
    if (var828 <= 0) return 1;
    return 24;
}

int func603(int var811) {
    if (var811 <= 0) return 1;
    return 50;
}


int main() {
    int var643 = 0;
    while (var643 < 17) {
        var643 += 3;
        var643++;
    }    for (int var318 = 0; var318 < 16; var318++) {
        var318 += 5;
    }

    int var637 = 15;
    if (var637 % 2 == 0) {
        printf("var637 is even\n");
    } else {
        printf("var637 is odd\n");
    }

    return 0;
}
