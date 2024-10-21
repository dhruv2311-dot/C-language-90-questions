#include <stdio.h>
#include<string.h>

int main() {
    char filename[100]="filename.pdf";
    char *extension = NULL;

    
 
   
    for (int i = 0; filename[i] != '\0'; i++) {
        if (filename[i] == '.') {
            extension = &filename[i + 1]; 
        }
    }

   
    if (extension != NULL) {
        printf("File extension: %s\n", extension);
    } else {
        printf("No file extension found.\n");
    }

    return 0;
}
