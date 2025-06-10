create database student;
use student;

create table student(
id int primary key ,
name varchar(25) not null,
percantage float not null
);

insert into student values (1,'mrugal',86.99);
insert into student values (2,'vivek',77.89);
insert into student values (3,'krima',92.67);

select * from student;

create table new_student(
id int,
name varchar(25),
 percantage varchar(25)
);

select * from new_student;

create trigger copy_student
after delete on student.student
for each row 
insert into new_student values (old.id,old.name,old.percantage);

insert into student values ( 101,'jay',43.56);
delete from student where id=101;


