 #include <stdio.h>
 #include <conio.h>
 #include <string.h>

int menu();
void SignUp();


struct acc_details
{
    char first_name[20];
    char last_name[20];
    char Username[20];
    char Phone[20];
    char gender[10];
    char DOB[10];
}; 



int menu()
{
    int field;

    printf("********MAIN MENU**********\n");
    printf("1] SIGN UP\n");
    printf("2] LOGIN\n");
   
    printf("ENTER YOUR FIELD\n\n");
    scanf("%d",&field);
    return field;
}

 
void SignUp()
{
  struct acc_details y;

  printf("-----------------------------------------------\n");
  printf("**************CREATE A NEW ACCOUNT*************\n");
  printf("ENTER FIRST NAME :");
  scanf("%s",y.first_name);
  printf("ENTER LAST NAME :");
  scanf("%s",y.last_name);
  printf("CREATE YOUR USERNAME :");
  scanf("%s",y.Username);
  printf("ENTER YOUR MOBILE NO :");
  scanf("%s",y.Phone);
  printf("ENTER YOUR GENDER :");
  scanf("%s",y.gender);
  printf("ENTER YOUR DOB :");
  scanf("%s",y.DOB);
  
  }
int Premium();
int Classic();
int Economy();

  int main()
  {
     int hirac;

  printf("\n------------------------------------------\n");   

  printf("PASSWORD REGISTER:\n");
      int i=0;
    char ch;
    char password[20];
    char copypass[20];
    start:
   printf("Enter your passowrd :");
    while (1) 
    {
    ch=getch();

    if(ch==13)
    {
      password[i]='\0';
      break;
    }
    else if (ch==8)
    {
      if(i>0)
      {
        i--;
        printf("\b \b");
      }
    } 
      else if (ch==9 || ch==32)
      {
        continue;
      }

    else
    {
     password [i++]=ch;
     printf("*");
    }
    }

    printf("You Entered :%s\n",password);

    FILE *myfile ;

    myfile=fopen("pass.txt","r");
    fscanf(myfile,"%s",copypass);
    fclose (myfile);
    
   printf("Saved password : %s\n",copypass);

    int x= strcmp(password,copypass);
    if(x==0)
    {
        printf("****LOGIN SUCESSFULLY****\n");
    }
    else
    {
        printf("****INCORRECT PASSWORD****\n");
    
        goto start;
    }

      switch (menu())
   {
    case 1:
          SignUp();
          break;

     default:
            printf("INVALID OPTION\n");
            break;                           
   }



 printf("\n------------------------------------------\n"); 
    printf("Select type of seat:\n");
    printf("PREMIUM SELECT-1\n");
    printf("CLASSIC SELECT-2\n");
    printf("ECONOMY SELECT-3\n");
    
    


    scanf("%d",&hirac);
    switch(hirac){     
      case 1:
             Premium();
             break;
      case 2:   
             Classic();
             break;
      case 3:
             Economy();
             break;
             
      default :
         printf("NOT A TYPE OF SEAT OR FUNC.error");                  
            
    }
    return 0;
  }


   int Premium()
   {


    int permium[3][5]={
      {1. ,2. ,3. ,4. ,5.},
      {6. ,7. ,8. ,9. ,10.},
      {11. ,12. ,13. ,14. ,15.}
       };

    int classic[3][5]={
      {16. ,17. ,18. ,19. ,20.},
      {21. ,22. ,23. ,24. ,25.},
      {26. ,27. ,28. ,29. ,30.}
       }; 
    
   int economy[3][5]={
      {31. ,32. ,33. ,34. ,35.},
      {36. ,37. ,38. ,39. ,40.},
      {41. ,42. ,43. ,44. ,45.}
       }; 

       printf("_____________DISPLAY TICKETS________________\n");
  
  printf("Premium");
  printf("\n");

  for(int i=0; i<3; i++)
  {
    for(int j=0; j<5; j++)
    {
      printf("%d  ",permium[i][j]);
    }
    printf("\n");
  }

  
  printf("classic");
  printf("\n");
    
    for(int k=0; k<3; k++)
  {
    for(int l=0; l<5; l++)
    {
      printf("%d  ",classic[k][l]);
    }
    printf("\n");
  }

  
  printf("economy");
  printf("\n");

     for(int m=0; m<3; m++)
  {
    for(int n=0; n<5; n++)
    {
      printf("%d  ",economy[m][n]);
    }
    printf("\n");

  }

  printf("__________________________________");

  printf("\n");

  int z;

  printf("ENTER THE NUMBER OF SEATS:");
  scanf("%d",&z);

   int selected_seats[z];

  for(int i=0; i<z; i++)
  {

    int row,column;  
    printf("ENTER THE SEAT ROW AND COLUMN OF ELEMENT : %d",i+1);

    scanf("%d %d",&row,&column);
    
    if(row<0||row>=3||column<0||column>=5)
    {
        printf("INVALID SEAT NUMBER: RE-TRY");
        i--;
        continue;
    }
       if(permium[row][column]==-1)
    {
        printf("ALREADY SELECTED..Try again./n");
        i--;
        continue;
    }


    selected_seats[i]=permium[row][column];
     permium[row][column] = -1;

  }

    printf("\n SEATS SELECTED ARE PREMIUM:\n");
   
printf("--------------------------------------------------\n");   
   for(int i=0; i<z; i++){
    printf(" SEAT %d: %d\n",i+1,selected_seats[i]);
printf("--------------------------------------------------\n");    
   }
   }
    

