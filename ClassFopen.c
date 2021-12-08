/********************* Writing in a text file ********************/

// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//   int num;
//   FILE *fp;

//   // use appropriate location if you are using MacOS or Linux
//   fp = fopen("D:\\SWE-20\\Programming\\files.txt","w");

//   if(fp == NULL)
//   {
//      //printf("Error!");
//      fprintf(stderr, "Error: data file can not be opened.\n");
//      exit(1);
//   }

//   printf("Enter num: ");
//   scanf("%d",&num);

//   fprintf(fp,"%d",num);
//   fprintf(stdout, "Total: %d\n", num); 	// writes to stdout

//   fclose(fp);

//   return 0;
// }



/********************* Reading from a text file ********************/


// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
//    int num;
//    FILE *fp;

//    if ((fp = fopen("D:\\SWE-20\\Programming\\files.txt","r")) == NULL){
//        //printf("Error! opening file");
//        fprintf(stderr, "Error: data file can not be opened.\n");
//        // Program exits if the file pointer returns NULL.
//        exit(1);
//    }

//    fscanf(fp,"%d", &num);

//    printf("Value of n = %d", num);
//    fclose(fp);

//   return 0;
// }



/*************************** ungetc()*********************/


//#include <stdio.h>
//
//int main()
//{
//    FILE* fp;
//    int ch;
////    char ch;
//    char buffer[256];
//
//    // read a file
//    fp = fopen("D:\\SWE-20\\Programming\\files.txt", "r");
//
//    // when no data
//    if (fp == NULL) {
//        printf("Error in opening file");
//        return (-1);
//    }
//
//    // read lines till end
//    while (!feof(fp)) {
////    while((ch = getc(fp))!=EOF){
//        // get line
//        ch = getc(fp);
//        // replace ! with +
//        if (ch == '!') {
//            ungetc('+', fp);
//        }
//        // if not
//        else {
//            ungetc(ch, fp);
//        }
//        fgets(buffer, 255, fp);
//        fputs(buffer, stdout);
//    }
//
////    printf("%d",EOF);
//    return 0;
//}




/*************************** fseek() ************************/

// C Program to demonstrate the use of fseek()
#include <stdio.h>

int main()
{
   FILE *fp;
   fp = fopen("D:\\SWE-20\\Programming\\files.txt", "r");

   // Moving pointer to end
   fseek(fp, 6, SEEK_SET);
   int ch = fgetc(fp);
   printf("%c\n",ch);
   // Printing position of pointer
   printf("%ld", ftell(fp));

   return 0;
}