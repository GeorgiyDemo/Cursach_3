PRAGMA foreign_keys=on;
CREATE TABLE IF NOT EXISTS students(
	ID INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
	name TEXT,
	score REAL,
	priority TEXT,
	form_sudy TEXT,
	major TEXT,
	original TEXT,
	form_pay TEXT,
	date TEXT);

CREATE TABLE IF NOT EXISTS data(
	ID INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
	student_id INTEGER UNIQUE NOT NULL,
	adress TEXT,
	e_mail TEXT,
	telephone TEXT,
FOREIGN KEY (student_id) REFERENCES students(ID) ON DELETE CASCADE);

CREATE TABLE IF NOT EXISTS parents(
	ID INTEGER PRIMARY KEY AUTOINCREMENT NOT NULL,
	student_id INTEGER NOT NULL,
	name TEXT,
	adress TEXT,
	e_mail TEXT,
	telephone TEXT,
FOREIGN KEY (student_id) REFERENCES students(ID) ON DELETE CASCADE);

INSERT INTO students VALUES(NULL,"Петров Александр",5.0,"да","очная","ПКС","оригинал","бюджет","20.10.2016");
INSERT INTO data VALUES(NULL,1,"ул Ленина","student@e-mail.com","+79945969459");
INSERT INTO parents VALUES(NULL,1,"ул Ленина","Петров Иван","parent@e-mail.com","+74966349493");