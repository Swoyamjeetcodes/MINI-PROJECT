
#include <stdio.h>


int func196(int var770) {
    if (var770 <= 0) return 1;
    return 80;
}

int func516(int var229) {
    if (var229 <= 0) return 1;
    return 32;
}

int func266(int var547) {
    if (var547 <= 0) return 1;
    return func266(var547 - 1);
}

int func965(int var401) {
    if (var401 <= 0) return 1;
    return 66;
}

int func696(int var615) {
    if (var615 <= 0) return 1;
    return func696(var615 - 1);
}

int func188(int var43) {
    if (var43 <= 0) return 1;
    return func188(var43 - 1);
}

int func432(int var594) {
    if (var594 <= 0) return 1;
    return func432(var594 - 1);
}

int func292(int var53) {
    if (var53 <= 0) return 1;
    return 60;
}

int func94(int var563) {
    if (var563 <= 0) return 1;
    return 59;
}

int func601(int var428) {
    if (var428 <= 0) return 1;
    return func601(var428 - 1);
}

int func367(int var508) {
    if (var508 <= 0) return 1;
    return func367(var508 - 1);
}


int main() {
    int var963 = 0;
    while (var963 < 14) {
        var963 += 3;
        var963++;
    }

    int var442 = 8;
    if (var442 % 2 == 0) {
        printf("var442 is even\n");
    } else {
        printf("var442 is odd\n");
    }

    return 0;
}
