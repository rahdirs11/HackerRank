#include<iostream>
using namespace std;

int prof_id = 0, stu_id = 0;

class Person{	
	public:
		Person(){
			name = "";
			age = 0;
		}
		string name;
		int age;
		virtual void getdata()=0;
		virtual void putdata()=0;
};

class Professor: public Person{
	int publications, cur_id = 0;
	public:
		Professor(){
			cur_id = ++prof_id;
		}

		void getdata(){
			cin >> name >> age >> publications;
			// cur_id = cid;
		} // name, age, publications

		void putdata(){
			cout << name << ' ' << age << ' ' << publications << ' ' << cur_id << endl;
		} // print the details out		


};

class Student: public Person{
	int marks[6], cur_id = 0, sum;
	public:
		Student(){
			cur_id = ++stu_id;
		}

		void getdata(){
			sum = 0;
			cin >> name >> age;
			for (int i = 0; i < 6; ++i){
				cin >> marks[i];
				sum += marks[i];
			}			
			/*for (int i = 0; i < 6; ++i)
				sum += marks[i];*/
		}
		void putdata(){
			cout << name << ' ' << age << ' ' << sum << ' ' << cur_id <<endl;
		}

};

int main(){
	int numObjs, profs = 0, stus = 0;
	cin >> numObjs;
	Person *people[numObjs];
	for (int i = 0; i < numObjs; ++i){
		int objch;
		cin >> objch;
		if (objch == 1){
			/* Professor p;
			p.getdata(); */
			people[i] = new Professor;
			people[i] -> getdata();
			// people[i] = &p;
		}
		else{
			/* Student s;
			s.getdata(); */
			people[i] = new Student;
			people[i] -> getdata();
			// people[i] = &s;
		}
	}

	for (int i = 0; i < numObjs; ++i)
		people[i] -> putdata();

	return 0;
}