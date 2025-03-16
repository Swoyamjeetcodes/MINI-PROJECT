
#include <stdio.h>


int func642(int var876) {
    if (var876 <= 0) return 1;
    return func642(var876 - 1);
}

int func257(int var353) {
    if (var353 <= 0) return 1;
    return func257(var353 - 1);
}

int func588(int var998) {
    if (var998 <= 0) return 1;
    return 94;
}

int func650(int var723) {
    if (var723 <= 0) return 1;
    return func650(var723 - 1);
}


int main() {
    for (int var422 = 0; var422 < 11; var422++) {
        var422 += 5;
    }    for (int var350 = 0; var350 < 15; var350++) {
        var350 += 1;
    }    for (int var942 = 0; var942 < 6; var942++) {
        var942 += 3;
    }

    int var656 = 74;
    if (var656 % 2 == 0) {
        printf("var656 is even\n");
    } else {
        printf("var656 is odd\n");
    }

    int var845 = 4;
    if (var845 % 2 == 0) {
        printf("var845 is even\n");
    } else {
        printf("var845 is odd\n");
    }

    return 0;
}
