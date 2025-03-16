
#include <stdio.h>


int func934(int var860) {
    if (var860 <= 0) return 1;
    return 80;
}

int func295(int var815) {
    if (var815 <= 0) return 1;
    return func295(var815 - 1);
}

int func676(int var799) {
    if (var799 <= 0) return 1;
    return func676(var799 - 1);
}

int func650(int var654) {
    if (var654 <= 0) return 1;
    return 6;
}

int func941(int var284) {
    if (var284 <= 0) return 1;
    return func941(var284 - 1);
}


int main() {
    for (int var844 = 0; var844 < 14; var844++) {
        var844 += 1;
    }    for (int var765 = 0; var765 < 9; var765++) {
        var765 += 2;
    }

    int var586 = 20;
    if (var586 % 2 == 0) {
        printf("var586 is even\n");
    } else {
        printf("var586 is odd\n");
    }

    int var845 = 36;
    if (var845 % 2 == 0) {
        printf("var845 is even\n");
    } else {
        printf("var845 is odd\n");
    }

    return 0;
}
