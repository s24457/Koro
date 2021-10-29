#include <iostream>
using namespace std;

 struct Student {
     string name, secondName, index;
     short semestr;
     double mark;
    Student(string a,string b, string c, short d, double e){
        name = a, secondName = b, index = c;
        semestr = d;
        mark = e;
    }
    void ShowStudent( Student nameOfStudent){
        cout << nameOfStudent.name << " " << nameOfStudent.secondName << " " << nameOfStudent.index << " "
             << nameOfStudent.semestr << " " << nameOfStudent.mark << endl;
    }
};

 auto main () -> int {
     string name, secondName, index;
     short semestr;
     double mark;
     cout << "name, second name, index, semestr, mark" << endl;
     cin >> name >> secondName >> index >> semestr >> mark;
     Student student(name,secondName,index,semestr,mark);
     student.ShowStudent(student);
     return 0;
 }
