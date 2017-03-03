#include <QCoreApplication>
#include<cstdio>
#include<cstdlib>
#include<iostream>
#include<cmath>

using namespace std;


class Students
{
    public:
    int semesterHours;
    double gpa;
    double addCourse(int hours, double grade)
    {
        double weightedGPA;
        weightedGPA=semesterHours * gpa;
        semesterHours += hours;
        weightedGPA+= grade * hours;
        gpa=weightedGPA / semesterHours;
    return gpa;
    }

};

class vec

{
public:
    double x;
    double y;
    double z;
    vec(double X, double Y, double Z):
        x(X), y(Y), z(Z)
    {}

    vec():
        x(0),y(0),z(0) {}



    double len()
    {   double lenght;
        lenght=sqrt( x*x+y*y+z*z);
        return lenght;
    }

    void add(vec other) {
        x += other.x;
        y += other.y;
        z += other.z;
    }

    void Print() {
        cout << x << " " << y << " " << z << endl;
    }
};



int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Students s;
    s.semesterHours=3;
    s.gpa=3.0;
    cout<<"Vorher: s="<<s.semesterHours<<",  "<<s.gpa<<endl;
    cout<<"Addiere 3 Stunden mit der Note 4"<<endl;
    s.addCourse(3,4.0);
    cout<<"Nachher: s="<<s.semesterHours<<",   "<<s.gpa<<endl;

    vec c = vec(3, 4, 5);

    vec g;

    g.Print();

    cout << c.len() << endl;

    vec b = vec(1,1,1);

    c.add(b);

    cout << c.len() << endl;

    c.Print();

    return a.exec();
}
