#include <iostream>
using namespace std;

class Employee {
private:
	string name;
	int age;
	int salary;
public:
	Employee() {
		age = 18;
		name = "야옹이";
	}
	string getName() {
		return name;
	}
	void setName(string name) {
		this->name = name;
	}
	int getAge() {
		return age;
	}
	void setAge(int age) {
		this->age = age;
	}
	int getSalary() {
		return salary;
	}
	void setSalary(int salary) {
		this->salary = salary;
	}
};


int main()
{
	Employee employee1;
	employee1.setName("이미림");
	employee1.setAge(29);
	employee1.setSalary(4500000);
	
	cout << "Employee1:" << endl;
	cout << employee1.getName() << endl;
	cout << employee1.getAge() << endl;
	cout << employee1.getSalary() << endl;

	return 0;
}