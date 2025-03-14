
#include <stdio.h>


int func585(int var542) {
    if (var542 <= 0) return 1;
    return 24;
}

int func532(int var956) {
    if (var956 <= 0) return 1;
    return 29;
}

int func743(int var222) {
    if (var222 <= 0) return 1;
    return func743(var222 - 1);
}

int func939(int var573) {
    if (var573 <= 0) return 1;
    return func939(var573 - 1);
}

int func13(int var545) {
    if (var545 <= 0) return 1;
    return func13(var545 - 1);
}


int main() {
    int var791 = 0;
    while (var791 < 20) {
        var791 += 5;
        var791++;
    }

    int var838 = 24;
    if (var838 % 2 == 0) {
        printf("var838 is even\n");
    } else {
        printf("var838 is odd\n");
    }

    return 0;
}
