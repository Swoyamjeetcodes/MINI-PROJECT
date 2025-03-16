
#include <stdio.h>


int func536(int var245) {
    if (var245 <= 0) return 1;
    return 93;
}

int func500(int var984) {
    if (var984 <= 0) return 1;
    return 65;
}

int func371(int var555) {
    if (var555 <= 0) return 1;
    return func371(var555 - 1);
}

int func839(int var780) {
    if (var780 <= 0) return 1;
    return func839(var780 - 1);
}


int main() {
    int var679 = 0;
    while (var679 < 7) {
        var679 += 2;
        var679++;
    }    for (int var667 = 0; var667 < 14; var667++) {
        var667 += 5;
    }    for (int var774 = 0; var774 < 19; var774++) {
        var774 += 3;
    }

    int var89 = 68;
    if (var89 % 2 == 0) {
        printf("var89 is even\n");
    } else {
        printf("var89 is odd\n");
    }

    int var858 = 36;
    if (var858 % 2 == 0) {
        printf("var858 is even\n");
    } else {
        printf("var858 is odd\n");
    }

    return 0;
}
