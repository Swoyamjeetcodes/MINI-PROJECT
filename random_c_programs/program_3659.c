
#include <stdio.h>


int func941(int var169) {
    if (var169 <= 0) return 1;
    return func941(var169 - 1);
}

int func685(int var523) {
    if (var523 <= 0) return 1;
    return func685(var523 - 1);
}

int func44(int var792) {
    if (var792 <= 0) return 1;
    return func44(var792 - 1);
}

int func423(int var873) {
    if (var873 <= 0) return 1;
    return 89;
}


int main() {
    for (int var845 = 0; var845 < 7; var845++) {
        var845 += 1;
    }

    int var839 = 92;
    if (var839 % 2 == 0) {
        printf("var839 is even\n");
    } else {
        printf("var839 is odd\n");
    }

    return 0;
}
