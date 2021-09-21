#include<iostream>

using namespace std;

class Student{
    
    protected:
        int rollNo;
        char gender;
    public:
        Student()
        {
            cout<<"\nStudent Constructor Called"<<endl;
        }
        Student(int r, char g)
        {   
            rollNo=r;
            gender=g;
        }

        void setStudentValues(int r, char g)
        {   
            rollNo=r;
            gender=g;
        }

        void printStudentDetails()
        {
            cout<<"\nStudent RollNo:"<<rollNo<<" and gender is:"<<((gender=='M')?"Male":"Female")<<endl;
        }
        void display()
        {
            
        }

};

// assumig that the instance stores the subject marks for the quartly unit tests
class Test:virtual public Student{
    protected:
        int english;
        int maths;
        int science;

    public:
        Test()
        {
            cout<<"\nTest Constructor Called"<<endl;
        }
        Test(int e,int m, int s , int r, char g): Student(r, g)
        {
             english=e;
            maths=m;
            science=s;
        }
        void setMarks(int e,int m, int s)
        {
            english=e;
            maths=m;
            science=s;
        }
        void printTestMarks()
        {
            cout<<"\nEnglish:"<<english<<endl;
            cout<<"\nMath:"<<maths<<endl;
            cout<<"\nScience:"<<science<<endl;
        }
};

class ExtraActivities:virtual public Student{

};

class Result:public Test, public ExtraActivities
{
    protected:
        int TotalMarks;
    public:
        Result()
        {
            cout<<"\nResult Constructor Called"<<endl;
        }
        Result(int r, char g, int e, int m, int s):Test(e,m,s,r,g) 
        {

        }
        int totalMarks()
        {
            TotalMarks= english+maths+science;
            return TotalMarks;
        }

        void printResult()
        {
            printStudentDetails();
            printTestMarks();
            cout<<"The total marks as result(rounded off to closed int) are "<<totalMarks()<<endl;
            cout<<"The percentage result(rounded off to closed int) are "<<(totalMarks()/300)*100<<endl;
        }
};



// with multilevel you will have your driver code in the main method/function as short as possible.
// certainly it depends on the use case to use case.
int main()
{
    Result AnupinderSingh(04,'M',54,56,58);
    //AnupinderSingh.setStudentValues(04,'M');
    //AnupinderSingh.setMarks(54,56,58);
    AnupinderSingh.printResult();
    AnupinderSingh.printStudentDetails();
}