int Classic()
{
  
   int permium[3][5]={
      {1. ,2. ,3. ,4. ,5.},
      {6. ,7. ,8. ,9. ,10.},
      {11. ,12. ,13. ,14. ,15.}
       };

   

   int classic[3][5]={
      {16. ,17. ,18. ,19. ,20.},
      {21. ,22. ,23. ,24. ,25.},
      {26. ,27. ,28. ,29. ,30.}
       }; 
  
     int economy[3][5]={
      {31. ,32. ,33. ,34. ,35.},
      {36. ,37. ,38. ,39. ,40.},
      {41. ,42. ,43. ,44. ,45.}
       }; 
  

    printf("_____________DISPLAY TICKETS________________\n");
  
  printf("Premium");
  printf("\n");

  for(int i=0; i<3; i++)
  {
    for(int j=0; j<5; j++)
    {
      printf("%d  ",permium[i][j]);
    }
    printf("\n");
  }

  
  printf("classic");
  printf("\n");
    
    for(int k=0; k<3; k++)
  {
    for(int l=0; l<5; l++)
    {
      printf("%d  ",classic[k][l]);
    }
    printf("\n");
  }

  
  printf("economy");
  printf("\n");

     for(int m=0; m<3; m++)
  {
    for(int n=0; n<5; n++)
    {
      printf("%d  ",economy[m][n]);
    }
    printf("\n");

  }

  printf("__________________________________");

  printf("\n");


    int u;

  printf("ENTER THE NUMBER OF SEATS:");
  scanf("%d",&u);

   int selected_seats_C[u];

  for(int i=0; i<u; i++)
  {

    int r,c;  
    printf("ENTER THE SEAT ROW AND COLUMN OF ELEMENT : %d",i+1);

    scanf("%d %d",&r,&c);
    
    if(r<0||r>=3||c<0||c>=5)
    {
        printf("INVALID SEAT NUMBER: RE-TRY");
        i--;
        continue;
    }
       if(classic[r][c]==-1)
    {
        printf("ALREADY SELECTED..Try again./n");
        i--;
        continue;
    }


    selected_seats_C[i]=classic[r][c];
     classic[r][c] = -1;

  }

    printf("\n SEATS SELECTED ARE CLASSIC:\n");
printf("--------------------------------------------------\n");
    for(int i=0; i<u; i++){
    printf(" SEAT %d: %d\n",i+1,selected_seats_C[i]);
printf("--------------------------------------------------\n");    
   }
       
    
   
}

int Economy()
{
     int permium[3][5]={
      {1. ,2. ,3. ,4. ,5.},
      {6. ,7. ,8. ,9. ,10.},
      {11. ,12. ,13. ,14. ,15.}
       };

   

   int classic[3][5]={
      {16. ,17. ,18. ,19. ,20.},
      {21. ,22. ,23. ,24. ,25.},
      {26. ,27. ,28. ,29. ,30.}
       }; 
  
   int economy[3][5]={
      {31. ,32. ,33. ,34. ,35.},
      {36. ,37. ,38. ,39. ,40.},
      {41. ,42. ,43. ,44. ,45.}
       }; 
 
     printf("_____________DISPLAY TICKETS________________\n");
  
  printf("Premium");
  printf("\n");

  for(int i=0; i<3; i++)
  {
    for(int j=0; j<5; j++)
    {
      printf("%d  ",permium[i][j]);
    }
    printf("\n");
  }

  
  printf("classic");
  printf("\n");
    
    for(int k=0; k<3; k++)
  {
    for(int l=0; l<5; l++)
    {
      printf("%d  ",classic[k][l]);
    }
    printf("\n");
  }

  
  printf("economy");
  printf("\n");

     for(int m=0; m<3; m++)
  {
    for(int n=0; n<5; n++)
    {
      printf("%d  ",economy[m][n]);
    }
    printf("\n");

  }

  printf("__________________________________");

  printf("\n");
 
    

    int s;

  printf("ENTER THE NUMBER OF SEATS:");
  scanf("%d",&s);

   int selected_seats_E[s];

  for(int i=0; i<s; i++)
  {

    int ro,cl;  
    printf("ENTER THE SEAT ROW AND COLUMN OF ELEMENT : %d",i+1);

    scanf("%d %d",&ro,&cl);
    
    if(ro<0||ro>=3||cl<0||cl>=5)
    {
        printf("INVALID SEAT NUMBER: RE-TRY");
        i--;
        continue;
    }
       if(economy[ro][cl]==-1)
    {
        printf("ALREADY SELECTED..Try again./n");
        i--;
        continue;
    }


    selected_seats_E[i]=economy[ro][cl];
     economy[ro][cl] = -1;

  }
printf("--------------------------------------------------\n");
    printf("\n SEATS SELECTED ARE ECONOMY:\n");

    for(int i=0; i<s; i++){
    printf(" SEAT %d: %d\n",i+1,selected_seats_E[i]);
printf("--------------------------------------------------\n");    
   }
         
}


 

