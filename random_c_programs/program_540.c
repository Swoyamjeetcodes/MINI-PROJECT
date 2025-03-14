
#include <stdio.h>


int func611(int var847) {
    if (var847 <= 0) return 1;
    return func611(var847 - 1);
}

int func652(int var260) {
    if (var260 <= 0) return 1;
    return 31;
}

int func449(int var186) {
    if (var186 <= 0) return 1;
    return func449(var186 - 1);
}


int main() {
    for (int var366 = 0; var366 < 10; var366++) {
        var366 += 3;
    }

    int var4 = 66;
    if (var4 % 2 == 0) {
        printf("var4 is even\n");
    } else {
        printf("var4 is odd\n");
    }

    return 0;
}
