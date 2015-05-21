#include "b.h"

Student::Student()
{
    cout<<"class Student contructor do.."<<endl;
}

Student::~Student()
{
    cout<<"class Student destructor do.."<<endl;
}

middleStudent::middleStudent()
{
    cout<<"class middleStudent contructor do.."<<endl;
}

middleStudent::~middleStudent()
{
    cout<<"class middleStudent destructor do.."<<endl;
}

inline void Student::setStudent(int index, string name, char sex, int height)
{
    this->index = index;
    this->name = name;
    this->sex = sex;
    this->height = height;
}

inline void Student::getStudent(int index)
{
    cout<<this->index<<endl;
    cout<<this->name<<endl;
    cout<<this->sex<<endl;
    cout<<this->height<<endl;
}

inline void middleStudent::setStudent(int index, string name, char sex, int height, int score, string addr)
{
    this->index = index;
    this->name = name;
    this->sex = sex;
    this->height = height;
    this->score = score;
    this->homeAddr = addr;
}

inline void middleStudent::getStudent(int index)
{
    cout<<this->index<<endl;
    cout<<this->name<<endl;
    cout<<this->sex<<endl;
    cout<<this->height<<endl;
    cout<<this->score<<endl;
    cout<<this->homeAddr<<endl;
}

void middleStudent::getCourse(int index)
{
    cout<<"Need output Course"<<endl;
}

int main()
{
    Student *ps;
    //s.setStudent(1, "wang", '0', 177);

    middleStudent *pstu = new middleStudent;
    pstu->setStudent(2, "liqingfang", '0', 180, 200, "北京市");

    //Student *pstu = &s;
    //pstu->getStudent(1);

    pstu->getStudent(2);
    pstu->getCourse(2);
    ps = pstu;
    ps->getCourse(2);

    delete pstu;

    return 0;
}
