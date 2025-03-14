
#include <stdio.h>


int func279(int var928) {
    if (var928 <= 0) return 1;
    return func279(var928 - 1);
}

int func481(int var406) {
    if (var406 <= 0) return 1;
    return 83;
}

int func403(int var889) {
    if (var889 <= 0) return 1;
    return func403(var889 - 1);
}


int main() {
    for (int var67 = 0; var67 < 12; var67++) {
        var67 += 5;
    }    int var272 = 0;
    while (var272 < 13) {
        var272 += 5;
        var272++;
    }

    int var881 = 0;
    if (var881 % 2 == 0) {
        printf("var881 is even\n");
    } else {
        printf("var881 is odd\n");
    }

    int var859 = 73;
    if (var859 % 2 == 0) {
        printf("var859 is even\n");
    } else {
        printf("var859 is odd\n");
    }

    int var44 = 6;
    if (var44 % 2 == 0) {
        printf("var44 is even\n");
    } else {
        printf("var44 is odd\n");
    }

    return 0;
}
