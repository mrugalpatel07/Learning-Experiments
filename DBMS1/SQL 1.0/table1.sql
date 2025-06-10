create schema 25_march;

create table 25_march.student

(id int not null unique,
name varchar(25) not null ,
percentage float not null
);
describe student;

select id,name,percentage from student;

insert into student value(101,'mrugal',86.86);
insert into student value (102,'jay',76.56);

update student set  id=101;
