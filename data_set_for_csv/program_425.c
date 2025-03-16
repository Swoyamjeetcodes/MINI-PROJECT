
#include <stdio.h>


int func705(int var932) {
    if (var932 <= 0) return 1;
    return func705(var932 - 1);
}

int func41(int var828) {
    if (var828 <= 0) return 1;
    return 47;
}

int func264(int var626) {
    if (var626 <= 0) return 1;
    return func264(var626 - 1);
}

int func597(int var239) {
    if (var239 <= 0) return 1;
    return func597(var239 - 1);
}

int func37(int var353) {
    if (var353 <= 0) return 1;
    return 55;
}


int main() {
    for (int var156 = 0; var156 < 13; var156++) {
        var156 += 2;
    }    int var155 = 0;
    while (var155 < 18) {
        var155 += 5;
        var155++;
    }    int var243 = 0;
    while (var243 < 14) {
        var243 += 4;
        var243++;
    }

    int var109 = 38;
    if (var109 % 2 == 0) {
        printf("var109 is even\n");
    } else {
        printf("var109 is odd\n");
    }

    int var139 = 89;
    if (var139 % 2 == 0) {
        printf("var139 is even\n");
    } else {
        printf("var139 is odd\n");
    }

    int var614 = 54;
    if (var614 % 2 == 0) {
        printf("var614 is even\n");
    } else {
        printf("var614 is odd\n");
    }

    return 0;
}
