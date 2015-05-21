#include <iostream>
#include <string>
#include <cstring>
#include <vector>

using namespace std;

class Student
{
    protected:
        int index;
        string name;
        char sex;
        int height;

    public:
        Student();
        ~Student();
        inline void setStudent(int index, string name, char sex, int height);
        inline virtual void getStudent(int index);
        virtual void getCourse(int index) = 0;
};

class middleStudent : public Student
{
    protected:
        int score;
        string homeAddr;

    public:
        middleStudent();
        ~middleStudent();
        inline void setStudent(int index, string name, char sex, int height, int score, string address);
        inline virtual void getStudent(int index);
        void getCourse(int index);
};
