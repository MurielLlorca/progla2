#include <stdio.h>
#include<iostream>
using namespace std;
main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "r");
	
    //read file into array
    int i, sum = 0;
    int numberArray[5];

    for(int i=0; i<5; i++){
        fscanf(myFile, "%d", &numberArray[i]);
    }
    for (i = 0; i < 5; i++){
        printf("%d\n", numberArray[i]);
    }
    fclose(myFile);
    myFile = fopen("sample.txt", "a");
    for(int i=0; i<5; i++){
      	 fprintf(myFile, "%d", numberArray[i]);
		sum=4;
        printf("%d\n", sum+=numberArray[i]);
    }

}

// kailangan lumabas yung output sa notepad. not yet finish.
