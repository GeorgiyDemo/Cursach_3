#include <iomanip>
#include <iostream>
#include <string>
#include <map>

using namespace std;

class StudentClass{

	public:

		string FIO;
		string sex;
		bool priority;
		//сред. балл по аттестату
		double score;
		
};

class ViewerClass: public StudentClass{
	public:
		void error();
		void validator(string buf_FIO, string buf_sex, bool buf_priority, double buf_score);
		void inputer();
		void outer(string FIO, string sex, bool priority, double score);
};

void ViewerClass::validator(string buf_FIO, string buf_sex, bool buf_priority, double buf_score){
	
	if ((typeid(buf_FIO) == typeid(string))&&(buf_sex=="М"||buf_sex=="м"||buf_sex=="Ж"||buf_sex=="ж")&&(typeid(buf_priority) == typeid(bool))&&(typeid(buf_score) == typeid(double))&&((buf_score>=2.0)&&(buf_score<=5.0))){

		FIO=buf_FIO;
		sex=buf_sex;
		priority=buf_priority;
		score=buf_score;

		outer(FIO, sex, priority, score);
	}

	else
		error();

}

void ViewerClass::error(){
	cout<<"\n\n--------------------------------------\n";
	cout<<"|Проверьте правильность ввода данных!|\n";
	cout<<"--------------------------------------\n";
}

void ViewerClass::inputer(){

	string buf_FIO;
	string buf_sex;
	bool buf_priority;
	//сред. балл по аттестату
	double buf_score;

	try { 
		cout<<"<Ввод нового абитуриента>\n\n"<<"Введите ФИО => "; cin>>buf_FIO; //пофиксить
		cout<<"Введите пол (М/Ж) => "; cin>>buf_sex;
		cout<<"Введите средний балл (пример 4.7) => "; cin>>buf_score;
		cout<<"Есть ли приоритет? (0/1) => "; cin>>buf_priority;
		validator(buf_FIO,buf_sex,buf_priority,buf_score);
	}  
	catch(...) { 
		error(); 
	}  

}

void ViewerClass::outer(string FIO, string sex, bool priority, double score){
	
	map <string,string> sexformatter;
	sexformatter["м"]="мужской";
	sexformatter["М"]="мужской";
	sexformatter["ж"]="женский";
	sexformatter["Ж"]="женский";

	map <bool,string> priorityformatter;
	priorityformatter[true]="есть";
	priorityformatter[false]="нет";

	cout<<"\n<Личная карточка абитуриента>"; cout<<"\nИмя: "<<FIO;
	cout<<"\nПол: "<<sexformatter[sex];
	cout<<"\nПриоритет: "<<priorityformatter[priority];
	cout<<"\nСред. балл: "<<score;
}
int main(){

	int k;
	ViewerClass* student_obj;
	student_obj= new ViewerClass;

	
	    cout<<"\n\n1. Прием нового абитуриента\n2. Изменение данных абитуриента\n3. Рейтинг абитуриентов\n0. Выход из программы\n=> ";
	    cin>>k;
	    switch (k)  
	    {  
	      case 1:  
	        student_obj->inputer();
	        break;
	        
	      case 2:  
	        cout<<"НЕ РОБИТ";
	        break;

	      case 3:  
	        cout<<"НЕ РОБИТ";
	        break;

	    }    


	delete student_obj;
cout<<"\n";
return 0;
}