
#include <stdio.h>


int func922(int var567) {
    if (var567 <= 0) return 1;
    return func922(var567 - 1);
}

int func421(int var859) {
    if (var859 <= 0) return 1;
    return func421(var859 - 1);
}

int func892(int var939) {
    if (var939 <= 0) return 1;
    return func892(var939 - 1);
}


int main() {
    int var968 = 0;
    while (var968 < 11) {
        var968 += 4;
        var968++;
    }

    int var199 = 53;
    if (var199 % 2 == 0) {
        printf("var199 is even\n");
    } else {
        printf("var199 is odd\n");
    }

    int var140 = 54;
    if (var140 % 2 == 0) {
        printf("var140 is even\n");
    } else {
        printf("var140 is odd\n");
    }

    int var412 = 7;
    if (var412 % 2 == 0) {
        printf("var412 is even\n");
    } else {
        printf("var412 is odd\n");
    }

    int var752 = 56;
    if (var752 % 2 == 0) {
        printf("var752 is even\n");
    } else {
        printf("var752 is odd\n");
    }

    int var156 = 8;
    if (var156 % 2 == 0) {
        printf("var156 is even\n");
    } else {
        printf("var156 is odd\n");
    }

    return 0;
}
