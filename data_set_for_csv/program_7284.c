
#include <stdio.h>


int func610(int var633) {
    if (var633 <= 0) return 1;
    return func610(var633 - 1);
}

int func319(int var273) {
    if (var273 <= 0) return 1;
    return 2;
}

int func290(int var948) {
    if (var948 <= 0) return 1;
    return func290(var948 - 1);
}

int func754(int var886) {
    if (var886 <= 0) return 1;
    return func754(var886 - 1);
}


int main() {
    int var156 = 0;
    while (var156 < 8) {
        var156 += 5;
        var156++;
    }    for (int var406 = 0; var406 < 15; var406++) {
        var406 += 2;
    }    int var809 = 0;
    while (var809 < 15) {
        var809 += 3;
        var809++;
    }

    int var240 = 60;
    if (var240 % 2 == 0) {
        printf("var240 is even\n");
    } else {
        printf("var240 is odd\n");
    }

    return 0;
}
