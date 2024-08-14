//
//  main.c
//  base64EncryptDecrypt
//
//  Created by Manuel Martin on 14.08.2024.
//

#include <stdio.h>
#include <string.h>

int main(void) {
    
    
    /*
     ------------------------------------------------------------------------------------------------------------------------
     ------------------------------------- Variables Constants and Pointers -------------------------------------------------
     ------------------------------------------------------------------------------------------------------------------------
     */
    
    //pointers
    FILE *pToFile; //pointer to the structure "FILE" located in stdio.h librairy, it's multiple functions to manage files
    
    //variables
    char filePath [200]; //chemin du fichier a ouvrir
    char fileName [60]; //nom du fichier a ouvrir
    unsigned int textLineSize = 512; // taille de chaque ligne du texte a lire
    
    
    
    /*
     ------------------------------------------------------------------------------------------------------------------------
     ----------------------------------------------- Program Logic ----------------------------------------------------------
     ------------------------------------------------------------------------------------------------------------------------
     */
    
    //asking the user for file location and name
    printf("Enter your file location (it must not exceed 200 characters) (example: file/location/) \n");
    scanf("%s", filePath);
    printf("Enter your file name (it must not exceed 60 characters) (example: fileName.txt) \n");
    scanf("%s", fileName);
    
    //opening the file and printing it's content
    pToFile = fopen(strcat(filePath, fileName), "r"); //open file and read content
    char input [textLineSize]; // define a variable to read each line in text file one by one
    int line = 0;
    
    while (fgets(input, textLineSize, pToFile)) {
        line ++;
        printf("Line N°%d, text: %s", line, input);
    }
    
    return 0;
}
