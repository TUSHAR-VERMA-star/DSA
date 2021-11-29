#include <iostream>
using namespace std;
class personal_info{
    public:
        string name;
        int age=0;
        void display()
        {
            cout << "name = " << name << endl << "age = " << age << endl;
        }
};

class maths{
    public:
        int maths_marks;
        void display()
        {
            cout << "maths marks = " << maths_marks << endl;
        }
};
class science{
    public:
        int science_marks;
        void display()
        {
            cout << "science marks = " << science_marks << endl;
        }
};
class sst{
    public:
        int sst_marks;
        void display()
        {
            cout << "sst marks = " << sst_marks << endl;
        }
};
class hindi{
    public:
        int hindi_marks;
        void display()
        {
            cout << "hindi marks = " << hindi_marks << endl;
        }
};
class english{
    public:
        int english_marks;
        void display()
        {
            cout << "english marks = " << english_marks << endl;
        }
};
class total: public maths,public english,public hindi,public science,public sst{
    public:
        void display(){
            cout<<maths_marks<<" "<<english_marks<<" "<<science_marks<<" "<<sst_marks<<" "<<hindi_marks<<" "<<endl;
        }
    
};
int main() 
{
    personal_info pi;
    pi.name="Tushar Verma";
    pi.age=19;
    pi.display();
    total *tt=new total;
    tt->maths_marks=99;
    tt->sst_marks=98;
    tt->science_marks=97;
    tt->english_marks=96;
    tt->hindi_marks=95;
    tt->display();
}
