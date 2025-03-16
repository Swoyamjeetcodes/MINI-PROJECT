
#include <stdio.h>


int func397(int var229) {
    if (var229 <= 0) return 1;
    return func397(var229 - 1);
}

int func452(int var961) {
    if (var961 <= 0) return 1;
    return 16;
}

int func472(int var129) {
    if (var129 <= 0) return 1;
    return 50;
}

int func475(int var183) {
    if (var183 <= 0) return 1;
    return func475(var183 - 1);
}

int func905(int var985) {
    if (var985 <= 0) return 1;
    return func905(var985 - 1);
}


int main() {
    int var882 = 0;
    while (var882 < 20) {
        var882 += 3;
        var882++;
    }

    int var493 = 46;
    if (var493 % 2 == 0) {
        printf("var493 is even\n");
    } else {
        printf("var493 is odd\n");
    }

    return 0;
}
