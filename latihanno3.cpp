#include <iostream>

using namespace std;

class Student{

    private:
    char *name;
    double mark1; 
    double mark2;
    
    public:
    Student(char* namae, double ma1, double ma2) {
        name = namae;
        mark1 = ma1;
        mark2 = ma2;
    }
    float calc_media() {
        return (mark1 + mark2) / 2;
    }
    void disp() {
        cout << "Student:" << name << " \nnilai media:"<< calc_media() <<"\n";
    }
};

int main()
{
    char nama[1000];
    int score1, score2;

    cin >> nama;
    cin >> score1;
    cin >> score2;

    Student student1(nama, score1, score2);

    student1.disp();
    return 0;
}