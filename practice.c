#include <stdio.h>
#include <string.h>

// int main(){
//      char str[100];
//      fgets(str,100 ,stdin);
//      puts(str);
    
//     return 0;
// }

// int countlength(char arr[]);
// int main (){
    // char *canchange="hello world";
    // puts(canchange);
    // canchange = "hello";
    // puts(canchange);

    // char cannotchange[]="hello world";
    // puts(cannotchange);
    // cannotchange ="hello";
// int countlength(char arr[]);
// int main () {
//     char name[100];
//     fgets(name,100, stdin);
//     printf("length is: %d", countlength(name));

//     return 0;
// }
// int countlength(char arr[]) {
//     int count = 0;
//     for (int i=0;arr[i]!='\0'; i++ ){
//         count++;
//     }
//     return count;
// }


// int main(){
//     char name[]="sahilsandip khamkar";
//     int length = strlen(name);
//     printf("length is : %d", length);
//     return 0;
// }
// int main (){
//     char oldstr[]="old str";
//     char newstr[]="new str";
//     strcpy(newstr, oldstr);
//     puts(newstr);

//     return 0;
// }


// int main (){
//     char firststr[6]= "hello";
//     char secondstr[]= "world";
//     strcat(firststr,secondstr);
//     puts(firststr);
//     return 0;
// }

// int main (){
//     char firststr[]= "hhhhhh";
//     char secondstr[]="hhhhhh";
//     printf("%d",strcmp(secondstr,firststr));


//     return 0;
// }

//**** */ int main (){
//     char str[100];
//     char ch;
//     int i=0;
//     while(ch !='\n'){
//         scanf("%c",&ch);
//         str[i]=ch;
//         i++;
//     }
//     str[i]='\0';
//     puts(str);
// }
// void printstring(char arr[]);
// int countlength(char arr[]);
// void salting(char password[]);

// int main (){
//     char password[1000];
//     scanf("%s ", password);
//     salting(password);


// }
// void salting(char password[]){
// char salt[]="123";
// char newpass[200];

// strcpy (newpass, password);
// strcat(newpass,salt);
// puts(newpass);
// }

// int countlength(char arr[]){
//     int count = 0;
//     for(int i=0;arr[i] !='\0'; i++){
//         count++;
//     }
// }


// void slice(char str[],int n,int m);

// int main() {
//     char str[]="hello world";
//     slice(str, 2,4);

// }
// void slice(char str[], int n, int m) {
//     char newstr[100];
//     int j=0;
//     for(int i=n ; i<=m; i++){
//         newstr[j]=str[i];
//     }
//     newstr[j]='\0';
//     puts(newstr);
// }



// int countvowels(char str[]);

// int main(){
//     char str[]="sahilkhamkarfrom admadnagar ";
//     printf("vowels are: :%d", countvowels(str));
    
// }
// int countvowels(char str[]){
//     int count = 0;
//     for (int i =0; str[i] !='\0';i++){
//         if(str[i]=='a'|| str[i]=='e'|| str[i]=='i' ||
//            str[i]=='o'|| str[i]=='u'){
//            count++;

//         }
//     }
//     return count;
// }

// int cheakchar(char str[],char ch);

// int main(){
//     char str[]="sahilkhamkar";
//     char ch ='z';
//     cheakchar(str,ch);

// }
// int cheakchar(char str[], char ch ){
//     for (int i =0; str[i]!='\0';i++){
//         if (str[i] ==ch){
//             printf("character is present :");
//             return 0;
//         }
        
//     }
//     printf("character is not present");
// }


struct student{
    int roll;
    float cgpa;
    char name[100];

};

int main(){
    struct student s1;
    s1.roll =25;
    s1.cgpa= 10.10;
    //s1.name = "sahil";
    strcpy(s1.name, "sahil");

    printf("student name:%s\n",s1.name);
    printf("student roll no :%d\n",s1.roll);
    printf("student cgpa :%f\n",s1.cgpa);

    struct student s2;
    s2.roll =45;
    s2.cgpa= 8.10;
    //s1.name = "sahil";
    strcpy(s2.name, "soham");

    printf("student name:%s\n",s2.name);
    printf("student roll no :%d\n",s2.roll);
    printf("student cgpa :%f\n",s2.cgpa);

    struct student s3;
    s3.roll =26;
    s3.cgpa= 09.10;
    //s1.name = "sahil";
    strcpy(s3.name, "sai");

    printf("student name:%s\n",s3.name);
    printf("student roll no :%d\n",s3.roll);
    printf("student cgpa :%f\n",s3.cgpa);
    return 0;


}


