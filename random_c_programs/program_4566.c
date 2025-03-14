
#include <stdio.h>


int func103(int var240) {
    if (var240 <= 0) return 1;
    return func103(var240 - 1);
}

int func866(int var785) {
    if (var785 <= 0) return 1;
    return 1;
}

int func273(int var746) {
    if (var746 <= 0) return 1;
    return func273(var746 - 1);
}

int func980(int var723) {
    if (var723 <= 0) return 1;
    return func980(var723 - 1);
}


int main() {
    for (int var208 = 0; var208 < 5; var208++) {
        var208 += 5;
    }

    int var801 = 43;
    if (var801 % 2 == 0) {
        printf("var801 is even\n");
    } else {
        printf("var801 is odd\n");
    }

    int var243 = 91;
    if (var243 % 2 == 0) {
        printf("var243 is even\n");
    } else {
        printf("var243 is odd\n");
    }

    int var880 = 95;
    if (var880 % 2 == 0) {
        printf("var880 is even\n");
    } else {
        printf("var880 is odd\n");
    }

    return 0;
}
