
#include <stdio.h>


int func897(int var775) {
    if (var775 <= 0) return 1;
    return func897(var775 - 1);
}

int func623(int var724) {
    if (var724 <= 0) return 1;
    return func623(var724 - 1);
}

int func800(int var240) {
    if (var240 <= 0) return 1;
    return func800(var240 - 1);
}

int func374(int var315) {
    if (var315 <= 0) return 1;
    return 16;
}


int main() {
    for (int var782 = 0; var782 < 5; var782++) {
        var782 += 5;
    }

    int var845 = 2;
    if (var845 % 2 == 0) {
        printf("var845 is even\n");
    } else {
        printf("var845 is odd\n");
    }

    int var356 = 83;
    if (var356 % 2 == 0) {
        printf("var356 is even\n");
    } else {
        printf("var356 is odd\n");
    }

    return 0;
}
