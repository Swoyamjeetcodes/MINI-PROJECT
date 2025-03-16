
#include <stdio.h>


int func369(int var242) {
    if (var242 <= 0) return 1;
    return func369(var242 - 1);
}

int func643(int var952) {
    if (var952 <= 0) return 1;
    return func643(var952 - 1);
}


int main() {
    for (int var829 = 0; var829 < 8; var829++) {
        var829 += 2;
    }    for (int var652 = 0; var652 < 13; var652++) {
        var652 += 5;
    }

    int var845 = 95;
    if (var845 % 2 == 0) {
        printf("var845 is even\n");
    } else {
        printf("var845 is odd\n");
    }

    return 0;
}
