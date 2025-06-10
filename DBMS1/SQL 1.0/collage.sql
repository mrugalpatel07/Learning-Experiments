create database collage;
use collage;

create table students(
id int not null unique,
name varchar(25) not null,
rool_no int not null unique,
per int  not null);

