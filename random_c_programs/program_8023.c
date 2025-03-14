
#include <stdio.h>


int func893(int var599) {
    if (var599 <= 0) return 1;
    return func893(var599 - 1);
}

int func532(int var130) {
    if (var130 <= 0) return 1;
    return 95;
}

int func759(int var915) {
    if (var915 <= 0) return 1;
    return 7;
}

int func627(int var345) {
    if (var345 <= 0) return 1;
    return func627(var345 - 1);
}

int func597(int var306) {
    if (var306 <= 0) return 1;
    return func597(var306 - 1);
}


int main() {
    for (int var688 = 0; var688 < 9; var688++) {
        var688 += 4;
    }

    int var580 = 12;
    if (var580 % 2 == 0) {
        printf("var580 is even\n");
    } else {
        printf("var580 is odd\n");
    }

    int var938 = 65;
    if (var938 % 2 == 0) {
        printf("var938 is even\n");
    } else {
        printf("var938 is odd\n");
    }

    return 0;
}
