
#include <stdio.h>


int func965(int var218) {
    if (var218 <= 0) return 1;
    return func965(var218 - 1);
}

int func729(int var911) {
    if (var911 <= 0) return 1;
    return 1;
}

int func579(int var64) {
    if (var64 <= 0) return 1;
    return func579(var64 - 1);
}

int func312(int var130) {
    if (var130 <= 0) return 1;
    return func312(var130 - 1);
}

int func887(int var121) {
    if (var121 <= 0) return 1;
    return func887(var121 - 1);
}


int main() {
    for (int var571 = 0; var571 < 9; var571++) {
        var571 += 4;
    }    int var977 = 0;
    while (var977 < 11) {
        var977 += 5;
        var977++;
    }    int var924 = 0;
    while (var924 < 10) {
        var924 += 3;
        var924++;
    }

    int var535 = 79;
    if (var535 % 2 == 0) {
        printf("var535 is even\n");
    } else {
        printf("var535 is odd\n");
    }

    int var353 = 34;
    if (var353 % 2 == 0) {
        printf("var353 is even\n");
    } else {
        printf("var353 is odd\n");
    }

    int var248 = 2;
    if (var248 % 2 == 0) {
        printf("var248 is even\n");
    } else {
        printf("var248 is odd\n");
    }

    return 0;
}
