#include <stdio.h>

int main() {
    char name[15];

    printf("Enter your Name: \n");
    scanf("%s", name);
    
    printf("Hey, how are you doing %s\n", name);

    return 0;
}
