#include <iostream>
#include <string>
#include <cmath>
using namespace std;




struct student {

	int age;
	string name;
	string schoolname;
};

int main() {



	student student1;
	student1.age = 18;
	student1.name = "rahul";
	student1.schoolname = "DELHI PUBLIC SCHOOL HATHRAS";


	student student2;
	student2.age = 21;
	student2.name = "ASHISH";
	student2.schoolname = "DPS HATHRAS";

	struct {
		int age;
		string name;
	}ashish;

	ashish.age = 18;
	ashish.name = "ashish";


	cout << ashish.age << "\n";
	cout << ashish.name << "\n";
	cout << student1.age << "\n" << student1.name << "\n" << student1.schoolname << "\n" << student1.age << "\n" << "\n" << student2.schoolname << "\n";

	return 0;
}

