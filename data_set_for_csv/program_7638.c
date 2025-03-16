
#include <stdio.h>


int func200(int var300) {
    if (var300 <= 0) return 1;
    return 70;
}

int func367(int var726) {
    if (var726 <= 0) return 1;
    return 9;
}

int func704(int var658) {
    if (var658 <= 0) return 1;
    return 100;
}

int func408(int var333) {
    if (var333 <= 0) return 1;
    return func408(var333 - 1);
}


int main() {
    for (int var352 = 0; var352 < 10; var352++) {
        var352 += 3;
    }    int var677 = 0;
    while (var677 < 6) {
        var677 += 2;
        var677++;
    }    int var727 = 0;
    while (var727 < 20) {
        var727 += 2;
        var727++;
    }

    int var198 = 62;
    if (var198 % 2 == 0) {
        printf("var198 is even\n");
    } else {
        printf("var198 is odd\n");
    }

    int var414 = 58;
    if (var414 % 2 == 0) {
        printf("var414 is even\n");
    } else {
        printf("var414 is odd\n");
    }

    return 0;
}
