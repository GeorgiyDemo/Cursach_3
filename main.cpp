//Добавить:
// датуууу

#include <iomanip>
#include <iostream>
#include <string>
#include <map>
#include <sstream>
#include <sqlite3.h>
#include <time.h>

using namespace std;

class StudentClass{

	public:

		bool original, priority;
		string FIO, form_sudy, major, numbler, form_pay, date;
		double score;
};

class ViewerClass: public StudentClass{
	public:
		void error();
		void validator(string buf_FIO, double buf_score, bool buf_priority, string buf_form_sudy, string buf_major, string buf_numbler, bool buf_original, string buf_form_pay);
		void inputer();
		void outer();
		char * settime(struct tm *u);
		int SQLiteInsider();

};

void ViewerClass::validator(string buf_FIO, double buf_score, bool buf_priority, string buf_form_sudy, string buf_major, string buf_numbler, bool buf_original, string buf_form_pay){
	
	//SQLiteClass* myParent;

	//if ((typeid(buf_FIO) == typeid(string))&&(typeid(buf_priority) == typeid(bool))&&(typeid(buf_score) == typeid(double))&&((buf_score>=2.0)&&(buf_score<=5.0))){

		FIO=buf_FIO;
		score=buf_score;
		priority=buf_priority;
		form_sudy=buf_form_sudy;
		major=buf_major;
		numbler=buf_numbler;
		original=buf_original;
		form_pay=buf_form_pay;

		outer();

		//myParent:
		//ЧЕ ЧЕ ЧЕ
		SQLiteInsider();
		//SQLiteClass.SQLiteInsider();
	//}

	//else
	//	error();
	}
void ViewerClass::error(){
	cout<<"\n\n--------------------------------------\n";
	cout<<"|Проверьте правильность ввода данных!|\n";
	cout<<"--------------------------------------\n";}
char * ViewerClass::settime(struct tm *u){
  
  char s[40];
  char *tmp;
  for (int i = 0; i<40; i++) s[i] = 0;
  int length = strftime(s, 40, "%d.%m.%Y", u);
  tmp = (char*)malloc(sizeof(s));
  strcpy(tmp, s);
  return(tmp);}

void ViewerClass::inputer(){

	bool buf_original, buf_priority;
	string buf_FIO, buf_form_sudy, buf_major, buf_numbler, buf_form_pay, buf_date;
	double buf_score;

	struct tm *u;
  	char *f;
  	const time_t timer = time(NULL);
  	u = localtime(&timer);
  	f = settime(u);

	try { 
		cout<<"<Ввод нового абитуриента>\n\n"<<"Введите ФИО => "; cin>>buf_FIO; //пофиксить
		cout<<"Введите средний балл (пример 4.7) => "; cin>>buf_score;
		cout<<"Есть ли приоритет? (0/1) => "; cin>>buf_priority;
		cout<<"Форма обучения (очная/заочная) => "; cin>>buf_form_sudy;
		cout<<"Направление (ПКС/ИБАС) => "; cin>>buf_major;
		cout<<"№ заявления => "; cin>>buf_numbler;
		cout<<"Оригинал (0/1) => "; cin>>buf_original;
		cout<<"Форма оплаты (бюджет/договор) => " ; cin>>buf_form_pay;
		//ВЫЗЫВАЕМ НАШУ ДАТУ, но пока без нее хорошо живем
		//buf_date=f;

		validator(buf_FIO, buf_score, buf_priority, buf_form_sudy, buf_major, buf_numbler, buf_original, buf_form_pay);
	}  
	catch(...) { 
		error(); 
	}  
}

int ViewerClass::SQLiteInsider(){
	
	sqlite3 *db;
    char *err_msg = 0;
    ostringstream os;
	int rc = sqlite3_open("database.db", &db);

	if (rc != SQLITE_OK) {
        
        fprintf(stderr, "Не могу открыть базу данных: %s\n", sqlite3_errmsg(db));
        sqlite3_close(db);
        
        return 1;
    }

    os << "CREATE TABLE IF NOT EXISTS students (name TEXT, score REAL, priority INT, form_sudy TEXT, major TEXT, number TEXT, original TEXT, form_pay TEXT);"; 
	os << "INSERT INTO students VALUES('"<<FIO<<"',"<<score<<","<<priority<<",'"<<form_sudy<<"','"<<major<<"','"<<numbler<<"','"<<original<<"','"<<form_pay<<"');";
    
    string tmp = os.str();
	const char* sql = tmp.c_str();
 
    rc = sqlite3_exec(db, sql, 0, 0, &err_msg);

    if (rc != SQLITE_OK ) {
        
        fprintf(stderr, "SQL error: %s\n", err_msg);
        
        sqlite3_free(err_msg);        
        sqlite3_close(db);
        
        return 1;
    } 

    sqlite3_close(db);
    return 0;};

void ViewerClass::outer(){

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