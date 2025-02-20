#include<stdio.h>
#include<stdlib.h>

// void storetable(int arr[][10],int n, int m,int number);
// int main(){
//     int tables[2][10];
//     storetable(tables,0,10,2);
//     storetable(tables,1,10,3);

//     for (int i=0;i<10;i++){
//         printf("%d\t",tables[0][i]);
//     }
//     printf("\n");
//     for (int i=0;i<10;i++){
//         printf("%d\t",tables[1][i]);
//     }
//   return 0;  
// }

// void storetable(int arr[][10],int n,int m,int number){
//     for (int i=0;i<m;i++){
//         arr[n][i]= number *(i+1);

//     }
// }
// void printstring(char arr[]);
// int main (){
//     char firstname[]="sahil";
//     char lastname[]="khamkar";
//     printstring(firstname);
//     printstring(lastname);

//     return 0;
// }
// void printstring(char arr[]){
//     for(int i=0; arr[i]!='\0';i++){
//         printf("%c",arr[i]);
//     }
//     printf("\n");
// }


// int main (){
//      char name[]="Sahil";
//      printf("%s",name);

//      return 0;
// }
// }

//******* */ int main (){
//     char name[50];
//     scanf( "%s" , name);
//     printf("your name is : %s", name);
//     return 0;
// }

//**** */ int main(){
//     char firstname[50];
//     scanf( "%s", firstname);
//     printf("your name is %s",firstname);
//     return 0;
// }


// int main(){
//     char str[100];
//     gets(str);
//     puts(str);

//     return 0;
// }


// chapter second last 

//   int main (){
//     FILE *fptr;
//     fptr = fopen("test.txt","r");

//    char ch;
//    fscanf(fptr,"%c",&ch);
//    printf("character = %c\n",ch);
//    fscanf(fptr,"%c",&ch);
//    printf("character = %c\n",ch);
//    fscanf(fptr,"%c",&ch);
//    printf("character = %c\n",ch);
//    fscanf(fptr,"%c",&ch);
//    printf("character = %c\n",ch);
//    fscanf(fptr,"%c",&ch);
//    printf("character = %c\n",ch);


//    fclose(fptr);
//    return 0;  
//   }

// int main (){
//    FILE *fptr;
//    fptr = fopen("test.txt","w");

//    // fputc('M',fptr);
//    // fputc('A',fptr);
//    // fputc('N',fptr);
//    // fputc('G',fptr);
//    // fputc('o',fptr);

//    // printf ("%c\n",fgetc(fptr));
//    // printf ("%c\n",fgetc(fptr));
//    // printf ("%c\n",fgetc(fptr));
//    // printf ("%c\n",fgetc(fptr));
//    // printf ("%c\n",fgetc(fptr));


//    // fprintf(fptr,"%c",'m');
//    // fprintf(fptr,"%c",'a');
//    // fprintf(fptr,"%c",'n');
//    // fprintf(fptr,"%c",'g');
//    // fprintf(fptr,"%c",'o');

//    fclose(fptr);
//    return 0;
// }


// int main (){
//    FILE *fptr;
//    fptr= fopen("test.txt","r");
//    char ch;
//    ch= fgetc(fptr);
//    while(ch != EOF){
//       printf("%c",ch);
//       ch = fgetc(fptr);
//    }
//    printf("\n");

//    fclose(fptr);
//    return 0;

// }

// int main (){
//    FILE *fptr;
//    fptr = fopen("test.txt","r");
//    int n;
//    fscanf(fptr,"%d",&n);
//    printf("number = %d\n",n);
//    fscanf(fptr,"%d",&n);
//    printf("number = %d\n",n);
//    fscanf(fptr,"%d",&n);
//    printf("number = %d\n",n);
//    fscanf(fptr,"%d",&n);
//    printf("number = %d\n",n);
//    fscanf(fptr,"%d",&n);
//    printf("number = %d\n",n);

//    fclose(fptr);
//    return 0;

// }

// int main (){
//    FILE *fptr;
//    fptr = fopen("student.txt","w");

//    char name[100];
//    int age;
//    float cgpa;

//    printf("enter name :");
//    scanf("%s", &name);
//    printf("enter age :");
//    scanf("%d",&age);
//    printf("enter cgpa :");
//    scanf("%f",&cgpa);

//    fprintf(fptr, "%s\t",name);
//    fprintf(fptr, "%d\t",age);
//    fprintf(fptr,"%f\t",cgpa);

//    fclose(fptr);
//    return 0;
// }

// int main (){
//    FILE *fptr;
//    fptr =fopen("odd.txt","w");

//    int n;
//    printf("enter n :");
//    scanf("%d", &n);
//    for (int i=1; i<=n;i++){
//       if(i%2 != 0){
//          fprintf(fptr,"%d\n",i);
//       }
//    }
//    fclose(fptr);
//    return 0;
// }

// int main (){
//    FILE *fptr;
//    fptr=fopen("sum.txt","r");
//    int a;
//    fscanf(fptr,"%d",&a);
//    int b;
//    fscanf(fptr,"%d",&b);

//    fclose(fptr);
//    fptr=fopen("sum.txt","w");
//    fprintf(fptr, "%d",a+b);
//    fclose(fptr);
//    }

// int main (){
//   float *ptr;
//   ptr =(float*)malloc(5*sizeof(float));

//   ptr[0]=1;
//   ptr[1]=2;
//   ptr[2]=5;
//   ptr[3]=4;
//   ptr[4]=8;

//   for (int i=0; i<5;i++){
//    printf("%f\n",ptr[i]);
//   }
//    return 0;
// }

// int main (){
//    int *ptr;
//    int n;
//    printf("enter n :");
//    scanf("%d",&n);

//    ptr = (int*)calloc(n,sizeof(int));
//    for(int i=0; i<n; i++){
//       printf("%d\n",ptr[i]);

// }
 
//  return 0;
// }



// int main (){
//    int *ptr;
//    int n;printf("enter n :");
//    scanf("%d",&n);
//    ptr = (int*)calloc (n, sizeof(int));
//    for(int i= 0;  i<n; i++){
//       printf("%d\n",ptr[i]);

//    }
//    free(ptr); 
//    ptr = (int*)calloc(2,sizeof(int));
//    for(int i=0; i<2; i++){
//       printf("%d\n",ptr[i]);
//    }
//    return 0;
// }   



int main (){
   printf("hello world");
   
}
