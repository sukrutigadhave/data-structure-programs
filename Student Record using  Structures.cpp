#include<iostream>
#include<string>
using namespace std;
struct Student
{
    int rollNo;
    string name;
    float percentage;
};
int main()
{
    Student s[100];
    int n;
    cout<<"Enter number of students:";
    cin>>n;

    //Input students record
    for(int i=0;i<n;i++)
        {
            cout<<"\nEnter details of students"<<i+1<<endl;
            cout<<"Enter Roll NUmber:";
            cin>>s[i].rollNo;
            cout<<"Enter Name:";
            cin>>ws;
            getline(cin,s[i].name);
            cout<<"Enter Percentage:";
            cin>>s[i].percentage;
        }
    //Display student records
    cout<<"\n----Students Records----\n";
    cout<<"Roll No,\tName\t\tPercentage\n";
    for(int i=0; i<n; i++)
        {
            cout<<s[i].rollNo<<"\t\t"
                <<s[i].name<<"\t\t"
                <<s[i].percentage<<"%\n";
        }
return 0;
}
