DataBase=>
    database is a collection of structured and organised data.
    or
    A database is an application that stores a collection of organized data.

    MySQL

# Relational Database ke father-> Scientist E.F. Codd (Edgar Frank Codd)

SQL (Structured Query Language) ek standard language hai jo Relational Database Management System (RDBMS) ke saath data ko create, read, update, delete (CRUD) karne ke liye use hoti hai.

MySQL -> MySQL ek Relational Database Management System (RDBMS) hai jo SQL language ka use karta hai data ko query, manage aur control karne ke liye.

Row -> tuples
Column -> attributes
table -> relation

# SQL(Structured Query language) :
#    1.DDL (Data definition language)
        👉 Structure banane / badalne ke kaam aata hai
        🔹 Commands:

#            CREATE => db , table  , index etc
                ==> create database database_name
                    ex-> create database School
                ==>create table table_name(column name datatypes)
                    ex-> CREATE TABLE students (
                          id INT PRIMARY KEY AUTO_INCREMENT,
                           name VARCHAR(60),
                          email VARCHAR(30),
                           mobile VARCHAR(13)
                        );


#           ALTER => table modify , column add , etc 
#                    for adding the column in the table ,  command
                ex- > ALTER TABLE students ADD COLUMN parent varchar(60);
#                     for modifying , command 
                ex-> ALTER TABLE students MODIFY COLUMN mobile varchar(20);
                    ALTER TABLE students CHANGE mobile phone VARCHAR(13);
#                      for renaming the table name 
                ex-> 
                    ALTER TABLE students RENAME TO users;
                
#            DROP   => table , column rename etc
                DROP table students
                DROP database database_name

#            TRUNCATE => table ko reset karna (Table ke saare records delete, but 
#                table structure safe rehta hai)

                ex=> TRUNCATE TABLE TABLE_NAME

#            RENAME => table ,db , view etc
                RENAME table users to students;

#    2.DML (Data Manipulation language)
    👉 Data ke saath kaam karta hai

    🔹 Commands:
#        INSERT
        => insert into table_name(columns) values(values);
        ex-> INSERT INTO students(name , email , mobile) VALUES('Vijay' ,'vkc80905@gmail.com' , '8429741136')
#        UPDATE
        ex=> update table_name set column_name='value1' column_name2="value2" where id='3'

#        DELETE
        ex=> DELETE FROM STUDENTS where id="4"
        
 #   3.DCL (Data Control language)
#    Grant 
    ex=>
#    revoke

 #   4.DQL (Data Query language)
#    select
        ex:- select * from students where id='1'
        ex:- select * from students where name='VIJAY'
        ex:- select * from students where email='vkc80905@gmail.com'
        ex:- select * from students where salary=30000


 #   5.TCL (transaction control language)  
     BEGIN or start transaction
     COMMIT -> save kar dena
     **SAVEPOINT**
     ROLLBACK ->wapas lana 

        START TRANSACTION;
        UPDATE TRANSACTION set balance='5000' where id='1';
        UPDATE TRANSACTION set balance='6000' where id='2';
        COMMIT;

server--wamp, mamp , **xamp*

# constraints=> constrains are the rules that is applied on the table for consistancy and stored data in the frequent and organised way.
or
SQL Constraints ka kaam hota hai database me data ko rules ke under rakhna — taaki galat, duplicate, ya invalid data enter hi na ho.

types of SQL constraints:=>
#    1.NOT NULL  
     ➡️ (Column kabhi empty (NULL) nahi ho sakta.)
    
#    2️⃣ UNIQUE
     ➡️ Column me duplicate values allowed nahi.

#     3️⃣ PRIMARY KEY ⭐ (Most Important)

➡️ Combination of:

NOT NULL

UNIQUE

id INT PRIMARY KEY


🔹 Use:

Har row ko uniquely identify karna

Ek table me sirf 1 primary key hoti hai

📌 Example:

CREATE TABLE students (
  id INT PRIMARY KEY,
  name VARCHAR(50)
);

#   4️⃣ FOREIGN KEY

➡️ Do tables ke beech relation banata hai.

FOREIGN KEY (student_id) REFERENCES students(id)


🔹 Matlab:

Child table ka data parent table se match hona chahiye

📌 Example:

CREATE TABLE orders (
  order_id INT PRIMARY KEY,
  student_id INT,
  FOREIGN KEY (student_id) REFERENCES students(id)
);


⚠️ Fayda:

Referential Integrity maintain hoti hai

Galat ID insert nahi ho sakti

#      5️⃣ CHECK

➡️ Condition lagata hai column par.

age INT CHECK (age >= 18)


🔹 Matlab: age 18 se kam nahi ho sakti

📌 Example:

salary INT CHECK (salary > 0)

#      6️⃣ DEFAULT

➡️ Agar user value na de, to auto value set ho jaaye.

status VARCHAR(20) DEFAULT 'active'


📌 Example:

created_at DATE DEFAULT CURRENT_DATE

#       7️⃣ AUTO_INCREMENT (MySQL specific)

➡️ Value automatically 1, 2, 3... increase hoti jaaye

id INT PRIMARY KEY AUTO_INCREMENT


🔹 Mostly IDs ke liye use hota hai


# example:
CREATE TABLE student (
  id INT PRIMARY KEY AUTO_INCREMENT,
  name VARCHAR(50) NOT NULL,
  email VARCHAR(100) UNIQUE,
  age INT CHECK (age >= 18),
  status VARCHAR(20) DEFAULT 'active'
);


