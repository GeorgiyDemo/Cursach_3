//Добавить:
// Форма обучения (очная/заочная)
// Направление (ИБАС/ПКС)
// № заявления К-32593295
// Оригинал (да/нет)
// Форма оплаты (бюджет/Договор)
// Дата заявления

#include <iomanip>
#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <sqlite3.h>

using namespace std;

class StudentClass{

	public:

		string FIO;
		bool priority;
		//сред. балл по аттестату
		double score;
		
};

class ViewerClass: public StudentClass{
	public:
		void error();
		void validator(string buf_FIO, bool buf_priority, double buf_score);
		void inputer();
		void outer(string FIO, bool priority, double score);
		int SQLiteInsider(string FIO, bool priority, double score);
};

void ViewerClass::validator(string buf_FIO, bool buf_priority, double buf_score){
	
	if ((typeid(buf_FIO) == typeid(string))&&(typeid(buf_priority) == typeid(bool))&&(typeid(buf_score) == typeid(double))&&((buf_score>=2.0)&&(buf_score<=5.0))){

		FIO=buf_FIO;
		priority=buf_priority;
		score=buf_score;

		outer(FIO, priority, score);
		SQLiteInsider(FIO, priority, score);
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
	bool buf_priority;
	//сред. балл по аттестату
	double buf_score;

	try { 
		cout<<"<Ввод нового абитуриента>\n\n"<<"Введите ФИО => "; cin>>buf_FIO; //пофиксить
		cout<<"Введите средний балл (пример 4.7) => "; cin>>buf_score;
		cout<<"Есть ли приоритет? (0/1) => "; cin>>buf_priority;
		validator(buf_FIO,buf_priority,buf_score);
	}  
	catch(...) { 
		error(); 
	}  

}

int ViewerClass::SQLiteInsider(string FIO, bool priority, double score){
	
	sqlite3 *db;
    char *err_msg = 0;
    ostringstream os;
	int rc = sqlite3_open("database.db", &db);

	if (rc != SQLITE_OK) {
        
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        
        return 1;
    }

    os << "CREATE TABLE IF NOT EXISTS students (name TEXT, priority INT, score REAL); INSERT INTO students VALUES('"<<FIO<<"',"<<priority<<","<<score<<");";
    
    string tmp = os.str();
	const char* sql = tmp.c_str();
 
    rc = sqlite3_exec(db, sql, 0, 0, &err_msg);
    sqlite3_close(db);
};

void ViewerClass::outer(string FIO, bool priority, double score){

	map <bool,string> priorityformatter;
	priorityformatter[true]="есть";
	priorityformatter[false]="нет";

	cout<<"\n<Личная карточка абитуриента>"; cout<<"\nИмя: "<<FIO;
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