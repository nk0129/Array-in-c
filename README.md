 #include<studio.h>
 int main()
 { 
  int average,sum=0; 
  int i, marks[10];
 for (i=1; i<=10; i++)
 { 
   printf("enter marks of students"); 
   scanf("%d",&marks[i]); 
 }
 for(i=0; i<=10; i++)
 sum += marks[i]; 
 average = sum/10;
 printf("average marks of students is %d\n ",average); 
 return 0;
 }