# Clauses =>
    clauses are the word which is provide the special permission to fetch the data on the partivular condition.
    or
    SQL Clauses ka use data ko filter, sort, group, restrict, aur analyze karne ke liye hota hai.Ye mostly SELECT query ke saath use hote hain.
 #   Clause = SELECT query ko control karne ka rule
    ex->
    1.select
    2.where
    3.between
    4.like
    5.group by
    6.having
    7.DISTINCT
    8.order by
    9.IN
    10.LIMIT
    11.offset


    🔹 1️⃣ WHERE Clause

        👉 Rows ko filter karta hai (condition ke basis par)

SELECT * FROM students
WHERE age > 18;


🧠 Meaning:
Sirf wahi students dikhao jinki age 18 se zyada hai.

📌 Important points:

WHERE row-level filtering karta hai

SELECT ke baad aata hai

Aggregate function (COUNT, SUM) ke saath directly use nahi hota

    🔹 2️⃣ ORDER BY Clause

👉 Result ko ascending ya descending order me arrange karta hai

SELECT * FROM students
ORDER BY marks DESC;


🧠 Meaning:
Marks ke basis par data ko highest to lowest dikhao.

📌 Notes:

Default order = ASC

DESC manually likhna padta hai

    3️⃣ GROUP BY Clause

👉 Same values ko group karta hai
👉 Mostly aggregate functions ke saath use hota hai

SELECT department, COUNT(*)
FROM employees
GROUP BY department;


🧠 Meaning:
Har department me kitne employees hain.

📌 Yaad rakhna:

GROUP BY ke saath jo column SELECT me hai, wahi GROUP BY me hona chahiye

WHERE se pehle nahi, GROUP BY se pehle aata hai

    🔹 4️⃣ HAVING Clause

👉 Group par condition lagata hai
👉 GROUP BY ka filter version

SELECT department, COUNT(*)
FROM employees
GROUP BY department
HAVING COUNT(*) > 5;


🧠 Meaning:
Sirf wahi departments dikhao jisme 5 se zyada employees hain.

📌 Difference yaad rakho:

WHERE → rows par condition

HAVING → groups par condition

    🔹 5️⃣ SELECT Clause

👉 Batata hai kaun-kaun se columns chahiye

SELECT name, age FROM students;


🧠 Meaning:
Sirf name aur age columns show karo.

    🔹 6️⃣ FROM Clause

👉 Batata hai data kis table se lena hai

SELECT * FROM students;


🧠 Meaning:
Students table se data uthao.

    🔹 7️⃣ DISTINCT Clause

👉 Duplicate values remove karta hai

SELECT DISTINCT city FROM students;


🧠 Meaning:
Har city sirf ek baar show hogi.

    🔹 8️⃣ LIMIT Clause (MySQL)

👉 Result ki rows limit karta hai

SELECT * FROM students
LIMIT 5;


🧠 Meaning:
Sirf first 5 records dikhao.

    🔹 9️⃣ OFFSET Clause

👉 Records skip karta hai

SELECT * FROM students
LIMIT 5 OFFSET 10;


🧠 Meaning:
Pehle 10 records skip karo, next 5 dikhao.  

    🔹 🔟 JOIN Clause

👉 Multiple tables ko connect karta hai

SELECT s.name, c.course
FROM students s
JOIN courses c ON s.id = c.sid;


🧠 Meaning:
Students aur courses table ko relation ke basis par jodo.

    🔹 1️⃣ IN Clause

👉 Multiple values ke saath condition lagane ke liye

SELECT * FROM students
WHERE city IN ('Delhi', 'Mumbai', 'Pune');


🧠 Meaning:
Sirf wahi students jinki city Delhi, Mumbai ya Pune ho.

📌 OR ka short version samjho

    🔹 2️⃣ NOT IN Clause

👉 Given values ko exclude karta hai

SELECT * FROM students
WHERE city NOT IN ('Delhi', 'Mumbai');

    🔹 3️⃣ BETWEEN Clause

👉 Range ke beech ka data

SELECT * FROM students
WHERE marks BETWEEN 60 AND 80;


📌 Inclusive hota hai (60 & 80 dono include)

    🔹 4️⃣ LIKE Clause

👉 Pattern matching ke liye

SELECT * FROM students
WHERE name LIKE 'A%';


🧠 Meaning:
Naam A se start hone wale students

Wildcards:

% → any characters

_ → single character

LIKE '_a%'

    
# Aggregation ==>
    Performing mathmatical calculation is called Aggregation.
    OR
    Aggregation in SQL ka matlab hota hai multiple rows ke data ko combine karke ek single summarized result nikalna.
    Ye kaam aggregate functions se hota hai.
    Socho table me 1000 records hain aur tumhe:
    total count
    average
    max / min
    total sum
    chahiye → Aggregation use hoti hai.

    1.MAX
    2.MIN
    3.COUNT
    4.AVG
    5.SUM

#   JOINS=>
        JOins is used to join two tables.
        1.inner JOINS
        2.Left JOINS
        3.Right JOINS
        4.FULL JOIN
        5.CROSS JOIN
        6.SELF JOIN

# SubQuiries =>
    Subquery = query ke andar query
    Matlab: ek SQL query jo kisi dusri SQL query ke andar likhi jaati hai.

    SELECT column_name
    FROM table_name
    WHERE column_name OPERATOR (
    SELECT column_name
    FROM table_name
    WHERE condition
    );





youtube channel -- enginnering digest

SELECT * FROM student WHERE name LIKE 'a%';  aage se match karta hai
SELECT * FROM student WHERE name LIKE '%a';  peeche se baat karta hai


**REACT AND MYSQL TEST ON MONDAY**
**50 QUERIES LIKHKAR LAANI HAI**



