create database company;
use company;
create table Employees
(EMPLOYEE_ID INT UNIQUE NOT NULL,
FIRST_NAME VARCHAR(50) NOT NULL,
LAST_NAME VARCHAR(50) NOT NULL,
EMAIL VARCHAR(40) NOT NULL,
HIRE_DATE DATE NOT NULL,
SALARY int not null,
COMISSION_PCT FLOAT ,
MANAGER_ID INT ,
DEPARTMENT_ID INT
);

alter table Employees modify HIRE_DATE VARCHAR(50);

UPDATE employees SET HIRE_DATE = date_format(HIRE_DATE,'%d-%b-%y');

insert into employees values(100,'Steven','King','SKING','17-Jul-87',24000,NULL,NULL,90);
insert into employees values(101,'Neena','Kochhar','NKOCHHAR','21-Sept-89',17000,NULL,100,90);
insert into employees values(102,'Lex','Dehaan','LDEHAAN','13-Jan-93',17000,NULL,100,90);
insert into employees values(103,'Alexander','Humold','AHUNOLD','3-Jan-90',9000,NULL,102,60);
insert into employees values(104,'Bruce','Ernst','BERNST','21-May-91',6000,NULL,103,60);
insert into employees values(107,'Diana','Lorentz','DLORENTZ','7-Feb-99',4200,NULL,103,60);
insert into employees values(124,'Kevin','Morgous','KMORGOUS','16-Nov-99',5800,NULL,100,50);
insert into employees values(141,'Trenna','Rajs','TRAJS','17-Oct-95',3500,NULL,124,50);
insert into employees values(142,'Curtis','Davies','CDAVIES','29-Jan-97',3100,NULL,124,50);
insert into employees values(143,'Randall','Matos','RMATOS','15-Mar-98',2600,NULL,124,50);
insert into employees values(144,'Peter','Vargas','PVARGAS','9-Jul-98',2500,NULL,124,50);
insert into employees values(149,'Eleni','Zlotkey','EZLOTKEY','29-Jan-00',10500,0.2,100,80);
insert into employees values(174,'Ellen','Abbel','EABBEL','11-May-96',11000,0.4,149,80);
insert into employees values(176,'Jonathan','Taylor','JTAYLOR','24-Mar-98',8600,0.5,149,80);
insert into employees values(178,'Kimerely','Grant','KGRANT','24-May-99',7000,0.1,149,NULL);
insert into employees values(200,'Jennifer','Whalen','JWHALEN','17-Sep-87',4400,NULL,101,10);
insert into employees values(201,'Micheal','Hartstein','MHARTSTEIN','17-Feb-96',13000,NULL,100,20);
insert into employees values(202,'Pat','Fay','PFAY','17-Aug-97',6000,NULL,201,20);
insert into employees values(205,'Shelley','Higgins','SHIGGINS','7-Jun-94',12000,NULL,101,110);
insert into employees values(206,'William','Giets','WGIETS','7-Jun-94',8300,NULL,205,110);

select * from employees;

-- display only those who get salary more than 10000;
select * from employees where salary>10000;

select * from employees where salary>10000 and salary<20000;

select * from employees where department_id = 90 or department_id = 60;

select * from employees where comission_pct is not null;

select * from employees where comission_pct is null;

select * from employees where employee_id between 100 and 150;

select distinct department_id from employees;

select * from employees where department_id = 90 or department_id = 60 or department_id = 50;

select * from employees where department_id in (90,60,50);

select * from employees where department_id not in (90,60,50);

select * from employees where first_name like '%e_';

select * from employees where hire_date like '%-J_N-%';

select * from employees where hire_date like '%-JU_-%';

select first_name,last_name,salary*12 as annual_salary from employees;

select first_name,last_name,salary,salary*comission_pct as comission_amnt,(salary*comission_pct) + salary as total_salary from employees;
