#include <stdio.h>
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;
typedef struct{
    string city,
            street,
            number;
}Address;
typedef struct{
    int  day,
         month,
         year;
}DOB;
typedef struct{
   int ID;
   string fname,
          lname,
          e_mail;
   double GPA;
   Address address;
   DOB dob;
}Student;


int main()
{
    int key;
    while(true)
    {
        printf("                         welcome to faculty                    \n");
        printf("If you want to enter new student press:1\n");
        printf("If you want to remove a student press:2\n");
        printf("If you want to sort the students by grades press:3\n");
        printf("If you want to search for a student by name press:4\n");
        printf("If you want to exit press:5\n");
        break;
        switch(key)
        {
            case 1:
                newStudent();
                   break;
            case 2:
                removeStudent();
                   break;
            case 3:
                sort();
                   break;
            case 4:
                search();
                   break;
            case 5:
                   break;
        }

        system("cls");
            newStudent()
        {
            student s;
            FILE *f;
            printf("Enter your first name:");
            cin>>s.fname;
            f=fopen("c:\\abc.txt","wt");
            fprintf(f,"%s",s.fname);
            fclose(f);
            printf("Enter your last name:");
            cin>>s.lname;
            f=fopen("c:\\abc.txt","wt");
            fprintf(f,"%s",s.lname);
            fclose(f);
            printf("Enter your ID:");
            cin>>s.ID;
            f=fopen("c:\\abc.txt","wt");
            fprintf(f,"%s",s.ID);
            fclose(f);
            printf("Enter your e-mail:");
            cin>>s.e_mail;
            f=fopen("c:\\abc.txt","wt");
            fprintf(f,"%s",s.e_mail);
            fclose(f);
            printf("Enter your GPA:");
            cin>>s.GPA;
            f=fopen("c:\\abc.txt","wt");
            fprintf(f,"%s",s.GPA);
            fclose(f);
            printf("Enter your adress(city-street-number):");
            cin>>s.address.city;
            f=fopen("c:\\abc.txt","wt");
            fprintf(f,"%s",s.address.city);
            fclose(f);
            cin>>s.address.street;
            f=fopen("c:\\abc.txt","wt");
            fprintf(f,"%s",s.address.street);
            fclose(f);
            cin>>s.address.number;
            f=fopen("c:\\abc.txt","wt");
            fprintf(f,"%s",s.address.number);
            fclose(f);
            printf("Enter your day of birth:");
            cin>>s.dob.day;
            f=fopen("c:\\abc.txt","wt");
            fprintf(f,"%s",s.dob.day);
            fclose(f);
            cin>>s.dob.month;
            f=fopen("c:\\abc.txt","wt");
            fprintf(f,"%s",s.dob.month);
            fclose(f);
            cin>>s.dob.year;
            f=fopen("c:\\abc.txt","wt");
            fprintf(f,"%s",s.dob.year);
            fclose(f);
        }
        system("cls");
         sort()
        {
            int swap=1; int temp; student A[100];
            for(int pass=1;pass<100 && swap==1;pass++)
                {
                   swap=0;
                   for(int i=0;i<100-pass;i++)
                   {
                       if(A[i].GPA>A[i+1].GPA)
                       {
                           temp=A[i].GPA;
                           A[i].GPA=A[i+1].GPA;
                           A[i+1].GPA=temp;
                           swap=1
                       }
                   }
               }

        }
        system("cls");
        search()
        {
            int low=0,high=99,found=0,mid,A[100];
            while((low<=high) && (found==0))
            {
                mid=(low+high)/2;
                if(target==A[mid].fname)
                {
                    count<<"found it!";
                    found=1;
                }
                else if(target<A[mid].fname)
                    high=mid-1;
                else high=mid+1;
            }
            if(found==0)
            cout<<"definitely not here!";
        }


    }

    return 0;
}
