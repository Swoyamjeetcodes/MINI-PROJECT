
#include <stdio.h>


int func275(int var47) {
    if (var47 <= 0) return 1;
    return 66;
}

int func970(int var788) {
    if (var788 <= 0) return 1;
    return func970(var788 - 1);
}

int func522(int var845) {
    if (var845 <= 0) return 1;
    return func522(var845 - 1);
}


int main() {
    for (int var557 = 0; var557 < 14; var557++) {
        var557 += 5;
    }

    int var139 = 89;
    if (var139 % 2 == 0) {
        printf("var139 is even\n");
    } else {
        printf("var139 is odd\n");
    }

    int var374 = 54;
    if (var374 % 2 == 0) {
        printf("var374 is even\n");
    } else {
        printf("var374 is odd\n");
    }

    return 0;
}