// struct student {

//     int roll;
//     float cgpa;
//     char name;
// };

// int main(){
//     struct student ece[100];
//     ece[0].roll = 145;
//     ece[0].cgpa = 8.5;
//     strcpy(ece[0].name,"sahil");

//    // printf("name of student :%s\n",ece[0].name);
//     printf("roll no of student :%d\n",ece[0].roll);
//     printf("cgpa of student :%f\n",ece[0].cgpa);

//     return 0;
// }


// struct student {
//     int roll;
//     float cgpa;
//     char name[100];
// };

// void printfinfo(struct student s1);


// int main (){
//     struct student s1={1254,8.5,"sahil"};
//     printfinfo(s1);
//     s1.roll=15;

//     printf("student roll= %d\n",s1.roll);


//     return 0;
// }

// void printfinfo(struct student s1)  {
//     printf("student information \n");
//     printf("student cgpa =%f\n",s1.cgpa);
//     printf("student name =%s\n",s1.name);
// }

    

// typedef struct computerengineeringstudent {
//     int roll;
//     float cgpa;
//     char name[100];
// } coe;

// int main(){
//     coe s1;
//     s1.roll =154;
//     s1.cgpa = 9.1;
//     strcpy(s1.name, "sahil");

//     printf("student name is %s\n", s1.name);

//}

//    struct address {
//     int houseno;
//     int block;
//     int city[100];
//     int state[100];

//    };

// void printadd(struct address add);


// int main (){
//     struct address adds[5];

//     printf("enter info for person 1:");
//     scanf("%d",&adds[0].houseno);
//     scanf("%d",&adds[0].block);
//     scanf("%s",adds[0].city);
//     scanf("%s",adds[0].state);

//     printf("enter info for person 2:");
//     scanf("%d",&adds[1].houseno);
//     scanf("%d",&adds[1].block);
//     scanf("%s",adds[1].city);
//     scanf("%s",adds[1].state);

//     printf("enter info for person 3:");
//     scanf("%d",&adds[2].houseno);
//     scanf("%d",&adds[2].block);
//     scanf("%s",adds[2].city);
//     scanf("%s",adds[2].state);

//     printf("enter info for person 4 :");
//     scanf("%d",&adds[3].houseno);
//     scanf("%d",&adds[3].block);
//     scanf("%s",adds[3].city);
//     scanf("%s",adds[3].state);

//     printf("enter info for person 5:");
//     scanf("%d",&adds[4].houseno);
//     scanf("%d",&adds[4].block);
//     scanf("%s",adds[4].city);
//     scanf("%s",adds[4].state);

//     printadd(adds[0]);
//     printadd(adds[1]);
//     printadd(adds[2]);
//     printadd(adds[3]);
//     printadd(adds[4]);

//     return 0;

// }

// void printadd(struct address add){
//     printf("adress is :%d,%d,%s,%s\n",add.houseno , add.block , add.city, add.state);
// }

// struct vector {
//     int x;
//     int y;
// };
 
// void calsum(struct vector v1, struct vector v2, struct vector sum);

// int main (){
//     struct vector v1={5,6};
//     struct vector v2={4,7};
//     struct vector sum ={0};

//     calsum(v1,v2,sum);
//     return 0;

// }
// void calsum(struct vector v1, struct vector v2, struct vector sum){
//     sum.x = v1.x+ v2.x;
//     sum.y = v1.y+ v2.y;

//     printf("sum of x is :%d\n", sum.x);
//     printf("sum of y is : %d\n", sum.y);
// }

// struct complex{
//     int real;
//     int img;
// };

// int main (){
//     struct complex number1={5,8};
//     struct complex *ptr = &number1;
//     printf("real part = %d\n",ptr->real);
//     printf("img part = %d\n",ptr->img);
//     return 0;
// }


 typedef struct bankaccount {
    int accountno;
    char name[100];

} acc ;

int main (){
    acc acc1 = {123 ,"sahil"};
    acc acc2 = {124,"sandip"};
    acc acc3 = {154," khamkar"};

    printf("account no is : %d ",acc1.accountno);
    printf(" acc holder name  = %s",acc1.name);

    return 0;
}

//chap next at sahil.c