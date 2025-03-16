
#include <stdio.h>


int func481(int var333) {
    if (var333 <= 0) return 1;
    return 55;
}

int func628(int var39) {
    if (var39 <= 0) return 1;
    return func628(var39 - 1);
}

int func795(int var287) {
    if (var287 <= 0) return 1;
    return func795(var287 - 1);
}

int func374(int var607) {
    if (var607 <= 0) return 1;
    return func374(var607 - 1);
}

int func826(int var797) {
    if (var797 <= 0) return 1;
    return 62;
}

int func828(int var43) {
    if (var43 <= 0) return 1;
    return func828(var43 - 1);
}

int func54(int var547) {
    if (var547 <= 0) return 1;
    return 21;
}

int func706(int var439) {
    if (var439 <= 0) return 1;
    return 81;
}


int main() {
    int var37 = 0;
    while (var37 < 11) {
        var37 += 4;
        var37++;
    }

    int var467 = 32;
    if (var467 % 2 == 0) {
        printf("var467 is even\n");
    } else {
        printf("var467 is odd\n");
    }

    return 0;
}
