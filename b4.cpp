#include<bits/stdc++.h>
using namespace std;



class Student{
private: 
	string name;
	int age;
public:
	Student(){
		name = "15";
		age = 15;
	}
	void display(){
		cout << "Name: " << name << endl;
		cout << "Age: " << age << endl;
	}
};
int main(){
	Student s;
	s.display();
	return 0;
}




