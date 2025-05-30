create database collage;
use collage;
create table student(
name varchar(25)not null,
roll_no int not null unique,
city varchar(25)
);

select * from student;

insert into student(name,roll_no,city) values ('mrugal',101,'unjha');
insert into student (name,roll_no,city)values('jay',102,'ahemdabad');
insert into student (name,roll_no,city)values('krima',103,'mahesana'),('mahashi',104,'unjha');

