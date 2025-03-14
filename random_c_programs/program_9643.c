
#include <stdio.h>


int func642(int var487) {
    if (var487 <= 0) return 1;
    return func642(var487 - 1);
}

int func134(int var663) {
    if (var663 <= 0) return 1;
    return func134(var663 - 1);
}

int func548(int var752) {
    if (var752 <= 0) return 1;
    return func548(var752 - 1);
}

int func277(int var740) {
    if (var740 <= 0) return 1;
    return 81;
}

int func659(int var707) {
    if (var707 <= 0) return 1;
    return 67;
}


int main() {
    int var698 = 0;
    while (var698 < 13) {
        var698 += 4;
        var698++;
    }

    int var801 = 42;
    if (var801 % 2 == 0) {
        printf("var801 is even\n");
    } else {
        printf("var801 is odd\n");
    }

    int var382 = 79;
    if (var382 % 2 == 0) {
        printf("var382 is even\n");
    } else {
        printf("var382 is odd\n");
    }

    int var835 = 27;
    if (var835 % 2 == 0) {
        printf("var835 is even\n");
    } else {
        printf("var835 is odd\n");
    }

    return 0;
}
