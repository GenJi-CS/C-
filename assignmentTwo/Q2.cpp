/*Question 2
Deﬁne an enum called Grade, with the following values: A, A-, B+, B, B-, C+, C, C-, D, and F.
Modify Student class (deﬁned in previous question)
to store the grade of the student by adding a data member of type Grade 
and its getter and setter.*/
#include<iostream>
using namespace std;
enum Grade
{
    A, AMinus , BPlus , B , BMinus , CPlus , C , CMinus , D , F , Invalid
};
class Student
{
    private:
        string name;
        char id[10];
        char stream[10];
        int roll;
        float marks[5];
        Grade xx;
    public:
        void input();
        void setter();
        void display();
};
void Student::input()
{
        cout<<"Enter name: ";
        getline(cin,name);
        cout<<"Enter stream: ", cin>>stream;
        cout<<"Enter id: ", cin>>id;
        cout<<"Enter roll: ",cin>>roll;
        
        cout<<"Enter the marks in Maths:",cin>>marks[0];
        cout<<"Enter the marks in Computer:",cin>>marks[1];
        cout<<"Enter the marks in Physics:",cin>>marks[2];
        cout<<"Enter the marks in Chemistry:",cin>>marks[3];
        cout<<"Enter the marks in ENGG:",cin>>marks[4];
}
void Student::setter()
{
    float sum=0;
    for(int i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    float p=(sum/500.0)*100.0;
    if (p < 0.0 || p > 100.0) xx=Invalid;
    else if(p<100.0 && p>85.0) xx=A;
    else if(p<85.0 && p>75.0) xx=AMinus;
    else if(p<75.0 && p>70.0) xx=BPlus;
    else if(p<70.0 && p>60.0) xx=B;
    else if(p<60.0 && p>50.0) xx=BMinus;
    else if(p<50.0 && p>45.0) xx=CPlus;
    else if(p<45.0 && p>35.0) xx=C;
    else if(p<35.0 && p>30.0) xx=CMinus;
    else if(p<30.0 && p>25.0) xx=D;
    else if(p<25.0 && p>0.0) xx=F;
}
void Student::display()
{
    cout<<"\n\nName of Student: " <<name <<endl;
    cout<<"ID: "<<id<<endl;
    cout<<"Roll no: "<<roll<<endl;
    cout<<"Stream: "<<stream<<endl;
    cout<<"Grade: ";
    switch(xx)
    {
        case 0: 
        cout<<"A";
        break;
        
        case 1: 
        cout<<"A-";
        break;
        
        case 2: 
        cout<<"B+";
        break;
        
        case 3: 
        cout<<"B";
        break;
        
        case 4: 
        cout<<"B-";
        break;
        
        case 5: 
        cout<<"C+";
        break;
        
        case 6: 
        cout<<"C";
        break;
        
        case 7: 
        cout<<"C-";
        break;

        case 8: 
        cout<<"D";
        break;

        case 9: 
        cout<<"F";
        break;

        case 10: 
        cout<<"Invalid Input!";
        break;

        default:
        cout<<"Something is worng!";
    }
}

int main()
{
    Student s1;
    s1.input();
    s1.setter();
    s1.display();
    return 0;
}