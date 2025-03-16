
#include <stdio.h>


int func169(int var752) {
    if (var752 <= 0) return 1;
    return func169(var752 - 1);
}

int func66(int var944) {
    if (var944 <= 0) return 1;
    return 20;
}


int main() {
    for (int var882 = 0; var882 < 15; var882++) {
        var882 += 5;
    }    for (int var23 = 0; var23 < 16; var23++) {
        var23 += 3;
    }    int var450 = 0;
    while (var450 < 5) {
        var450 += 3;
        var450++;
    }

    int var689 = 59;
    if (var689 % 2 == 0) {
        printf("var689 is even\n");
    } else {
        printf("var689 is odd\n");
    }

    int var517 = 61;
    if (var517 % 2 == 0) {
        printf("var517 is even\n");
    } else {
        printf("var517 is odd\n");
    }

    return 0;
}
