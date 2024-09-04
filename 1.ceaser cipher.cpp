#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int k, i;
    char ch;
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = '\0'; 
    printf("Enter the shift value (k): ");
    scanf("%d", &k);
    k = k % 26;
    for(i = 0; text[i] != '\0'; i++) {
        ch = text[i];
        if(ch >= 'a' && ch <= 'z') {
            ch = (ch - 'a' + k) % 26 + 'a';
        }

        text[i] = ch;
    }
    printf("Encrypted text: %s\n", text);
    return 0;
}
